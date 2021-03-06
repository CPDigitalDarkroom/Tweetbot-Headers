//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class CLLocation, NSArray;

@interface PTHTweetbotBoundingBox : NSObject <NSCoding>
{
    long long _type;
    NSArray *_locations;
}

+ (id)newBoundingBoxFromDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)containsLocation:(id)arg1;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) CDStruct_feeb6407 coordinateRegion;
- (id)initWithLocation:(id)arg1;
- (id)initWithType:(long long)arg1 dictionary:(id)arg2;

@end

