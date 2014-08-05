//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCell.h"

@class NSString, PTHHitInsetButton, PTHTweetbotAvatarView, PTHTweetbotUser, UIImageView, UILabel, UIView, _PTHVerticalLabelsContainer;

@interface PTHTweetbotAvatarDetailCell : PTHTweetbotCell
{
    PTHTweetbotAvatarView *_avatarView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    PTHHitInsetButton *_button;
    UIImageView *_disclosureView;
    _PTHVerticalLabelsContainer *_textContainerView;
}

+ (double)textHeight;
+ (struct CGSize)avatarSize;
+ (double)separatorOffset;
+ (double)cellHeightWithItem:(id)arg1 forTableView:(id)arg2;
@property(retain, nonatomic) PTHTweetbotAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)colorThemeDidChange;
@property(readonly, nonatomic) unsigned long long colorControlState;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) PTHTweetbotUser *user;
@property(readonly, nonatomic) UIView *textContainerView;
- (id)detailTextLabel;
- (id)textLabel;
@property(readonly, nonatomic) PTHHitInsetButton *button;
@property(readonly, nonatomic) UIImageView *disclosureView;
- (void)setAccessoryView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
