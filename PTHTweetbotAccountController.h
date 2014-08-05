//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "UITabBarControllerDelegate.h"

@class NSMutableArray, NSMutableDictionary, PTHHelpPointer, PTHReachability, PTHTweetbotAccount, PTHTweetbotAccountPhoneTabPicker, PTHTweetbotAccountQuickPickerController, PTHTweetbotCursorController, PTHTweetbotDirectMessageThreadsController, PTHTweetbotDirectMessagesLoginController, PTHTweetbotSyncService, UIBarButtonItem, UINavigationController, UIViewController;

@interface PTHTweetbotAccountController : UITabBarController <UITabBarControllerDelegate>
{
    PTHTweetbotAccount *_account;
    _Bool _firstTime;
    UIBarButtonItem *_postBarButtonItem;
    NSMutableDictionary *_tabToControllers;
    PTHHelpPointer *_tabHelpPointer;
    PTHReachability *_apiReachability;
    _Bool _needsRefresh;
    PTHTweetbotSyncService *_syncService;
    PTHTweetbotCursorController *_hometimelineController;
    PTHTweetbotCursorController *_mentionsController;
    PTHTweetbotDirectMessageThreadsController *_directMessagesController;
    unsigned long long _autoRefreshCounter;
    PTHTweetbotAccountPhoneTabPicker *_tabPicker;
    NSMutableArray *_readViews;
    NSMutableArray *_popupArrowsViews;
    PTHTweetbotAccountQuickPickerController *_accountQuickPickerController;
    PTHTweetbotDirectMessagesLoginController *_directMessagesLoginController;
}

@property(readonly, nonatomic) PTHTweetbotAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showAccountPicker:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reachabilityDidChange;
- (void)_streamingBackfillFailed;
- (void)_streamingChurn;
- (void)_streamingBusy;
- (_Bool)_updateStreaming;
- (void)_willResignActive;
- (void)_didBecomeActive;
- (void)_minuteHeartbeat;
- (void)_refreshIfNeeded;
- (void)pushRefreshDirectMessage:(long long)arg1;
- (void)pushRefreshMentions;
- (void)refreshTimeline;
- (void)refreshAllDelayed;
- (void)refreshAll;
- (void)_credentialsUpdated;
- (void)post:(id)arg1;
- (void)postLastDraft:(id)arg1;
- (void)changeAccounts:(id)arg1;
- (void)nextAccount;
- (void)_postDM:(id)arg1;
- (void)_post:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)setSelectedTab:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) long long selectedTab;
- (long long)tabForController:(id)arg1;
- (id)rootViewControllerForTab:(long long)arg1;
- (id)navigationViewControllerForTab:(long long)arg1;
@property(nonatomic) long long lastSelectedTab;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIViewController *currentViewController;
@property(readonly, retain, nonatomic) UIViewController *selectedRootViewController;
@property(readonly, retain, nonatomic) UINavigationController *selectedNavigationController;
- (void)_updateSyncService;
- (void)_keyUpNotification:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

