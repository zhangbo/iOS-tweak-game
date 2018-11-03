//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdLifeEventListener-Protocol.h"

@class GDTBaseInterstitialDialog, GDTMobInterstitial, NSString;
@protocol GDTMobInterstitialDelegate;

@interface GDTInterstitialLifeCycleStateListener : NSObject <GDTAdLifeEventListener>
{
    id <GDTMobInterstitialDelegate> _delegate;
    GDTMobInterstitial *_interstitial;
    GDTBaseInterstitialDialog *_dialog;
}

@property(nonatomic) __weak GDTBaseInterstitialDialog *dialog; // @synthesize dialog=_dialog;
@property(nonatomic) __weak GDTMobInterstitial *interstitial; // @synthesize interstitial=_interstitial;
@property(nonatomic) __weak id <GDTMobInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interstitialApplicationWillEnterBackground;
- (void)interstitialDidDismissScreen;
- (void)showError:(int)arg1;
- (void)handleAdLoadFailEvent:(id)arg1;
- (void)interstitialSuccessToLoadAd;
- (void)onEvent:(id)arg1;
- (id)initWithInterstitial:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

