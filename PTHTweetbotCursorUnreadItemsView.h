//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface PTHTweetbotCursorUnreadItemsView : UIControl
{
    UIView *_contentView;
    NSLayoutConstraint *_contentPositionConstraint;
    UILabel *_countLabel;
    long long _unreadItemCount;
    double _position;
    NSString *_unreadItemCountString;
}

@property(retain, nonatomic) NSString *unreadItemCountString; // @synthesize unreadItemCountString=_unreadItemCountString;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) long long unreadItemCount; // @synthesize unreadItemCount=_unreadItemCount;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setPosition:(double)arg1 animated:(_Bool)arg2;
- (void)_updateCountLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

