//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextViewDelegate.h"

@class NSString, PTHTweetbotEntity, PTHTweetbotPostDraftMedium, UIButton, UIControl;

@protocol PTHTweetbotPostViewDelegate <UITextViewDelegate>
- (void)showAccounts:(UIControl *)arg1;
- (void)showDrafts:(UIControl *)arg1;
- (void)showLocationOptions:(UIControl *)arg1;
- (void)toggleLocation:(UIControl *)arg1;
- (void)searchEntity:(PTHTweetbotEntity *)arg1 control:(UIControl *)arg2;
- (void)replaceEntity:(PTHTweetbotEntity *)arg1 withText:(NSString *)arg2;
- (void)addHashtag:(UIButton *)arg1;
- (void)addUser:(UIButton *)arg1;
- (void)selectedMedium:(PTHTweetbotPostDraftMedium *)arg1 control:(UIControl *)arg2;
- (void)showCameraOptions:(UIButton *)arg1;
@end

