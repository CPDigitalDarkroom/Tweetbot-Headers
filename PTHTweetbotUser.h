//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotObject.h"

#import "NSCoding.h"

@class NSAttributedString, NSDate, NSDictionary, NSMutableArray, NSString, NSURL, PTHTweetbotCursor, PTHTweetbotListsCursor;

@interface PTHTweetbotUser : PTHTweetbotObject <NSCoding>
{
    NSString *_screenName;
    NSDictionary *_userDescriptionEntityDictionary;
    _Bool _isRefreshing;
    NSMutableArray *_refreshBlocks;
    _Bool _protected;
    _Bool _verified;
    _Bool _geoEnabled;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    NSString *_name;
    NSString *_location;
    NSString *_userDescription;
    NSString *_profileImageURLString;
    NSString *_profileBannerImageURLString;
    NSString *_urlString;
    long long _favoritesCount;
    long long _followersCount;
    long long _followingCount;
    long long _statusesCount;
    long long _listedCount;
    NSDate *_lastStatusCreatedAt;
}

+ (id)profileImageURLFromString:(id)arg1 forSize:(unsigned long long)arg2;
+ (_Bool)isValidScreenName:(id)arg1;
+ (id)newWithAccount:(id)arg1 dictionary:(id)arg2;
+ (id)newWithAccount:(id)arg1 tid:(long long)arg2;
@property(retain, nonatomic) NSDate *lastStatusCreatedAt; // @synthesize lastStatusCreatedAt=_lastStatusCreatedAt;
@property(nonatomic, getter=isGeoEnabled) _Bool geoEnabled; // @synthesize geoEnabled=_geoEnabled;
@property(nonatomic, getter=isVerified) _Bool verified; // @synthesize verified=_verified;
@property(nonatomic, getter=isProtected) _Bool protected; // @synthesize protected=_protected;
@property(nonatomic) long long listedCount; // @synthesize listedCount=_listedCount;
@property(nonatomic) long long statusesCount; // @synthesize statusesCount=_statusesCount;
@property(nonatomic) long long followingCount; // @synthesize followingCount=_followingCount;
@property(nonatomic) long long followersCount; // @synthesize followersCount=_followersCount;
@property(nonatomic) long long favoritesCount; // @synthesize favoritesCount=_favoritesCount;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *profileBannerImageURLString; // @synthesize profileBannerImageURLString=_profileBannerImageURLString;
@property(copy, nonatomic) NSString *profileImageURLString; // @synthesize profileImageURLString=_profileImageURLString;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)hasString:(id)arg1;
@property(readonly, nonatomic) NSURL *twitterURL;
@property(readonly, nonatomic) NSURL *favstarURL;
@property(readonly, nonatomic) _Bool isTapbot;
- (id)profileBannerURLForWidth:(unsigned long long)arg1;
- (id)profileImageURLForSize:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isCurrentUser;
- (void)refresh:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PTHTweetbotCursor *currentUserListMembershipsCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *listMembershipsCursor;
@property(readonly, nonatomic) PTHTweetbotListsCursor *listsCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *followersCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *followingCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *favoritesCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *mentionsCursor;
@property(readonly, nonatomic) PTHTweetbotCursor *userTimelineCursor;
@property(readonly, nonatomic) NSString *formattedName;
@property(readonly, nonatomic) NSString *displayName;
- (void)addUserQueryKey:(id)arg1;
@property(readonly, nonatomic) NSString *decodedUserDescription;
@property(readonly, nonatomic) NSAttributedString *attributedUserDescription;
- (void)updateFromDictionary:(id)arg1;

@end
