//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIDynamicAnimatorDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMutableArray, PTHTweetbotAccountController, UIDynamicAnimator, UIView;

@interface PTHTweetbotAccountPhoneTabPicker : NSObject <UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate>
{
    PTHTweetbotAccountController *_accountController;
    NSMutableArray *_tabButtons;
    NSArray *_pickerControllers;
    unsigned long long _pickedTabBarItemIndex;
    UIView *_buttonsHolder;
    UIDynamicAnimator *_animator;
    UIView *_hitView;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_longPressEnded:(id)arg1;
- (void)_longPressChanged:(id)arg1;
- (unsigned long long)indexOfButtonAtPoint:(struct CGPoint)arg1;
- (void)_longPressBegan:(id)arg1;
- (void)_didSelectTabButton:(id)arg1;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)_showButtons;
- (id)initWithAccountController:(id)arg1;

@end

