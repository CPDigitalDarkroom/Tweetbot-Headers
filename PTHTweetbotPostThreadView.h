//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, PTHTweetbotPostDraft;

@interface PTHTweetbotPostThreadView : UIView
{
    NSMutableArray *_threadViews;
    NSMutableArray *_threadConstraints;
    PTHTweetbotPostDraft *_draft;
}

@property(retain, nonatomic) PTHTweetbotPostDraft *draft; // @synthesize draft=_draft;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
