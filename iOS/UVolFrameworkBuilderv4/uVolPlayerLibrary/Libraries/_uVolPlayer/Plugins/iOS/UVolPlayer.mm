//
//  NSObject+UnityAppController.h
//  NativeiOSApp
//
//  Created by george betsukeli on 6/29/21.
//  Copyright © 2021 unity. All rights reserved.
//
//#include <UnityFramework/UnityFramework.h>
//#include <UnityFramework/NativeCallProxy.h>//NativeCallsProtocol

//#import <Foundation/Foundation.h>
#include "UVolPlayer.h"



UnityFramework* UnityFrameworkLoad()
{
    NSString* bundlePath = nil;
    bundlePath = [[NSBundle mainBundle] bundlePath];
    bundlePath = [bundlePath stringByAppendingString: @"/Frameworks/UnityFramework.framework"];
    
    NSBundle* bundle = [NSBundle bundleWithPath: bundlePath];
    if ([bundle isLoaded] == false) [bundle load];
    
    UnityFramework* ufw = [bundle.principalClass getInstance];
    if (![ufw appController])
    {
        // unity is not initialized
        [ufw setExecuteHeader: &_mh_execute_header];
    }
    return ufw;
}

struct UVolFile {
    NSString *fileName;
    int *frames;
    int *framerate;
};
@implementation UVolPlayer
UVolFile currentFile;
bool didQuit;

NSDictionary* uappLaunchOpts;

+ (id)uVolPlayer {
    NSLog(@"uVolInstance called");
    static UVolPlayer *uVolInstance = nil;
    @synchronized(self) {
        if (uVolInstance == nil)
            uVolInstance = [[self alloc] init];
    }
    
    [uVolInstance initUnity];//show UnityView
    
    
    return uVolInstance;
}
- (UIView*)UnityView {
    return [[[self ufw] appController] rootView];
}


- (void)initUnity
{
    if([self unityIsInitialized]) {
        NSLog(@"Unity already initialized", @"Unload Unity first");
        [[self ufw] showUnityWindow];
        return;
    }
    if([self didQuit]) {
        NSLog(@"Unity cannot be initialized after quit", @"Use unload instead");
        return;
    }
    
    [self setUfw: UnityFrameworkLoad()];
    // Set UnityFramework target for Unity-iPhone/Data folder to make Data part of a UnityFramework.framework and uncomment call to setDataBundleId
    // ODR is not supported in this case, ( if you need embedded and ODR you need to copy data )
    [[self ufw] setDataBundleId: "com.unity3d.framework"];
    [[self ufw] registerFrameworkListener: self];
    [NSClassFromString(@"FrameworkLibAPI") registerAPIforNativeCalls:self];
    
    NSArray *arguments = [[NSProcessInfo processInfo] arguments];
    int uArgc = arguments.count;
    char** uArgv = [self getArray:arguments];;
    
    [[self ufw] runEmbeddedWithArgc: uArgc argv: uArgv appLaunchOpts: uappLaunchOpts];
    
    // set quit handler to change default behavior of exit app
    [[self ufw] appController].quitHandler = ^(){ NSLog(@"AppController.quitHandler called"); };
    
    //[self freeArray:uArgv];call on exit unityview
}
- (void) ExitPlayer{
    if([self unityIsInitialized]) {
        
        [UnityFrameworkLoad() unloadApplication];
    }
}

- (bool)unityIsInitialized { return [self ufw] && [[self ufw] appController]; }

- (void)ARPlace:(const char*) fromScreenPos
{
    [[self ufw] sendMessageToGOWithName: "uVolController" functionName: "Place" message: fromScreenPos];
}
- (void)Play:(const char*) filepath
{
    [[self ufw] sendMessageToGOWithName: "uVolController" functionName: "Play" message: filepath];
}
- (void)PlayPauseToggle
{
    [[self ufw] sendMessageToGOWithName: "uVolController" functionName: "PlayPauseToggle" message: ""];
}
- (void)Pause
{
    [[self ufw] sendMessageToGOWithName: "uVolController" functionName: "Pause" message: ""];
}
- (void)Seek:(const char*) precent
{
    [[self ufw] sendMessageToGOWithName: "uVolController" functionName: "Seek" message: precent];
}
- (void)StartRecording
{
    [[self ufw] sendMessageToGOWithName: "uVolSharing" functionName: "StartRecording" message: ""];
}
- (void)StopRecording
{
    [[self ufw] sendMessageToGOWithName: "uVolSharing" functionName: "StopRecording" message: ""];
}
- (void)TakeScreenshot
{
    [[self ufw] sendMessageToGOWithName: "uVolSharing" functionName: "TakeScreenshot" message: ""];
}
- (void)ShareCapture
{
    [[self ufw] sendMessageToGOWithName: "uVolSharing" functionName: "ShareCapture" message: ""];
}
- (void)onReachedEndOfFile
{
    NSLog(@"finished watching file its looping");
}
- (void)onFinishedRecording:(NSString*)path
{
    NSLog([NSString stringWithFormat: @"%@%@", @"finished capture ", path]);//show alert wont show until unityview is unloaded
}

- (void)unityDidUnload:(NSNotification*)notification
{
    NSLog(@"unityDidUnload called");
    
    [[self ufw] unregisterFrameworkListener: self];
    [self setUfw: nil];
    //[self showHostMainWindow:@""];
}

- (void)unityDidQuit:(NSNotification*)notification
{
    NSLog(@"unityDidQuit called");
    
    [[self ufw] unregisterFrameworkListener: self];
    [self setUfw: nil];
    [self setDidQuit:true];
    //[self showHostMainWindow:@""];
}

- (void)applicationWillResignActive:(UIApplication *)application { [[[self ufw] appController] applicationWillResignActive: application]; }
- (void)applicationDidEnterBackground:(UIApplication *)application { [[[self ufw] appController] applicationDidEnterBackground: application]; }
- (void)applicationWillEnterForeground:(UIApplication *)application { [[[self ufw] appController] applicationWillEnterForeground: application]; }
- (void)applicationDidBecomeActive:(UIApplication *)application { [[[self ufw] appController] applicationDidBecomeActive: application]; }
- (void)applicationWillTerminate:(UIApplication *)application { [[[self ufw] appController] applicationWillTerminate: application]; }

- (char**)getArray:(NSArray*)a_array
{
    unsigned count = [a_array count];
    char **array = (char **)malloc((count + 1) * sizeof(char*));

    for (unsigned i = 0; i < count; i++)
    {
         array[i] = strdup([[a_array objectAtIndex:i] UTF8String]);
    }
    array[count] = NULL;
    return array;
}
- (void)freeArray:(char **)array
{
    if (array != NULL)
    {
        for (unsigned index = 0; array[index] != NULL; index++)
        {
            free(array[index]);
        }
        free(array);
    }
}


@end
//NS_ASSUME_NONNULL_END
