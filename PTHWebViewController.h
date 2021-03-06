//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, UISwipeGestureRecognizer, UIWebView;

@interface PTHWebViewController : PTHViewController <UIGestureRecognizerDelegate, UIWebViewDelegate>
{
    UIWebView *_webView;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    NSString *_oldAudioSessionCategory;
    _Bool _loading;
    NSURL *_url;
}

@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (id)modalCancelButtonTitle;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)_updateLoading;
- (void)_update;
- (void)_stopOrRefresh:(id)arg1;
- (void)_forward:(id)arg1;
- (void)_back:(id)arg1;
- (void)_leftSwipe:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)loadView;
@property(readonly, nonatomic) UIWebView *webView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

