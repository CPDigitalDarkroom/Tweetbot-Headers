//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCursorController.h"

@class PTHTweetbotList, UIBarButtonItem;

@interface PTHTweetbotListMembersController : PTHTweetbotCursorController
{
    PTHTweetbotList *_list;
    UIBarButtonItem *_leftBarButtonItem;
}

- (void).cxx_destruct;
- (id)modalCancelButtonTitle;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)nothingFoundTitle;
- (id)itemsTitle;
- (id)itemTitle;
- (id)searchTitle;
- (Class)cellClass;
- (void)viewDidLoad;
- (void)toggleMode;
- (void)addMember:(id)arg1;
- (id)initWithList:(id)arg1;

@end

