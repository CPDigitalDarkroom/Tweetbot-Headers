//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIViewController;

@interface PTHBlurBackgroundView : UIView
{
    UIViewController *_fromViewController;
    long long _launchOrientation;
    _Bool _isSlow;
    UIView *_fromSnapshotContainer;
    UIView *_blurTintOverlay;
    UIView *_blurSnapshot;
    double _blurRadius;
    UIColor *_blurTintColor;
    double _blurSaturation;
    struct CGAffineTransform _backgroundTransform;
}

@property(nonatomic) struct CGAffineTransform backgroundTransform; // @synthesize backgroundTransform=_backgroundTransform;
@property(nonatomic) double blurSaturation; // @synthesize blurSaturation=_blurSaturation;
@property(retain, nonatomic) UIColor *blurTintColor; // @synthesize blurTintColor=_blurTintColor;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_didRotate:(id)arg1;
- (void)addParallaxEffect;
- (void)cleanupDismiss;
- (void)executeDismiss;
- (void)prepareDismiss;
- (void)cleanupPresent;
- (void)executePresent;
- (void)preparePresent;
- (id)initWithViewController:(id)arg1;

@end
