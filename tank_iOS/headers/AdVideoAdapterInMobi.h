//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdVideoAdNetworkAdapter.h"

#import "IMInterstitialDelegate-Protocol.h"

@class IMInterstitial, NSString;

@interface AdVideoAdapterInMobi : AdVideoAdNetworkAdapter <IMInterstitialDelegate>
{
    IMInterstitial *imadVideo;
}

+ (void)load;
+ (int)networkType;
@property(retain, nonatomic) IMInterstitial *imadVideo; // @synthesize imadVideo;
- (void).cxx_destruct;
- (void)userWillLeaveApplicationFromInterstitial:(id)arg1;
- (void)interstitialWillDismiss:(id)arg1;
- (void)interstitialWillPresent:(id)arg1;
- (void)interstitial:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)interstitialDidFinishLoading:(id)arg1;
- (void)stopBeingDelegate;
- (_Bool)showAdVideo:(id)arg1;
- (_Bool)loadAdVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

