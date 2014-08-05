//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PTHTweetbotBrowserLauncher : NSObject
{
    NSString *_name;
    NSString *_scheme;
    NSString *_launchURLString;
}

+ (id)browserLauncherWithScheme:(id)arg1;
+ (id)availableBrowserLaunchers;
+ (id)defaultBrowserName;
+ (void)openURL:(id)arg1;
+ (id)defaultBrowserLauncher;
@property(copy, nonatomic) NSString *launchURLString; // @synthesize launchURLString=_launchURLString;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)openURL:(id)arg1;

@end

