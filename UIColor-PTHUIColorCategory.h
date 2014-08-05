//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIColor.h"

@interface UIColor (PTHUIColorCategory)
+ (id)colorNamed:(id)arg1;
+ (id)colorWithPTHColorDictionary:(id)arg1;
+ (void)addForceDefaultThemePath:(id)arg1;
+ (id)colorThemes;
+ (id)currentColorTheme;
+ (void)setCurrentColorTheme:(id)arg1;
+ (id)namedColorsDictionary;
+ (id)randomColor;
+ (id)randomColorWithAlpha:(double)arg1;
+ (id)cachedColorWithImageNamed:(id)arg1;
+ (id)colorWithImageNamed:(id)arg1;
+ (void)cleanupForBackground;
+ (void)cleanupForMemory;
+ (void)initialize;
- (id)blendWithColor:(id)arg1;
@property(readonly, nonatomic) unsigned long long colorCode;
@end
