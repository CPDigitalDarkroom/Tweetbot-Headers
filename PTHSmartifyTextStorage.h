//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextStorage.h"

@class NSMutableAttributedString;

@interface PTHSmartifyTextStorage : NSTextStorage
{
    NSMutableAttributedString *_backingStore;
    _Bool _dynamicTextNeedsUpdate;
    CDUnknownBlockType _processEditingBlock;
}

+ (void)setEnabled:(_Bool)arg1;
+ (_Bool)isEnabled;
+ (void)initialize;
+ (void)_updateMenuItem;
@property(copy, nonatomic) CDUnknownBlockType processEditingBlock; // @synthesize processEditingBlock=_processEditingBlock;
- (void).cxx_destruct;
- (void)processEditing;
- (void)endEditing;
- (void)beginEditing;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (id)init;

@end

