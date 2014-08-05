//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotMediaService.h"

@class NSRegularExpression, PTHURLRequest;

@interface PTHTweetbotDroplrMediaService : PTHTweetbotMediaService
{
    NSRegularExpression *_expression;
    PTHURLRequest *_request;
}

+ (void)authenticate:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)keychainAccountName;
+ (_Bool)needsAuthentication;
+ (id)title;
+ (_Bool)canUploadMovies;
+ (_Bool)canUploadImages;
- (void).cxx_destruct;
- (void)cancel;
- (void)uploadMedium:(id)arg1 withMessage:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end

