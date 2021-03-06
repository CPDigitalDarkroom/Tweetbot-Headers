//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSMutableArray, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface PTHTweetbotHelpController : PTHViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate>
{
    UIView *_backgroundView;
    NSMutableArray *_cards;
    unsigned long long _currentCard;
    double _dismissDuration;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (void)dismissTransition:(id)arg1;
- (void)presentTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)pan:(id)arg1;
- (void)tap;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_follow:(id)arg1;
- (void)configureStep:(id)arg1 index:(unsigned long long)arg2 cardView:(id)arg3 contentView:(id)arg4;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

