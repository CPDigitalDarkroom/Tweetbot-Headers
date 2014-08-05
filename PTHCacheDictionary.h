//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PTHCacheDictionary : NSObject
{
    NSMutableDictionary *_dictionary;
    NSMutableDictionary *_timestamps;
    unsigned long long _capacity;
    unsigned long long _cacheMode;
}

@property(nonatomic) unsigned long long cacheMode; // @synthesize cacheMode=_cacheMode;
- (void).cxx_destruct;
- (id)allValues;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
@property(nonatomic) unsigned long long capacity;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)_removeOverflow;
- (id)init;

@end
