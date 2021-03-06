//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdViewAdNetworkAdapter.h"

#import "GDTMobBannerViewDelegate-Protocol.h"

@class NSString;

@interface AdViewAdapterGDTMob : AdViewAdNetworkAdapter <GDTMobBannerViewDelegate>
{
}

+ (void)load;
+ (int)networkType;
- (void)bannerViewWillLeaveApplication;
- (void)bannerViewWillClose;
- (void)bannerViewWillExposure;
- (void)bannerViewFailToReceived:(id)arg1;
- (void)bannerViewDidReceived;
- (void)bannerViewMemoryWarning;
- (_Bool)shouldSendExMetric;
- (void)updateSizeParameter;
- (id)makeAdView;
- (void)dealloc;
- (void)stopBeingDelegate;
- (void)getAd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

