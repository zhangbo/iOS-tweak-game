//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdViewView.h"

#import "AWNetworkReachabilityDelegate-Protocol.h"
#import "AdViewConfigDelegate-Protocol.h"
#import "AdViewDeviceCollectorDelegate-Protocol.h"

@class AWNetworkReachabilityWrapper, AdViewAdNetworkAdapter, AdViewConfig, AdViewConfigStore, AdViewReachability, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface AdViewViewImpl : AdViewView <AdViewConfigDelegate, AWNetworkReachabilityDelegate, AdViewDeviceCollectorDelegate>
{
    AdViewConfig *config;
    AdViewConfig *config_backgroud;
    NSMutableArray *prioritizedAdNetCfgs;
    double totalPercent;
    _Bool ignoreAutoRefreshTimer;
    _Bool ignoreNewAdRequests;
    _Bool appInactive;
    _Bool showingModalView;
    _Bool isNeedHangUp;
    _Bool requesting;
    AdViewAdNetworkAdapter *currAdapter;
    AdViewAdNetworkAdapter *lastAdapter;
    NSDate *lastRequestTime;
    NSMutableDictionary *pendingAdapters;
    NSTimer *refreshTimer;
    id lastNotifyAdapter;
    id lastNotifyGotAdapter;
    id lastNotifyGotAdView;
    double lastNotifyGotTime;
    AdViewConfigStore *configStore;
    AWNetworkReachabilityWrapper *rollOverReachability;
    AdViewReachability *internetReach;
    _Bool bNetReachable;
    NSTimer *_configTimer;
}

+ (void)adViewConfigDidFail:(id)arg1 error:(id)arg2;
+ (void)adViewConfigDidReceiveConfig:(id)arg1;
+ (id)adViewConfigURL;
+ (void)cleanupDummyRetain:(id)arg1;
@property(retain, nonatomic) NSTimer *configTimer; // @synthesize configTimer=_configTimer;
@property(retain, nonatomic) AWNetworkReachabilityWrapper *rollOverReachability; // @synthesize rollOverReachability;
@property(retain, nonatomic) AdViewConfigStore *configStore; // @synthesize configStore;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer;
@property(retain, nonatomic) NSDate *lastRequestTime; // @synthesize lastRequestTime;
@property(retain, nonatomic) AdViewAdNetworkAdapter *lastAdapter; // @synthesize lastAdapter;
@property(retain, nonatomic) AdViewAdNetworkAdapter *currAdapter; // @synthesize currAdapter;
@property(retain) NSMutableArray *prioritizedAdNetCfgs; // @synthesize prioritizedAdNetCfgs;
@property(retain) AdViewConfig *config_backgroud; // @synthesize config_backgroud;
@property(retain) AdViewConfig *config; // @synthesize config;
- (void).cxx_destruct;
- (id)marketChannel;
- (void)notifyDelegateOfError:(id)arg1;
- (void)notifyDelegateOfErrorWithCode:(long long)arg1 description:(id)arg2;
- (void)becomeActive:(id)arg1;
- (void)resignActive:(id)arg1;
- (id)adViewReportMetricBaseURLString;
- (id)adViewConfigURL;
- (void)adViewConfigDidFail;
- (void)adViewConfigDidReceiveConfig;
- (void)reachabilityChanged:(id)arg1;
- (void)reachabilityBecameReachable:(id)arg1;
- (void)reachabilityNotReachable:(id)arg1;
- (void)adapterDidFinishAdRequest:(id)arg1;
- (void)adapter:(id)arg1 shouldReport:(id)arg2 DisplayOrClick:(_Bool)arg3;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (void)adapter:(id)arg1 shouldAddAdView:(id)arg2;
- (void)adapter:(id)arg1 didReceiveAdView:(id)arg2;
- (void)adRequestReturnsForAdapter:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_isEventATouch30:(id)arg1;
- (void)newAdAnimationDidStopWithAnimationID:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)replaceBannerViewWith:(id)arg1;
- (void)transitionToView:(id)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (struct CGSize)actualAdSize;
- (void)reportExData:(id)arg1 netType:(int)arg2 reportType:(id)arg3;
- (void)metricPing:(id)arg1 nid:(id)arg2 netType:(int)arg3 reportString:(id)arg4;
- (_Bool)isIgnoringNewAdRequests;
- (void)doNotIgnoreNewAdRequests;
- (void)ignoreNewAdRequests;
- (_Bool)isAutoRefreshStarted;
- (void)startAutoRefresh;
- (void)clearAdsAndStopAutoRefresh;
- (void)stopAutoRefresh;
- (id)mostRecentNetworkName;
- (_Bool)adExists;
- (void)rollOver;
- (void)requestFreshAd;
- (void)timerRequestFreshAd;
- (_Bool)canRefresh;
- (void)setInShowingModalView:(_Bool)arg1;
- (void)makeAdRequest:(_Bool)arg1;
- (id)nextNetworkCfgByPriority;
- (id)nextNetworkCfgByPercent;
- (double)nextDart;
- (void)buildPrioritizedAdNetCfgsAndMakeRequest;
- (void)moveNetCfgs:(id)arg1 AdFill:(_Bool)arg2;
- (void)startGetConfig;
- (void)requestAd;
- (void)dealloc;
- (id)initWithAppKey:(id)arg1 WithDelegate:(id)arg2;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
