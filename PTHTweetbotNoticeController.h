//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSDictionary, NSLayoutConstraint, NSString, NSTimer, PTHRotatableWindow, UIDynamicAnimator, UIImage, UIView;

@interface PTHTweetbotNoticeController : NSObject
{
    PTHRotatableWindow *_window;
    UIView *_view;
    id _statusFrameNotification;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_imageAvatarHeightConstraint;
    UIDynamicAnimator *_animator;
    UIImage *_userImage;
    NSTimer *_hideTimer;
    CDUnknownBlockType _didHide;
    _Bool _hiding;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    NSString *_message;
    NSAttributedString *_attributedMessage;
    NSString *_soundName;
    NSDictionary *_remoteDictionary;
    long long _type;
    CDUnknownBlockType _completion;
}

+ (void)endQueuingNotifications;
+ (void)beginQueuingNotifications;
+ (void)_showNotice:(id)arg1 message:(id)arg2 type:(long long)arg3 soundNamed:(id)arg4 remoteDictionary:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)_processQueue;
+ (void)initialize;
+ (void)playError;
+ (void)playSuccess;
+ (void)showNotificationNotice:(id)arg1;
+ (void)showSuccessNotice:(id)arg1 message:(id)arg2;
+ (void)showFailureNotice:(id)arg1 message:(id)arg2;
+ (void)showSuccessNotice:(id)arg1 message:(id)arg2 soundNamed:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)showFailureNotice:(id)arg1 message:(id)arg2 soundNamed:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *remoteDictionary; // @synthesize remoteDictionary=_remoteDictionary;
@property(copy, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(copy, nonatomic) NSAttributedString *attributedMessage; // @synthesize attributedMessage=_attributedMessage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isLoaded;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly, nonatomic) _Bool hasMessage;
@property(readonly, nonatomic) _Bool hasTitle;
- (void)_loadView;
- (void)show:(CDUnknownBlockType)arg1;
- (void)_disableAnimator;
- (void)_hide;
- (void)_willChangeStatusBar:(id)arg1;
- (void)_updateHeight:(struct CGRect)arg1;

@end

