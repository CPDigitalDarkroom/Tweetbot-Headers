//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCursorController.h"

@class PTHTweetbotStatus;

@interface PTHTweetbotStatusFavoritesController : PTHTweetbotCursorController
{
    PTHTweetbotStatus *_status;
}

- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)itemDisplayCount;
- (id)nothingFoundTitle;
- (id)itemsTitle;
- (id)itemTitle;
- (id)searchTitle;
- (Class)cellClass;
- (id)initWithStatus:(id)arg1;

@end

