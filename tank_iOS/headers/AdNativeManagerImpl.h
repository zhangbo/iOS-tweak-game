//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdNativeManager.h"

#import "AdViewConfigDelegate-Protocol.h"
#import "AdViewDeviceCollectorDelegate-Protocol.h"

@class AdNativeAdNetworkAdapter, AdViewConfig, AdViewConfigStore, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface AdNativeManagerImpl : AdNativeManager <AdViewConfigDelegate, AdViewDeviceCollectorDelegate>
{
    AdViewConfig *config;
    AdViewConfig *config_backgroud;
    NSMutableArray *prioritizedAdNetCfgs;
    AdViewConfigStore *configStore;
    unsigned long long configFetchAttempts;
    _Bool gotConfig;
    _Bool isNeedHangUp;
    double totalPercent;
    NSMutableDictionary *pendingAdapters;
    AdNativeAdNetworkAdapter *lastAdapter;
    AdNativeAdNetworkAdapter *currAdapter;
    NSArray *testDarts;
    unsigned long long testDartIndex;
    _Bool bWaitPresent;
    NSDate *lastRequestTime;
    int adCount;
    _Bool bLoadingAd;
    _Bool singleLoading;
    NSTimer *_configTimer;
}

@property(retain, nonatomic) NSTimer *configTimer; // @synthesize configTimer=_configTimer;
@property(retain, nonatomic) NSArray *testDarts; // @synthesize testDarts;
@property(retain, nonatomic) AdNativeAdNetworkAdapter *currAdapter; // @synthesize currAdapter;
@property(retain, nonatomic) AdNativeAdNetworkAdapter *lastAdapter; // @synthesize lastAdapter;
@property(retain, nonatomic) NSMutableArray *prioritizedAdNetCfgs; // @synthesize prioritizedAdNetCfgs;
@property(retain, nonatomic) AdViewConfig *config_backgroud; // @synthesize config_backgroud;
@property(retain, nonatomic) AdViewConfig *config; // @synthesize config;
- (void).cxx_destruct;
- (id)marketChannel;
- (id)appKey;
- (void)adapter:(id)arg1 failedRequestNativeAd:(id)arg2;
- (void)someMethod;
- (void)adapter:(id)arg1 didReceivedNativeAd:(id)arg2;
- (void)adapter:(id)arg1 report:(int)arg2;
- (void)adRequestReturnsForAdapter:(id)arg1;
- (id)currentNetworkName;
- (int)loadType;
- (_Bool)isReady;
- (void)rollOver;
- (void)loadSingleAdNative:(int)arg1 withIndex:(int)arg2;
- (void)loadNativeAd:(int)arg1;
- (void)setInLoading:(_Bool)arg1;
- (void)clearLoadingFlagFunc;
- (id)nextNetworkCfgByPriority;
- (id)nextNetworkCfgByPercent;
- (double)nextDart;
- (void)notifyDelegateOfError:(id)arg1;
- (void)makeRequest:(int)arg1;
- (void)buildPrioritizedAdNetCfgs;
- (void)reportExData:(id)arg1 netType:(int)arg2 reportType:(id)arg3;
- (void)metricPing:(id)arg1 nid:(id)arg2 netType:(int)arg3 reportString:(id)arg4;
- (id)adNativeReportMetricBaseURLString;
- (id)adViewConfigURL;
- (void)adViewConfigDidFail;
- (void)adViewConfigDidReceiveConfig;
- (void)moveNetCfgs:(id)arg1 AdFill:(_Bool)arg2;
- (void)startGetConfig;
- (void)dealloc;
- (id)initWithAdNativeKey:(id)arg1 WithDelegate:(id)arg2;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

