//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface BaiduMobAdNotifyManager : NSObject <UIAlertViewDelegate>
{
    UIWebView *_webView;
    NSString *_confirmJsToken;
}

+ (void)removeManagerForWebView:(id)arg1;
+ (id)getManagerForWebView:(id)arg1;
@property(retain, nonatomic) NSString *confirmJsToken; // @synthesize confirmJsToken=_confirmJsToken;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirm:(id)arg1 options:(id)arg2;
- (void)showDialogWithMessage:(id)arg1 title:(id)arg2 buttons:(id)arg3;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

