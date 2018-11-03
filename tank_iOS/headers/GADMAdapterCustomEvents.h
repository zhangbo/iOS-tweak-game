//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADCustomEventBannerDelegate-Protocol.h"
#import "GADCustomEventInterstitialDelegate-Protocol.h"
#import "GADCustomEventNativeAdDelegate-Protocol.h"
#import "GADMAdNetworkAdapter-Protocol.h"

@class NSString, UIViewController;
@protocol GADCustomEventBanner, GADCustomEventInterstitial, GADCustomEventNativeAd, GADMAdNetworkConnector;

@interface GADMAdapterCustomEvents : NSObject <GADMAdNetworkAdapter, GADCustomEventBannerDelegate, GADCustomEventInterstitialDelegate, GADCustomEventNativeAdDelegate>
{
    id <GADMAdNetworkConnector> _connector;
    id <GADCustomEventBanner> _customEventBanner;
    id <GADCustomEventInterstitial> _customEventInterstitial;
    id <GADCustomEventNativeAd> _customEventNativeAd;
}

+ (Class)networkExtrasClass;
+ (id)adapterVersion;
@property(retain, nonatomic) id <GADCustomEventNativeAd> customEventNativeAd; // @synthesize customEventNativeAd=_customEventNativeAd;
@property(retain, nonatomic) id <GADCustomEventInterstitial> customEventInterstitial; // @synthesize customEventInterstitial=_customEventInterstitial;
@property(retain, nonatomic) id <GADCustomEventBanner> customEventBanner; // @synthesize customEventBanner=_customEventBanner;
@property(nonatomic) __weak id <GADMAdNetworkConnector> connector; // @synthesize connector=_connector;
- (void).cxx_destruct;
- (void)customEventInterstitial:(id)arg1 didReceiveAd:(id)arg2;
- (void)customEventBanner:(id)arg1 clickDidOccurInAd:(id)arg2;
- (void)customEventNativeAd:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)customEventNativeAd:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (void)customEventInterstitialWillLeaveApplication:(id)arg1;
- (void)customEventInterstitialDidDismiss:(id)arg1;
- (void)customEventInterstitialWillDismiss:(id)arg1;
- (void)customEventInterstitialWillPresent:(id)arg1;
- (void)customEventInterstitialWasClicked:(id)arg1;
- (void)customEventInterstitial:(id)arg1 didFailAd:(id)arg2;
- (void)customEventInterstitialDidReceiveAd:(id)arg1;
- (void)customEventBannerWillLeaveApplication:(id)arg1;
- (void)customEventBannerDidDismissModal:(id)arg1;
- (void)customEventBannerWillDismissModal:(id)arg1;
- (void)customEventBannerWillPresentModal:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)customEventBannerWasClicked:(id)arg1;
- (void)customEventBanner:(id)arg1 didFailAd:(id)arg2;
- (void)customEventBanner:(id)arg1 didReceiveAd:(id)arg2;
- (void)callBackToConnectorWithError:(id)arg1 isInterstitial:(_Bool)arg2;
- (void)dealloc;
- (_Bool)handlesUserImpressions;
- (_Bool)handlesUserClicks;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (_Bool)isBannerAnimationOK:(long long)arg1;
- (void)stopBeingDelegate;
- (void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2;
- (void)getInterstitial;
- (void)getBannerWithSize:(struct GADAdSize)arg1;
- (id)customEventWithCredentials:(id)arg1 isInterstitial:(_Bool)arg2;
- (id)initWithGADMAdNetworkConnector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

