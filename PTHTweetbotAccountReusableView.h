//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSLayoutConstraint, PTHKeyValueObserver, PTHShapeView, PTHTweetbotAccount, PTHTweetbotAvatarView, UILabel, UIView;

@interface PTHTweetbotAccountReusableView : UICollectionViewCell
{
    PTHKeyValueObserver *_nameObserver;
    PTHKeyValueObserver *_screenNameObserver;
    _Bool _hideLabels;
    _Bool _hideAvatar;
    _Bool _deleteMode;
    PTHTweetbotAccount *_account;
    UILabel *_nameLabel;
    UILabel *_screenNameLabel;
    PTHTweetbotAvatarView *_avatarView;
    UIView *_avatarHolder;
    PTHShapeView *_deleteButton;
    NSLayoutConstraint *_avatarHolderLeftConstraint;
}

+ (double)cellHeight;
@property(nonatomic) _Bool deleteMode; // @synthesize deleteMode=_deleteMode;
@property(readonly, nonatomic) NSLayoutConstraint *avatarHolderLeftConstraint; // @synthesize avatarHolderLeftConstraint=_avatarHolderLeftConstraint;
@property(readonly, nonatomic) PTHShapeView *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UIView *avatarHolder; // @synthesize avatarHolder=_avatarHolder;
@property(nonatomic) _Bool hideAvatar; // @synthesize hideAvatar=_hideAvatar;
@property(nonatomic) _Bool hideLabels; // @synthesize hideLabels=_hideLabels;
@property(readonly, nonatomic) PTHTweetbotAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) UILabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) PTHTweetbotAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)colorThemeDidChange;
- (void)delete:(id)arg1;
- (void)swipe;
- (id)initWithFrame:(struct CGRect)arg1;

@end
