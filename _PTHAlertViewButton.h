//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHButton.h"

@class NSMutableArray;

@interface _PTHAlertViewButton : PTHButton
{
    long long _returnCode;
    NSMutableArray *_separatorLines;
}

@property(readonly, nonatomic) NSMutableArray *separatorLines; // @synthesize separatorLines=_separatorLines;
@property(readonly, nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;
- (void).cxx_destruct;
- (void)stateDidChange;
- (id)initWithReturnCode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

