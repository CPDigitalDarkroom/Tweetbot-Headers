//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface _PTHVerticalLabelsContainer : UIView
{
    NSMutableArray *_labels;
    NSMutableArray *_paddings;
    NSMutableArray *_verticalConstraints;
    NSArray *_lastVisibleLabels;
}

- (void).cxx_destruct;
- (void)addLabel:(id)arg1;
- (void)addLabel:(id)arg1 padding:(double)arg2;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

