#import "iOSNativeShare.h"

@implementation iOSNativeShare{
}

#ifdef UNITY_5_0

#import "iPhone_View.h"

#else

extern UIViewController* UnityGetGLViewController();

#endif

+(id) withTitle:(char*)title withMessage:(char*)message{
    
    return [[iOSNativeShare alloc] initWithTitle:title withMessage:message];
}

-(id) initWithTitle:(char*)title withMessage:(char*)message{
    
    self = [super init];
    
    if( !self ) return self;
    
    ShowAlertMessage([[NSString alloc] initWithUTF8String:title], [[NSString alloc] initWithUTF8String:message]);
    
    return self;
    
}

void ShowAlertMessage (NSString *title, NSString *message){
    
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:title
                          
                                                    message:message
                          
                                                   delegate:nil
                          
                                          cancelButtonTitle:@"OK"
                          
                                          otherButtonTitles: nil];
    
    [alert show];
    
}


+(id) withText:(char*)text withURL:(char*)url withImage:(char*)image withSubject:(char*)subject{
    
    return [[iOSNativeShare alloc] initWithText:text withURL:url withImage:image withSubject:subject];
}

-(id) initWithText:(char*)text withURL:(char*)url withImage:(char*)filePath withSubject:(char*)subject{
    
    self = [super init];
    
    if( !self ) return self;
    
    NSString *mFilePath = filePath ? [[NSString alloc] initWithUTF8String:filePath] : nil;
    
    NSArray *activityItems = [NSArray arrayWithObjects:[NSURL fileURLWithPath:mFilePath], nil];
    
    UIActivityViewController *activity = [[UIActivityViewController alloc] initWithActivityItems:activityItems applicationActivities:Nil];
    
    UIViewController *rootViewController = UnityGetGLViewController();
    [activity setCompletionHandler:^(NSString *act, BOOL success)
     {
         
         NSLog(@"act type %@",act);
         NSString *result = nil;
         
         if ( [act isEqualToString:UIActivityTypePostToTwitter] )  result = @"POST-SHARED-SUCCESSFULLY";
         if ( [act isEqualToString:UIActivityTypePostToFacebook] ) result = @"POST-SHARED-SUCCESSFULLY";
         
         if (success)
         {
             UIAlertView *av = [[UIAlertView alloc] initWithTitle:result message:nil delegate:nil cancelButtonTitle:NSLocalizedString(@"OK", nil) otherButtonTitles:nil];
             UnitySendMessage("ccfControllers", "ResumeFleeceVideo", "hey");
             // [av show];
         }
         else
         {
             UnitySendMessage("ccfControllers", "ResumeFleeceVideo", "hey");

             //UIAlertView *av = [[UIAlertView alloc] initWithTitle:NSLocalizedString(@"ERROR", nil) message:nil delegate:nil cancelButtonTitle:NSLocalizedString(@"OK", nil) otherButtonTitles:nil];
             //[av show];
         }
     }];
    
    //if iPhone
    if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) {
        [rootViewController presentViewController:activity animated:YES completion:Nil];
    }
    //if iPad
    else {
        // Change Rect to position Popover
        UIPopoverController *popup = [[UIPopoverController alloc] initWithContentViewController:activity];
        [popup presentPopoverFromRect:CGRectMake(rootViewController.view.frame.size.width/2, rootViewController.view.frame.size.height/4, 0, 0)inView:rootViewController.view permittedArrowDirections:UIPopoverArrowDirectionAny animated:YES];
    }
    return self;
}

-(BOOL) isStringValideBase64:(NSString*)string{
    
    NSString *regExPattern = @"^(?:[A-Za-z0-9+/]{4})*(?:[A-Za-z0-9+/]{2}==|[A-Za-z0-9+/]{3}=)?$";
    
    NSRegularExpression *regEx = [[NSRegularExpression alloc] initWithPattern:regExPattern options:NSRegularExpressionCaseInsensitive error:nil];
    NSUInteger regExMatches = [regEx numberOfMatchesInString:string options:0 range:NSMakeRange(0, [string length])];
    return regExMatches != 0;
}




# pragma mark - C API
iOSNativeShare* instance;

void showAlertMessage(struct ConfigStruct *confStruct) {
    instance = [iOSNativeShare withTitle:confStruct->title withMessage:confStruct->message];
}

void showSocialSharing(struct SocialSharingStruct *confStruct) {
    instance = [iOSNativeShare withText:confStruct->text withURL:confStruct->url withImage:confStruct->image withSubject:confStruct->subject];
}

@end
