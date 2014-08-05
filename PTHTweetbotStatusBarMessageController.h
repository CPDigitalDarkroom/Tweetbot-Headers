//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PTHUIViewColorNameChangeCategory.h"

@class NSLayoutConstraint, PTHProgressView, PTHRotatableWindow, UIImageView, UILabel, UIView;

@interface PTHTweetbotStatusBarMessageController : NSObject <PTHUIViewColorNameChangeCategory>
{
    PTHRotatableWindow *_window;
    UIView *_view;
    NSLayoutConstraint *_heightConstraint;
    UIView *_contentView;
    UIView *_messageContainer;
    UILabel *_messageLabel;
    PTHProgressView *_progressView;
    UIView *_separatorLine;
    UIImageView *_imageView;
    long long _type;
    _Bool _isVisible;
    double _progress;
    CDUnknownBlockType _didHideBlock;
}

@property(readonly, nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(copy, nonatomic) CDUnknownBlockType didHideBlock; // @synthesize didHideBlock=_didHideBlock;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hide;
- (void)show;
- (void)setType:(long long)arg1 message:(id)arg2;
- (void)colorThemeDidChange;
- (void)_willChangeStatusBar:(id)arg1;
- (void)_updateHeight:(struct CGRect)arg1;
- (id)init;

@end
