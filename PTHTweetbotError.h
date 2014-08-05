//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSException, NSString;

@interface PTHTweetbotError : NSObject
{
    _Bool _hidden;
    NSString *_title;
    NSString *_message;
    NSError *_error;
    long long _twitterErrorCode;
    NSException *_exception;
    NSString *_okTitle;
    CDUnknownBlockType _willOKBlock;
    CDUnknownBlockType _okBlock;
    NSString *_cancelTitle;
    CDUnknownBlockType _willCancelBlock;
    CDUnknownBlockType _cancelBlock;
    NSString *_otherTitle;
    CDUnknownBlockType _willOtherBlock;
    CDUnknownBlockType _otherBlock;
}

+ (id)tweetbotErrorWithTitle:(id)arg1;
+ (id)tweetbotErrorWithError:(id)arg1;
+ (id)tweetbotErrorWithException:(id)arg1;
+ (id)authenticationError;
+ (id)genericError;
+ (id)userCancelledTweetbotError;
@property(copy, nonatomic) CDUnknownBlockType otherBlock; // @synthesize otherBlock=_otherBlock;
@property(copy, nonatomic) CDUnknownBlockType willOtherBlock; // @synthesize willOtherBlock=_willOtherBlock;
@property(copy, nonatomic) NSString *otherTitle; // @synthesize otherTitle=_otherTitle;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType willCancelBlock; // @synthesize willCancelBlock=_willCancelBlock;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
@property(copy, nonatomic) CDUnknownBlockType willOKBlock; // @synthesize willOKBlock=_willOKBlock;
@property(copy, nonatomic) NSString *okTitle; // @synthesize okTitle=_okTitle;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSException *exception; // @synthesize exception=_exception;
@property(nonatomic) long long twitterErrorCode; // @synthesize twitterErrorCode=_twitterErrorCode;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long code;
- (id)description;

@end
