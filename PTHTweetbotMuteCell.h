//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHColorGroupTableViewCell.h"

@class PTHTweetbotStatusFilter, UIViewController;

@interface PTHTweetbotMuteCell : PTHColorGroupTableViewCell
{
    PTHTweetbotStatusFilter *_filter;
}

@property(retain, nonatomic) PTHTweetbotStatusFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setNeedsDisplay;
- (void)updateTime;
- (void)_longPress:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithColorGroupName:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak UIViewController *viewController;

@end

