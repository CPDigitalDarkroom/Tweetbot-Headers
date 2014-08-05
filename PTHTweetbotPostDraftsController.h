//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, PTHTweetbotAccount, PTHTweetbotPostDraft, UITableView;

@interface PTHTweetbotPostDraftsController : PTHViewController <UITableViewDelegate, UITableViewDataSource>
{
    PTHTweetbotAccount *_account;
    UITableView *_tableView;
    NSMutableArray *_postDrafts;
    PTHTweetbotPostDraft *_postDraft;
}

@property(retain, nonatomic) PTHTweetbotPostDraft *postDraft; // @synthesize postDraft=_postDraft;
- (void).cxx_destruct;
- (void)dealloc;
- (id)modalCancelButtonTitle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;
- (void)loadView;
- (void)toggleMode;
- (id)initWithAccount:(id)arg1;

@end
