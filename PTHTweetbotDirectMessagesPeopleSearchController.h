//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, PTHSearchBar, PTHTweetbotAccount, PTHTweetbotUser, UIBarButtonItem, UITableView;

@interface PTHTweetbotDirectMessagesPeopleSearchController : PTHViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    PTHTweetbotAccount *_account;
    UITableView *_tableView;
    PTHSearchBar *_searchBar;
    struct CGRect _keyboardFrame;
    UIBarButtonItem *_useButton;
    PTHTweetbotUser *_selectedItem;
    NSArray *_users;
    NSString *_searchString;
}

@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) PTHTweetbotUser *selectedItem; // @synthesize selectedItem=_selectedItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateUI:(id)arg1;
- (void)_use;
- (void)_hideKeyboard;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)keyboardWillChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_updateLayout;
- (void)loadView;
- (id)initWithAccount:(id)arg1;

@end

