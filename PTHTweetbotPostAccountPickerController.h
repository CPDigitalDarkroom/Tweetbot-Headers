//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UIDynamicAnimatorDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSMutableArray, PTHShapeView, PTHTweetbotAccount, PTHTweetbotAvatarView, UIDynamicAnimator, UIDynamicItemBehavior, UIScrollView, UISnapBehavior, UIView;

@interface PTHTweetbotPostAccountPickerController : PTHViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIScrollViewDelegate, UIDynamicAnimatorDelegate>
{
    UIView *_backgroundView;
    NSMutableArray *_accounts;
    UIDynamicAnimator *_animator;
    UIScrollView *_scrollView;
    NSMutableArray *_avatarViews;
    NSMutableArray *_filterItems;
    NSMutableArray *_attachmentBehaviors;
    UISnapBehavior *_selectedSnapBehavior;
    UIDynamicItemBehavior *_dynamicItemBehavior;
    PTHShapeView *_targetView;
    unsigned long long _selectedAccountIndex;
    _Bool _dragged;
    _Bool _dismissed;
    PTHTweetbotAccount *_selectedAccount;
    PTHTweetbotAvatarView *_presentingAvatarView;
}

@property(nonatomic) unsigned long long selectedAccountIndex; // @synthesize selectedAccountIndex=_selectedAccountIndex;
@property(retain, nonatomic) PTHTweetbotAvatarView *presentingAvatarView; // @synthesize presentingAvatarView=_presentingAvatarView;
@property(retain, nonatomic) PTHTweetbotAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (void)dismissTransition:(id)arg1;
- (void)presentTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)didTap:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)_dismiss;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setup;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

