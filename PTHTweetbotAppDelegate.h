//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class PTHWindow, UINavigationController, UIWindow;

@interface PTHTweetbotAppDelegate : NSObject <UIApplicationDelegate>
{
    _Bool _firstTime;
    _Bool _wasBackground;
    PTHWindow *_window;
    CDUnknownBlockType _openURLBlock;
    UINavigationController *_navigationController;
}

@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(copy, nonatomic) CDUnknownBlockType openURLBlock; // @synthesize openURLBlock=_openURLBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)configureSupportMailController:(id)arg1;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)_showNotification:(id)arg1;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end
