//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSAttributedString, UIColor, UIFont;

@interface PTHAttributedLabel : UIControl
{
    struct CGRect _textFrameRect;
    struct __CTFrame *_textFrame;
    double _lastIntrinsicWidth;
    unsigned char _textAlignment;
    unsigned char _lineBreakMode;
    NSAttributedString *_attributedText;
    UIColor *_shadowColor;
    UIFont *_font;
    UIColor *_textColor;
    double _lineHeightMultiple;
    CDUnknownBlockType _preferredTextStyleBlock;
    NSAttributedString *_displayText;
    struct CGSize _shadowOffset;
}

@property(retain, nonatomic) NSAttributedString *displayText; // @synthesize displayText=_displayText;
@property(copy, nonatomic) CDUnknownBlockType preferredTextStyleBlock; // @synthesize preferredTextStyleBlock=_preferredTextStyleBlock;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct __CTFrame *)textFrameForRect:(struct CGRect)arg1;
- (void)sizeToFitTop;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)resetDisplayText;
- (id)newDisplayText;
- (void)setPreferredTextStyle:(id)arg1;
- (void)_updateTextStyle;
- (id)attributeNamed:(id)arg1 forEvent:(id)arg2 hitFrame:(struct CGRect *)arg3;
- (id)attributeNamed:(id)arg1 hitRect:(struct CGRect)arg2 contentRect:(struct CGRect)arg3 hitFrame:(struct CGRect *)arg4;
- (id)attributesAtLocation:(struct CGPoint)arg1 contentRect:(struct CGRect)arg2 hitFrame:(struct CGRect *)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
