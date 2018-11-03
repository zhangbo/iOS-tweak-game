//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADBannerView.h"

#import "GADDynamicHeightSearchBannerViewDelegate-Protocol.h"

@class GADDynamicHeightSearchBannerView, NSString;
@protocol GADAdSizeDelegate;

@interface GADSearchBannerView : GADBannerView <GADDynamicHeightSearchBannerViewDelegate>
{
    GADDynamicHeightSearchBannerView *_dynamicHeightAdView;
}

@property(retain, nonatomic) GADDynamicHeightSearchBannerView *dynamicHeightAdView; // @synthesize dynamicHeightAdView=_dynamicHeightAdView;
- (void).cxx_destruct;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerView:(id)arg1 didUpdateDesiredContentSize:(struct CGSize)arg2;
- (void)bannerView:(id)arg1 didReceiveLandingPageURL:(id)arg2;
- (void)bannerViewDidReceiveAd:(id)arg1;
- (void)setAdUnitID:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)loadRequest:(id)arg1;
- (void)commonInitWithAdSize:(struct GADAdSize)arg1;

// Remaining properties
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @dynamic adSizeDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

