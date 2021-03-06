//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdInstlAdNetworkAdapter.h"

#import "GDTMobInterstitialDelegate-Protocol.h"

@class GDTMobInterstitial, NSString;

@interface AdInstlAdapterGDTMob : AdInstlAdNetworkAdapter <GDTMobInterstitialDelegate>
{
    GDTMobInterstitial *_GDTMobInstl;
}

+ (void)load;
+ (int)networkType;
@property(retain, nonatomic) GDTMobInterstitial *GDTMobInstl; // @synthesize GDTMobInstl=_GDTMobInstl;
- (void).cxx_destruct;
- (void)stopBeingDelegate;
- (_Bool)isOpenGps;
- (void)interstitialClicked:(id)arg1;
- (void)interstitialWillExposure:(id)arg1;
- (void)interstitialApplicationWillEnterBackground:(id)arg1;
- (void)interstitialDidDismissScreen:(id)arg1;
- (void)interstitialDidPresentScreen:(id)arg1;
- (void)interstitialWillPresentScreen:(id)arg1;
- (void)interstitialFailToLoadAd:(id)arg1 error:(id)arg2;
- (void)interstitialSuccessToLoadAd:(id)arg1;
- (_Bool)showAdInstl:(id)arg1;
- (_Bool)loadAdInstl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

