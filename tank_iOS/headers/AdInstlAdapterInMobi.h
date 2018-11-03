//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdInstlAdNetworkAdapter.h"

#import "IMInterstitialDelegate-Protocol.h"

@class NSString;

@interface AdInstlAdapterInMobi : AdInstlAdNetworkAdapter <IMInterstitialDelegate>
{
}

+ (void)load;
+ (int)networkType;
- (void)stopBeingDelegate;
- (void)userWillLeaveApplicationFromInterstitial:(id)arg1;
- (void)interstitialWillDismiss:(id)arg1;
- (void)interstitialWillPresent:(id)arg1;
- (void)interstitial:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)interstitialDidFinishLoading:(id)arg1;
- (_Bool)showAdInstl:(id)arg1;
- (_Bool)loadAdInstl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
