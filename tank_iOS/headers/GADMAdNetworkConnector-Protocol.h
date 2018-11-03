//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMediationAdRequest-Protocol.h"

@class NSError, NSObject, UIView, UIViewController;
@protocol GADMAdNetworkAdapter, GADMediatedNativeAd;

@protocol GADMAdNetworkConnector <GADMediationAdRequest>
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didFailInterstitial:(NSError *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 clickDidOccurInBanner:(UIView *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveInterstitial:(NSObject *)arg2;
- (void)adapterDidDismissInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillDismissInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillPresentInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterDidDismissFullScreenModal:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillDismissFullScreenModal:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillPresentFullScreenModal:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillLeaveApplication:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterDidGetAdClick:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveMediatedNativeAd:(id <GADMediatedNativeAd>)arg2;
- (void)adapterDidReceiveInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveAdView:(UIView *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didFailAd:(NSError *)arg2;
- (UIViewController *)viewControllerForPresentingModalView;
@end

