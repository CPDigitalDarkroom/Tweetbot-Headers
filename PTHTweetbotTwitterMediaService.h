//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotMediaService.h"

@class PTHOAuthURLRequest;

@interface PTHTweetbotTwitterMediaService : PTHTweetbotMediaService
{
    PTHOAuthURLRequest *_urlRequest;
    _Bool _cancelled;
}

+ (unsigned long long)maxUploadCount;
+ (id)title;
+ (_Bool)canUploadImages;
- (void).cxx_destruct;
- (void)cancel;
- (void)uploadMedium:(id)arg1 withMessage:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end

