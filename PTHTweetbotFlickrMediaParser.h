//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotMediaParser.h"

@interface PTHTweetbotFlickrMediaParser : PTHTweetbotMediaParser
{
}

+ (void)loadURLForMedium:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)loadPreviewURLDictionaryForMedium:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)_loadMedium:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (_Bool)loadMediaURLFromEntity:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)sourceFromEntity:(id)arg1 size:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (long long)mediumTypeForEntity:(id)arg1;
+ (id)parsableHosts;

@end

