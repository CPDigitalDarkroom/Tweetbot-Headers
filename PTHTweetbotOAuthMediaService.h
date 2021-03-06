//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotMediaService.h"

@class NSDictionary, NSString, NSURL, PTHURLRequest;

@interface PTHTweetbotOAuthMediaService : PTHTweetbotMediaService
{
    PTHURLRequest *_urlRequest;
    _Bool _cancelled;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)uploadMedium:(id)arg1 withMessage:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)urlStringFromResponse:(id)arg1;
- (id)urlStringFromResponseDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned long long uploadResponseType;
@property(readonly, nonatomic) NSDictionary *uploadPostDictionary;
@property(readonly, nonatomic) NSString *uploadMessageKey;
@property(readonly, nonatomic) NSString *uploadMediaKey;
@property(readonly, nonatomic) NSURL *movieUploadURL;
@property(readonly, nonatomic) NSURL *imageUploadURL;
@property(readonly, nonatomic) NSURL *uploadURL;

@end

