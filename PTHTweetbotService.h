//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, PTHTweetbotAccount;

@interface PTHTweetbotService : NSObject
{
    PTHTweetbotAccount *_account;
    NSDictionary *_authenticationInfo;
}

+ (_Bool)isAvailable;
+ (_Bool)verifyWithAccount:(id)arg1;
+ (_Bool)needsAuthentication;
+ (id)title;
+ (id)busyServiceFailureTweetbotError;
+ (id)genericServiceFailureTweetbotError;
+ (id)authenticationFailureTweetbotError;
+ (void)setCustomInfo:(id)arg1 forAccount:(id)arg2;
+ (id)customInfoForAccount:(id)arg1;
+ (id)_customInfoKeyForAccount:(id)arg1;
+ (void)authenticate:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)saveAuthenticationInfo:(id)arg1 forAccount:(id)arg2;
+ (id)authenticationInfoForAccount:(id)arg1;
+ (id)keychainItemForAccount:(id)arg1;
+ (id)keychainServiceName;
+ (id)defaultOptions;
+ (id)serviceClasses;
- (void).cxx_destruct;
- (id)customInfo;
- (id)password;
- (id)username;
- (id)authenticationInfo;
- (id)initWithAccount:(id)arg1;

@end

