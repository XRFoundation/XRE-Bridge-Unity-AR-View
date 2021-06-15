using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace UI.Pagination
{
    public partial class PagedRect
    {
        public void ViewportDimensionsChanged()
        {
            if (this == null || this.gameObject == null || !this.gameObject.activeInHierarchy) return;

            Pages.ForEach(p => p.UpdateDimensions());

            if (UsingScrollRect)
            {
                if (Application.isPlaying)
                {
                    StartCoroutine(DelayedCall(0.05f, () => { CenterScrollRectOnCurrentPage(true); }));
                }
                else
                {
                    SetScrollRectPosition();
                }
            }
        } 
    }
}
