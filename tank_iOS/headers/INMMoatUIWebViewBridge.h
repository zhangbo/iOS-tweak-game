//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "INMMoatBridge.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface INMMoatUIWebViewBridge : INMMoatBridge <UIWebViewDelegate>
{
    _Bool _recursionFlag_shouldStart;
    _Bool _recursionFlag_didFailLoadWithError;
    _Bool _recursionFlag_webViewDidFinishLoad;
    UIWebView *_webView;
}

@property __weak UIWebView *webView; // @synthesize webView=_webView;
@property _Bool recursionFlag_webViewDidFinishLoad; // @synthesize recursionFlag_webViewDidFinishLoad=_recursionFlag_webViewDidFinishLoad;
@property _Bool recursionFlag_didFailLoadWithError; // @synthesize recursionFlag_didFailLoadWithError=_recursionFlag_didFailLoadWithError;
@property _Bool recursionFlag_shouldStart; // @synthesize recursionFlag_shouldStart=_recursionFlag_shouldStart;
- (void).cxx_destruct;
- (_Bool)hasWebView;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)markMoatActive:(id)arg1;
- (id)initWithDelegate:(id)arg1 target:(id)arg2 withWebView:(id)arg3 forNativeAd:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

