//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCell.h"

@class PTHProgressView, UIImageView, UILabel, UIView;

@interface PTHTweetbotCursorGapCell : PTHTweetbotCell
{
    UIView *_loadingContainerView;
    UIImageView *_arrowView;
    UILabel *_loadLabel;
    PTHProgressView *_progressView;
    _Bool _isShowingProgress;
    unsigned long long _loadRectEdge;
}

@property(nonatomic) unsigned long long loadRectEdge; // @synthesize loadRectEdge=_loadRectEdge;
- (void).cxx_destruct;
- (void)setShowProgress:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLoadRectEdge:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

