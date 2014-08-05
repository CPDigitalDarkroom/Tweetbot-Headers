//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITextFieldDelegate.h"

@class PTHStaticSectionCell, PTHTweetbotAccount;

@interface PTHTweetbotServiceLoginSettingsController : PTHViewController <UITextFieldDelegate>
{
    PTHTweetbotAccount *_account;
    Class _serviceClass;
    PTHStaticSectionCell *_usernameCell;
    PTHStaticSectionCell *_passwordCell;
    _Bool _isLoggedIn;
}

@property(readonly, nonatomic) _Bool isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)login;
- (void)loginDidEnd:(long long)arg1;
- (void)updateUI;
- (void)loadView;
- (id)initWithAccount:(id)arg1 serviceClass:(Class)arg2;

@end

