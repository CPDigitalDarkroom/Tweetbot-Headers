//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotObject.h"

@class NSString;

@interface PTHTweetbotTrend : PTHTweetbotObject
{
    NSString *_name;
    NSString *_query;
}

+ (id)newWithAccount:(id)arg1 dictionary:(id)arg2;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateFromDictionary:(id)arg1;

@end
