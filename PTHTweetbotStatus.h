//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotObject.h"

@class NSArray, NSAttributedString, NSDate, NSString, NSURL, PTHTweetbotBoundingBox, PTHTweetbotCursor, PTHTweetbotPlace, PTHTweetbotStatusActivity, PTHTweetbotUser;

@interface PTHTweetbotStatus : PTHTweetbotObject
{
    NSArray *_entities;
    _Bool _favorited;
    _Bool _retweeted;
    _Bool _mentionsCurrentUser;
    _Bool _searchResult;
    _Bool _hasExtendedEntities;
    NSDate *_createdAt;
    NSString *_text;
    long long _userTID;
    long long _retweetedByUserTID;
    long long _retweetedStatusTID;
    long long _originalTID;
    long long _replyStatusTID;
    long long _replyUserTID;
    unsigned long long _retweetCount;
    unsigned long long _favoriteCount;
    NSString *_source;
    NSString *_sourceText;
    NSURL *_sourceURL;
    PTHTweetbotBoundingBox *_boundingBox;
    PTHTweetbotPlace *_place;
    NSString *_locationName;
    PTHTweetbotUser *_user;
    PTHTweetbotUser *_retweetedByUser;
    NSArray *_media;
    PTHTweetbotStatusActivity *_activity;
    NSAttributedString *_statusDetailLinkedText;
    NSString *_userScreenName;
    long long _currentUserRetweetTID;
}

+ (void)postDraft:(id)arg1 progress:(CDUnknownBlockType)arg2 result:(CDUnknownBlockType)arg3;
+ (id)newWithAccount:(id)arg1 dictionary:(id)arg2;
+ (id)newWithAccount:(id)arg1 tid:(long long)arg2;
@property(nonatomic) _Bool hasExtendedEntities; // @synthesize hasExtendedEntities=_hasExtendedEntities;
@property(nonatomic) long long currentUserRetweetTID; // @synthesize currentUserRetweetTID=_currentUserRetweetTID;
@property(copy, nonatomic) NSString *userScreenName; // @synthesize userScreenName=_userScreenName;
@property(retain, nonatomic) NSAttributedString *statusDetailLinkedText; // @synthesize statusDetailLinkedText=_statusDetailLinkedText;
@property(readonly, nonatomic) PTHTweetbotStatusActivity *activity; // @synthesize activity=_activity;
@property(nonatomic, getter=isSearchResult) _Bool searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) NSArray *media; // @synthesize media=_media;
@property(retain, nonatomic) PTHTweetbotUser *retweetedByUser; // @synthesize retweetedByUser=_retweetedByUser;
@property(retain, nonatomic) PTHTweetbotUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) PTHTweetbotPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) PTHTweetbotBoundingBox *boundingBox; // @synthesize boundingBox=_boundingBox;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSString *sourceText; // @synthesize sourceText=_sourceText;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool mentionsCurrentUser; // @synthesize mentionsCurrentUser=_mentionsCurrentUser;
@property(nonatomic) unsigned long long favoriteCount; // @synthesize favoriteCount=_favoriteCount;
@property(nonatomic) unsigned long long retweetCount; // @synthesize retweetCount=_retweetCount;
@property(nonatomic, getter=isRetweeted) _Bool retweeted; // @synthesize retweeted=_retweeted;
@property(nonatomic, getter=isFavorited) _Bool favorited; // @synthesize favorited=_favorited;
@property(nonatomic) long long replyUserTID; // @synthesize replyUserTID=_replyUserTID;
@property(nonatomic) long long replyStatusTID; // @synthesize replyStatusTID=_replyStatusTID;
@property(nonatomic) long long originalTID; // @synthesize originalTID=_originalTID;
@property(nonatomic) long long retweetedStatusTID; // @synthesize retweetedStatusTID=_retweetedStatusTID;
@property(nonatomic) long long retweetedByUserTID; // @synthesize retweetedByUserTID=_retweetedByUserTID;
@property(nonatomic) long long userTID; // @synthesize userTID=_userTID;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setAccount:(id)arg1;
- (_Bool)hasString:(id)arg1;
- (void)updateActivityIfNeeded:(CDUnknownBlockType)arg1;
- (void)updateActivity:(CDUnknownBlockType)arg1;
- (void)unfavorite:(CDUnknownBlockType)arg1;
- (void)favorite:(CDUnknownBlockType)arg1;
- (void)unretweet:(CDUnknownBlockType)arg1;
- (void)retweet:(CDUnknownBlockType)arg1;
- (void)refresh:(CDUnknownBlockType)arg1;
- (void)destroy:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PTHTweetbotCursor *favoritesCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *retweetsCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *threadCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *conversationCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *repliesCursor;
@property(readonly, nonatomic) _Bool isFromCurrentUser;
@property(readonly, nonatomic) _Bool isReplyToCurrentUser;
@property(readonly, nonatomic) _Bool isReply;
@property(readonly, nonatomic) _Bool canRetweet;
@property(readonly, nonatomic) _Bool canUnretweet;
@property(readonly, nonatomic) _Bool isRetweet;
@property(readonly, nonatomic) NSString *emailHTML;
@property(readonly, nonatomic) NSURL *favstarURL;
@property(readonly, nonatomic) NSURL *twitterURL;
- (void)_loadSourceInfo;
@property(readonly, nonatomic) NSAttributedString *attributedText;
- (id)attributedText:(_Bool)arg1;
@property(readonly, nonatomic) NSString *decodedText;
- (void)resetStatusDetailLinkedText;
@property(readonly, nonatomic) _Bool hasMedia;
@property(readonly, nonatomic) NSArray *entities;
- (void)updateFromDictionary:(id)arg1;
- (_Bool)_updateFromDictionary:(id)arg1;
- (id)_createdAtFromDictionary:(id)arg1;
- (id)initWithAccount:(id)arg1 tid:(long long)arg2;

@end
