//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PTHUIViewColorNameChangeCategory.h"

@class NSString;

@interface UIView (PTHUIViewColorNameCategory) <PTHUIViewColorNameChangeCategory>
+ (_Bool)isRegisteredForColorThemeChange:(id)arg1;
+ (void)registerForColorThemeChange:(id)arg1;
- (void)colorThemeDidChange;
@property(copy, nonatomic) NSString *tintColorName;
@property(copy, nonatomic) NSString *backgroundColorName;
@end

