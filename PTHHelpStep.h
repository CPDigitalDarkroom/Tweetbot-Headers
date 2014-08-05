//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface PTHHelpStep : NSObject
{
    NSString *_imageName;
    _Bool _firstTime;
    NSString *_title;
    NSString *_description;
    NSString *_action;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_actionLabel;
    UIImageView *_imageView;
}

@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic, getter=isFirstTime) _Bool firstTime; // @synthesize firstTime=_firstTime;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSString *description; // @synthesize description=_description;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithDictionary:(id)arg1;

@end
