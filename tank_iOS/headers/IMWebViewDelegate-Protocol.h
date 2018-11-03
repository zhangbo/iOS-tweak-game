//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMWebToNativeCall, IMWebViewController, NSError, NSURLRequest;

@protocol IMWebViewDelegate <NSObject>

@optional
- (_Bool)webViewController:(IMWebViewController *)arg1 shouldOpenExternallyWithRequest:(NSURLRequest *)arg2;
- (void)webViewController:(IMWebViewController *)arg1 didRecieveNativeCall:(IMWebToNativeCall *)arg2;
- (void)webViewController:(IMWebViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewControllerDidFinishLoad:(IMWebViewController *)arg1;
- (void)webViewControllerDidStartLoad:(IMWebViewController *)arg1;
- (_Bool)webViewController:(IMWebViewController *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

