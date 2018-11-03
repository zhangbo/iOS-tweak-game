//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BaiduMobAdInstance, BaiduMobAdRenderer, NSDictionary;

@protocol IBaiduMobAdRenderEventDelegate <NSObject>

@optional
- (void)onAdDismissLp;
- (void)setVisibility:(_Bool)arg1;
- (void)onInterstitialAdDismissScreen:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 withDictionary:(NSDictionary *)arg3;
- (void)onInterstitialAdFailtoLoadAd:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 reason:(int)arg3 withDictionary:(NSDictionary *)arg4;
- (void)onInterstitialAdLoaded:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 withDictionary:(NSDictionary *)arg3;
- (void)onAdFinish:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 withDictionary:(NSDictionary *)arg3;
- (void)onAdStart:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 withDictionary:(NSDictionary *)arg3;
- (void)onAdSwitch:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 withDictionary:(NSDictionary *)arg3;
- (void)onAdClicked:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 withDictionary:(NSDictionary *)arg3;
- (void)onAdImpression:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 withDictionary:(NSDictionary *)arg3;
- (void)onAdError:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 reason:(int)arg3 withDictionary:(NSDictionary *)arg4;
- (void)onAdLoaded:(BaiduMobAdRenderer *)arg1 withAdInstance:(BaiduMobAdInstance *)arg2 withDictionary:(NSDictionary *)arg3;
@end

