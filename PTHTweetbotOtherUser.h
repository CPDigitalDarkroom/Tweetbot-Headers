//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotUser.h"

@class PTHTweetbotRelationship;

@interface PTHTweetbotOtherUser : PTHTweetbotUser
{
    PTHTweetbotRelationship *_relationship;
}

@property(readonly, nonatomic) PTHTweetbotRelationship *relationship; // @synthesize relationship=_relationship;
- (void).cxx_destruct;
- (void)setAccount:(id)arg1;
- (void)updateRelationshipIfNeeded:(CDUnknownBlockType)arg1;
- (void)updateRelationship:(CDUnknownBlockType)arg1;
- (void)disableRetweets:(CDUnknownBlockType)arg1;
- (void)enableRetweets:(CDUnknownBlockType)arg1;
- (void)unfollow:(CDUnknownBlockType)arg1;
- (void)follow:(CDUnknownBlockType)arg1;
- (void)unblock:(CDUnknownBlockType)arg1;
- (void)block:(CDUnknownBlockType)arg1;
- (void)reportSpam:(CDUnknownBlockType)arg1;
- (void)_removeFromCursors;
- (id)mentionsCursor;
- (id)initWithAccount:(id)arg1 tid:(long long)arg2;

@end

