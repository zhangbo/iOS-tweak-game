//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADAd, GADAudioVideoManager, GADRequest, GADSlot, NSArray, NSString, UIView, UIViewController;
@protocol GADInAppPurchaseDelegate;

@protocol GADSlotDelegate <NSObject>

@optional
- (_Bool)slot:(GADSlot *)arg1 shouldDisableVideoEventReportToAudioVideoManager:(GADAudioVideoManager *)arg2;
- (_Bool)slot:(GADSlot *)arg1 shouldChangeAudioSessionCategoryTo:(NSString *)arg2;
- (void)slotDidReceiveAdClick:(GADSlot *)arg1;
- (void)slot:(GADSlot *)arg1 willLoadAdWithRequest:(GADRequest *)arg2;
- (_Bool)slot:(GADSlot *)arg1 notifyPublisherToRenderCustomRenderingAd:(GADAd *)arg2 error:(id *)arg3;
- (void)slot:(GADSlot *)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
- (void)slot:(GADSlot *)arg1 willResizeToAdSize:(struct GADAdSize)arg2;
- (NSArray *)validAdSizes;
- (struct GADAdSize)adSize;
- (void)layoutSubviewsIfNeeded;
- (void)setAdSize:(struct GADAdSize)arg1 andReload:(_Bool)arg2;
- (void)slot:(GADSlot *)arg1 contentSizeDidChange:(struct CGSize)arg2;
- (void)slot:(GADSlot *)arg1 didReceiveAdView:(UIView *)arg2;
- (UIViewController *)rootViewController;
- (id <GADInAppPurchaseDelegate>)inAppPurchaseDelegate;
- (struct CGRect)bounds;
- (struct CGRect)frameInInterface;
- (struct CGRect)frame;
- (_Bool)slotShouldPreemptInProgressRequest:(GADSlot *)arg1;
- (_Bool)slotShouldReloadCurrentRequest:(GADSlot *)arg1;
- (_Bool)slot:(GADSlot *)arg1 shouldLoadRequest:(GADRequest *)arg2 error:(id *)arg3;
@end

