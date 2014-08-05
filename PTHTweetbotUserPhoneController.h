//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "PTHTweetbotEntityTextLabelDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSLayoutConstraint, PTHStaticSectionCell, PTHStaticSectionView, PTHTweetbotAvatarView, PTHTweetbotEntityTextLabel, PTHTweetbotRelationship, PTHTweetbotUser, UIBarButtonItem, UIControl, UIImageView, UILabel, UIScrollView, UIView;

@interface PTHTweetbotUserPhoneController : PTHViewController <PTHTweetbotEntityTextLabelDelegate, UIScrollViewDelegate>
{
    PTHTweetbotUser *_user;
    UIScrollView *_scrollView;
    _Bool _hasAppeared;
    UIBarButtonItem *_rightBarButtonItem;
    UIControl *_descriptionView;
    UILabel *_descriptionUserNameLabel;
    UILabel *_descriptionScreenNameLabel;
    UIImageView *_descriptionCoverBlurImageView;
    UIImageView *_descriptionCoverImageView;
    PTHTweetbotEntityTextLabel *_descriptionEntityTextLabel;
    PTHTweetbotAvatarView *_descriptionAvatarView;
    UIImageView *_descriptionAvatarBadgeView;
    NSLayoutConstraint *_descriptionCoverBlurImageViewTopConstraint;
    NSLayoutConstraint *_descriptionCoverImageViewTopConstraint;
    PTHStaticSectionCell *_friendshipCell;
    PTHStaticSectionView *_locationSection;
    PTHStaticSectionCell *_locationPlaceCell;
    PTHStaticSectionCell *_locationURLCell;
    PTHStaticSectionCell *_detailTweetsCountCell;
    PTHStaticSectionCell *_detailFollowersCountCell;
    PTHStaticSectionCell *_detailFollowingCountCell;
    PTHStaticSectionCell *_detailListedCountCell;
    UILabel *_lastTweetLabel;
    UILabel *_userInfoLabel;
    PTHTweetbotRelationship *_relationship;
    _Bool _relationshipUpdating;
    UIView *_bottomView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)entityTextLabel:(id)arg1 didLongPressEntity:(id)arg2 entityFrame:(struct CGRect)arg3;
- (void)entityTextLabel:(id)arg1 didTouchUpEntity:(id)arg2 entityFrame:(struct CGRect)arg3;
- (void)_showBlockOptions:(id)arg1;
- (void)_showReplyOptions:(id)arg1;
- (void)_showListMemberships:(id)arg1;
- (void)_showFollowing:(id)arg1;
- (void)_showFollowers:(id)arg1;
- (void)_showTweets:(id)arg1;
- (void)_showPlace:(id)arg1;
- (void)_showController:(id)arg1 cell:(id)arg2;
- (void)_showURL:(id)arg1;
- (void)_showOptions:(id)arg1;
- (void)_showFavstar;
- (void)_showEdit;
- (void)_showCoverImage:(id)arg1;
- (void)_showAvatarImage:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)_userWasUpdated;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)_createPhotosView;
- (id)_createUserInfoView;
- (id)_createDetailView;
- (id)_createLocationView;
- (id)_createFriendshipView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)_createDescription;
- (void)_updateDescription;
- (id)initWithTweetbotUser:(id)arg1;

@end

