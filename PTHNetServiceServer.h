//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceDelegate.h"
#import "PTHStreamHandlerDelegate.h"

@class NSDictionary, NSFileHandle, NSMutableArray, NSNetService, NSString;

@interface PTHNetServiceServer : NSObject <PTHStreamHandlerDelegate, NSNetServiceDelegate>
{
    NSString *_type;
    NSString *_name;
    _Bool _running;
    NSNetService *_netService;
    NSFileHandle *_serverSocket;
    NSMutableArray *_clientStreamHandlers;
    unsigned long long _outputFormat;
    NSDictionary *_serviceDictionary;
    id <PTHNetServiceServerDelegate> _delegate;
    _Bool _backgroundEnabled;
}

@property(nonatomic) unsigned long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic, getter=isBackgroundEnabled) _Bool backgroundEnabled; // @synthesize backgroundEnabled=_backgroundEnabled;
@property(copy, nonatomic) NSDictionary *serviceDictionary; // @synthesize serviceDictionary=_serviceDictionary;
@property(nonatomic) __weak id <PTHNetServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) _Bool hasClients;
- (void)stop;
- (void)streamHandlerDidClose:(id)arg1;
- (void)streamHandler:(id)arg1 didOutputObject:(id)arg2;
- (void)streamHandler:(id)arg1 didReceiveObject:(id)arg2;
- (_Bool)outputObject:(id)arg1;
- (void)connectionReceived:(id)arg1;
- (void)unpublish;
- (void)republish;
- (_Bool)start;
- (id)initWithType:(id)arg1 name:(id)arg2;

@end

