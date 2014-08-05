//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotObject.h"

@class NSArray, NSAttributedString, NSDate, NSString, PTHTweetbotUser;

@interface PTHTweetbotDirectMessage : PTHTweetbotObject
{
    NSArray *_entities;
    NSDate *_createdAt;
    NSString *_text;
    long long _senderUserTID;
    long long _recipientUserTID;
    PTHTweetbotUser *_senderUser;
    PTHTweetbotUser *_recipientUser;
}

+ (void)postDraft:(id)arg1 result:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) PTHTweetbotUser *recipientUser; // @synthesize recipientUser=_recipientUser;
@property(retain, nonatomic) PTHTweetbotUser *senderUser; // @synthesize senderUser=_senderUser;
@property(nonatomic) long long recipientUserTID; // @synthesize recipientUserTID=_recipientUserTID;
@property(nonatomic) long long senderUserTID; // @synthesize senderUserTID=_senderUserTID;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setAccount:(id)arg1;
- (_Bool)hasString:(id)arg1;
@property(readonly, nonatomic) _Bool hasMedia;
- (id)emailHTML;
- (void)destroy:(CDUnknownBlockType)arg1;
- (void)refresh:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *decodedText;
@property(readonly, nonatomic) NSAttributedString *attributedText;
@property(readonly, nonatomic) NSArray *entities;
@property(readonly, nonatomic) _Bool isSentMessage;
@property(readonly, nonatomic) _Bool isReceivedMessage;
- (void)updateFromDictionary:(id)arg1;

@end
