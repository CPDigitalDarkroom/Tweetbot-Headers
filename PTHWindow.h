//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class NSMutableArray;

@interface PTHWindow : UIWindow
{
    NSMutableArray *_eventObservers;
}

- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)toggleSmartify:(id)arg1;
- (void)removeEventObserver:(id)arg1;
- (void)removeEventObserver:(id)arg1 action:(SEL)arg2;
- (id)addEventObserver:(CDUnknownBlockType)arg1;
- (void)addEventObserver:(id)arg1 action:(SEL)arg2;
- (void)sendEvent:(id)arg1;

@end

