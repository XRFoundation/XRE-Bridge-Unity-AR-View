//
//  UVolPlayer.h
//  NativeiOSApp
//
//  Created by george betsukeli on 6/29/21.
//  Copyright © 2021 unity. All rights reserved.

//call from anywhere using [[UVolPlayer uVolPlayer] methodname];
#include <UnityFramework/UnityFramework.h>
#include <UnityFramework/NativeCallProxy.h>//NativeCallsProtocol
#import <Foundation/Foundation.h>


#ifndef UVolPlayer_h
#define UVolPlayer_h
@interface UVolPlayer : NSObject<UnityFrameworkListener, NativeCallsProtocol>
{

}
@property UnityFramework* ufw;
@property bool didQuit;

+ (UVolPlayer*)uVolPlayer;
- (UIView*)UnityView;

//playback
- (void)Play:(const char*) filepath;
- (void)ExitPlayer;

- (void)PlayPauseToggle;
- (void)Pause;
- (void)Seek:(const char*) precent;

//AR
- (void)ARPlace:(const char*) fromScreenPos;

//sharing
- (void)TakeScreenshot;
- (void)StartRecording;
- (void)StopRecording;
- (void)ShareCapture;
@end
#endif /* UVolPlayer_h */
