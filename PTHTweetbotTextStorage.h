//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHSmartifyTextStorage.h"

#import "PTHUIViewColorNameChangeCategory.h"

@interface PTHTweetbotTextStorage : PTHSmartifyTextStorage <PTHUIViewColorNameChangeCategory>
{
    _Bool _dynamicTextNeedsUpdate;
}

- (void)dealloc;
- (void)processEditing;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)colorThemeDidChange;
- (id)init;

@end
