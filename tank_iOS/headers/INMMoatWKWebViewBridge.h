//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "INMMoatBridge.h"

#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class NSMutableArray, NSString, NSTimer, WKWebView;

@interface INMMoatWKWebViewBridge : INMMoatBridge <WKNavigationDelegate, WKScriptMessageHandler>
{
    WKWebView *_webView;
    NSMutableArray *_controller;
    NSTimer *_timer;
}

@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) NSMutableArray *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)unbind;
- (void)refCheck;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithTarget:(id)arg1 withWebView:(id)arg2 forNativeAd:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

