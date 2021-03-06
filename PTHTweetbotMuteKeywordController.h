//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

@class NSArray, NSMutableArray, PTHStaticSectionCell, PTHTweetbotStatusFilter, UIScrollView;

@interface PTHTweetbotMuteKeywordController : PTHViewController
{
    UIScrollView *_scrollView;
    PTHTweetbotStatusFilter *_statusFilter;
    PTHTweetbotStatusFilter *_originalStatusFilter;
    PTHStaticSectionCell *_keywordCell;
    PTHStaticSectionCell *_regularExpressionCell;
    PTHStaticSectionCell *_matchingTweetsCell;
    PTHStaticSectionCell *_durationCell;
    NSMutableArray *_matchingTweets;
    unsigned long long _tweetCount;
    NSArray *_timelineStatuses;
    NSArray *_mentionStatuses;
    _Bool _firstTime;
}

- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)save;
- (void)_showMatchingTweets:(id)arg1;
- (void)_changeDuration:(id)arg1;
- (void)_hideKeyboard;
- (void)updateUI;
- (_Bool)shouldShowRegularExpression;
- (void)loadView;
- (id)initWithStatusFilter:(id)arg1;

@end

