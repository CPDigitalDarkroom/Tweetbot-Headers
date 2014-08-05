//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotStatusCursorController.h"

#import "UIGestureRecognizerDelegate.h"

@class PTHTweetbotAccount, PTHTweetbotHomeTimelineListPickerController, PTHTweetbotList, UILongPressGestureRecognizer;

@interface PTHTweetbotHomeTimelineController : PTHTweetbotStatusCursorController <UIGestureRecognizerDelegate>
{
    PTHTweetbotAccount *_account;
    UILongPressGestureRecognizer *_listPickerRecognizer;
    PTHTweetbotHomeTimelineListPickerController *_listPicker;
    PTHTweetbotList *_list;
}

@property(retain, nonatomic) PTHTweetbotList *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_pickList:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)_updateUnreadTab;
- (id)nothingFoundTitle;
- (id)searchTitle;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end
