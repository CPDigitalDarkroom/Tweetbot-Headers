//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotLoadingTableViewController.h"

@interface PTHTweetbotTrendsController : PTHTweetbotLoadingTableViewController
{
    unsigned long long _loadedWOEID;
}

- (void)dealloc;
- (void)_setDefaultTrend;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_loadTrendsIfNeeded;
- (void)loadDataIfNeeded:(_Bool)arg1;
- (id)nothingFoundTitle;
- (void)configure:(id)arg1 forItem:(id)arg2;
- (id)initWithAccount:(id)arg1;

@end

