//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotStatusCursorController.h"

@class PTHTweetbotCursor, PTHTweetbotUser;

@interface PTHTweetbotUserTweetsController : PTHTweetbotStatusCursorController
{
    PTHTweetbotUser *_user;
    PTHTweetbotCursor *_timelineCursor;
    PTHTweetbotCursor *_mentionsCursor;
    PTHTweetbotCursor *_favoritesCursor;
}

- (void).cxx_destruct;
- (void)_update:(id)arg1;
- (id)nothingFoundTitle;
- (id)searchTitle;
- (_Bool)shouldHideBackBarButtonTitle;
- (void)loadView;
- (id)initWithTweetbotUser:(id)arg1;

@end

