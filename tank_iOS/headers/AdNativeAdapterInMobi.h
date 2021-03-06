//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdNativeAdNetworkAdapter.h"

#import "IMNativeDelegate-Protocol.h"

@class IMNative, NSString;

@interface AdNativeAdapterInMobi : AdNativeAdNetworkAdapter <IMNativeDelegate>
{
    IMNative *_nativeAd;
}

+ (void)load;
+ (int)networkType;
@property(retain, nonatomic) IMNative *nativeAd; // @synthesize nativeAd=_nativeAd;
- (void)userWillLeaveApplicationFromNative:(id)arg1;
- (void)nativeDidDismissScreen:(id)arg1;
- (void)nativeWillDismissScreen:(id)arg1;
- (void)nativeDidPresentScreen:(id)arg1;
- (void)nativeWillPresentScreen:(id)arg1;
- (void)native:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)nativeDidFinishLoading:(id)arg1;
- (void)stopBeingDelegate;
- (void)clickNativeAd:(id)arg1;
- (void)showNativeAd:(id)arg1 withNativeData:(id)arg2;
- (void)loadNativeAd:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

