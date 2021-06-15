using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace UI.Pagination
{
    public partial class PagedRect
    {
        void Awake()
        {
            CurrentPage = DefaultPage;

            // This is to help maintain compatibility with earlier versions of PagedRect where ScrollRect was a standard Unity ScrollRect instead of a PagedRect_ScrollRect
            // (if there isn't a PagedRectScrollRect present, then the value of 'ScrollRect' will still be null, and UsingScrollRect will be false)
            if (ScrollRect == null) ScrollRect = GetComponent<PagedRect_ScrollRect>();

            if (UsingScrollRect)
            {
                ScrollRect.horizontalNormalizedPosition = 0;
                ScrollRect.verticalNormalizedPosition = 0;

                ScrollRect.content.anchoredPosition = Vector2.zero;
            }

            if (Application.isPlaying) InvalidateButtonPool();
            OptimizePagination();
            InitializePaginationIcons();

            PagedRectTimer.DelayedCall(0, SetFirstPage, this);
        }

        /*void LateUpdate()
        {
            if (!firstPageSet)
            {
                SetFirstPage();
            }
        }*/

        void SetFirstPage()
        {
            if (firstPageSet) return;

            firstPageSet = true;

            if (UsingScrollRect)
            {
                CenterScrollRectOnCurrentPage(true);

                PagedRectTimer.DelayedCall(0.01f, () => CenterScrollRectOnCurrentPage(true), this);

                PagedRectTimer.DelayedCall(0.05f,
                    () =>
                    {                        
                        UpdatePages(true, false);
                        UpdateSeamlessPagePositions();
                    }, this);
            }

            UpdatePagination();
        }

        void EditorUpdate()
        {
            if (Application.isPlaying) return;

#if UNITY_EDITOR
            var actionsToExecute = delayedEditorActions.Where(kvp => UnityEditor.EditorApplication.timeSinceStartup >= kvp.Key).ToList();
            foreach (var actionToExecute in actionsToExecute)
            {
                try
                {
                    actionToExecute.Value.Invoke();
                }
                finally
                {
                    delayedEditorActions.Remove(actionToExecute);
                }
            }
#endif
        }

        void Start()
        {
            this.GetComponentInChildren<Viewport>().Initialise(this);

            if (UsingScrollRect)
            {
                ScrollRect.onValueChanged.AddListener(ScrollRectValueChanged);

                UpgradeLayoutGroupIfNecessary();
            }

            UpdateDisplay();

            if (Application.isPlaying)
            {
                if (UseSwipeInput && (!UsingScrollRect || ShowPagePreviews))
                {
                    MobileInput.enabled = true;
                }

                if (UseScrollWheelInput)
                {
                    ScrollWheelInput.enabled = true;
                }
            }

            if (Application.isPlaying)
            {
                SetupMouseEvents();
            }

            if (NumberOfPages == 0)
            {
            }
            else if (Application.isPlaying)
            {
                // Show the default first page 
                if (DefaultPage <= NumberOfPages) SetCurrentPage(DefaultPage, true);
            }
            else
            {
#if UNITY_EDITOR
                if (CurrentPage == 0)
                {
                    if (editorSelectedPage > 0)
                    {
                        var pageIsVisible = Pages[editorSelectedPage - 1].gameObject.activeSelf;
                        if (pageIsVisible && !UsingScrollRect)
                        {
                            CurrentPage = editorSelectedPage;
                        }
                        else
                        {
                            SetCurrentPage(editorSelectedPage, true);
                        }
                    }
                    else
                    {
                        SetCurrentPage(DefaultPage, true);
                    }
                }
                else if (UsingScrollRect)
                {
                    SetCurrentPage(editorSelectedPage, true);
                }

                UnityEditor.EditorApplication.update += EditorUpdate;
#endif
            }            
        }

        void OnEnable()
        {
            PagedRectTimer.DelayedCall(0, ViewportDimensionsChanged, this);
        }

        void Update()
        {
            MonitorPageCollection();

            if (!Application.isPlaying) return;

            // Check for dynamic changes to animation type
            if (previousAnimationTypeValue != AnimationType)
            {
                // if we don't do this, some of the pages may end up off-screen due to previous animations
                Pages.ForEach(p => p.ResetPositionAndAlpha());
            }
            previousAnimationTypeValue = AnimationType;

            // Handle Keyboard Input
            if (UseKeyboardInput)
            {
                HandleKeyboardInput();
            }

            _timeSinceLastPage += Time.deltaTime;

            // Handle moving to the next page if need be
            if (AutomaticallyMoveToNextPage)
            {
                if (_timeSinceLastPage >= DelayBetweenPages)
                {
                    if (UsingScrollRect && LoopSeamlessly)
                    {
                        AutomaticallyMoveToNextPage_Seamless();
                    }
                    else
                    {
                        NextPage();
                    }
                }
            }

            if (!mouseIsOverPagedRect && OnlyUseScrollWheelInputWhenMouseIsOver)
            {
                ScrollWheelInput.enabled = false;
            }
            else
            {
                ScrollWheelInput.enabled = UseScrollWheelInput;
            }

            CheckForDeletedPages();

            if (lastEndDragData != null) lastEndDragData = null;
        }

        void OnValidate()
        {
            this.isDirty = true;

            if (!gameObject.activeInHierarchy) return;

            PagedRectTimer.DelayedCall(0, () =>
            {
                if (this.isDirty)
                {
                    UpdateDisplay();
                }

            }, this);
        }
    }
}
