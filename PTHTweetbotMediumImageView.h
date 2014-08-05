//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "PTHTweetbotMediumViewProtocol.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CAKeyframeAnimation, NSString, PTHTweetbotMedium, UIImage, UIImageView, UIPanGestureRecognizer, UIView, UIViewController;

@interface PTHTweetbotMediumImageView : UIScrollView <UIGestureRecognizerDelegate, UIScrollViewDelegate, PTHTweetbotMediumViewProtocol>
{
    PTHTweetbotMedium *_medium;
    CAKeyframeAnimation *_animation;
    UIImage *_image;
    NSString *_filename;
    UIImageView *_imageView;
    UIView *_shadowView;
    struct CGRect _presentBounds;
    struct CGRect _presentFrame;
    _Bool _disableLayout;
    UIViewController *_controller;
}

@property(nonatomic) _Bool disableLayout; // @synthesize disableLayout=_disableLayout;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)doubleTap;
- (void)longPress:(id)arg1;
- (void)didHide;
- (void)willHide;
- (void)didShow;
- (void)willShow;
- (void)dismissTo:(struct CGRect)arg1;
- (void)didPresent;
- (void)present;
- (void)willPresentFrom:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *flickView;
@property(readonly, nonatomic) UIView *panView;
- (void)setFrame:(struct CGRect)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setImage:(id)arg1;
@property(readonly, nonatomic) _Bool shouldPan;
- (id)initWithMedium:(id)arg1 responseDictionary:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;

@end
