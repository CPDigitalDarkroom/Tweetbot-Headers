//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PTHBlurBackgroundTransitioningController.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSMutableArray, PTHBlurBackgroundTransitioningDelegate, PTHShapeView, PTHTweetbotAccount, PTHTweetbotAvatarView, UICollectionView, UICollectionViewFlowLayout, UIDynamicAnimator, UILabel, UIView, _PTHTweetbotAccountPickerCollectionHolder;

@interface PTHTweetbotAccountPickerController : UIViewController <PTHBlurBackgroundTransitioningController, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_accounts;
    UIView *_contentView;
    PTHBlurBackgroundTransitioningDelegate *_transitioningDelegate;
    UICollectionViewFlowLayout *_layout;
    _PTHTweetbotAccountPickerCollectionHolder *_collectionHolder;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    UIView *_controlsView;
    PTHShapeView *_settingsButton;
    PTHShapeView *_addButton;
    UIDynamicAnimator *_animator;
    PTHTweetbotAvatarView *_movingAvatarView;
    struct CGPoint _movingStartPoint;
    NSIndexPath *_movingIndexPath;
    PTHTweetbotAccount *_selectedAccount;
}

@property(retain, nonatomic) PTHTweetbotAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_showSettings:(id)arg1;
- (void)_addAccount:(id)arg1;
- (void)dismissTransition:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)presentTransition:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)swipe:(id)arg1;
- (void)longPress:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_deleteAccount:(id)arg1;
- (void)_reloadData;
- (void)ok:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
