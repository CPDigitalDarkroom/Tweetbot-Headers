//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCursorController.h"

@class PTHTweetbotList;

@interface PTHTweetbotListSubscribersController : PTHTweetbotCursorController
{
    PTHTweetbotList *_list;
}

- (void).cxx_destruct;
- (id)modalCancelButtonTitle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_showOptions:(id)arg1;
- (unsigned long long)itemDisplayCount;
- (id)nothingFoundTitle;
- (id)itemsTitle;
- (id)itemTitle;
- (id)searchTitle;
- (Class)cellClass;
- (void)viewDidLoad;
- (id)initWithList:(id)arg1;

@end

