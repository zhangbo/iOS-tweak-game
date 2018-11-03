//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GDTWebViewProgressDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class GDTClickParam, GDTWebView, NSString, NSTimer, UIButton, UIProgressView;
@protocol GDTWebViewControllerDelegate;

@interface GDTWebViewController : UIViewController <GDTWebViewProgressDelegate, UIWebViewDelegate, UIGestureRecognizerDelegate>
{
    GDTWebView *popupWebView;
    UIButton *closeBtn;
    UIButton *backBtn;
    UIProgressView *progressView;
    _Bool isPad;
    _Bool isExtended;
    int iPhone5Off;
    int tb_icon_width;
    int tb_icon_y;
    int closeX;
    int backY;
    int closeY;
    long long _initialOrietation;
    NSTimer *_animationTimer;
    int webViewShouldStartLoad;
    int webViewDidFinishLoad;
    long long pageStartTime;
    long long redirectStartTime;
    long long landPageEndTime;
    NSString *_landPage;
    id <GDTWebViewControllerDelegate> delegate;
    NSString *ad_link;
    GDTClickParam *_clickParam;
}

@property(retain, nonatomic) GDTClickParam *clickParam; // @synthesize clickParam=_clickParam;
@property(retain, nonatomic) NSString *ad_link; // @synthesize ad_link;
@property(nonatomic) __weak id <GDTWebViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)updateUIOrientation:(long long)arg1;
- (void)preparePopupResource;
- (void)popupGoBackward;
- (void)receivedMemoryNotification:(id)arg1;
- (void)appEnterBackgroundNotification;
- (void)popupClose;
- (void)notifyDelegateVCClosed;
- (void)notifyDelegateVCWillClose;
- (void)popupDirectClose;
- (void)loadRequest;
- (void)handleSingleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)registerGesture;
- (void)reportRedirectPageLoadDuration;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)hideProgressViewWithFadeOut;
- (void)webView:(id)arg1 didReceiveResourceNumber:(int)arg2 totalResources:(int)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

