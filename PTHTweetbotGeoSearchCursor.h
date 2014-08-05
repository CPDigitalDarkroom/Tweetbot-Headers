//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCursor.h"

@class CLLocation, PTHTweetbotPlace;

@interface PTHTweetbotGeoSearchCursor : PTHTweetbotCursor
{
    int _granularity;
    unsigned long long _maxResults;
    CLLocation *_location;
}

+ (Class)itemClass;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property(nonatomic) int granularity; // @synthesize granularity=_granularity;
- (void).cxx_destruct;
- (id)itemsArrayFromResponse:(id)arg1;
@property(readonly, nonatomic) PTHTweetbotPlace *closestPlace;
- (id)queryDictionary;
- (id)requestURLString;
- (id)uniqueID;
- (id)initWithAccount:(id)arg1 location:(id)arg2;

@end
