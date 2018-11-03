//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdViewAdNetworkRegistry, NSArray, NSDate, NSMutableArray, NSString, NSURL, UIColor;

@interface AdViewConfig : NSObject
{
    NSString *appKey;
    NSURL *configURL;
    _Bool legacy;
    _Bool adsAreOff;
    NSMutableArray *adNetworkConfigs;
    NSString *reportHost;
    UIColor *backgroundColor;
    UIColor *textColor;
    double refreshInterval;
    _Bool locationOn;
    int bannerAnimationType;
    long long fullscreenWaitInterval;
    long long fullscreenMaxAds;
    NSMutableArray *delegates;
    _Bool hasConfig;
    NSDate *getDataDate;
    AdViewAdNetworkRegistry *adNetworkRegistry;
    long long langSet;
    int fetchType;
    int configVer;
    int sdkType;
    _Bool adFill;
    NSString *adFilllPercent;
    int dispatchMethod;
    NSString *adFillPercent;
}

+ (_Bool)isDeviceForeign;
@property(nonatomic) int dispatchMethod; // @synthesize dispatchMethod;
@property(retain, nonatomic) NSString *adFillPercent; // @synthesize adFillPercent;
@property(nonatomic) _Bool adFill; // @synthesize adFill;
@property(nonatomic) int configVer; // @synthesize configVer;
@property(nonatomic) int fetchType; // @synthesize fetchType;
@property(nonatomic) long long langSet; // @synthesize langSet;
@property(readonly, nonatomic) int sdkType; // @synthesize sdkType;
@property(nonatomic) __weak AdViewAdNetworkRegistry *adNetworkRegistry; // @synthesize adNetworkRegistry;
@property(readonly, nonatomic) NSDate *getDataDate; // @synthesize getDataDate;
@property(readonly, nonatomic) NSString *reportHost; // @synthesize reportHost;
@property(readonly, nonatomic) _Bool hasConfig; // @synthesize hasConfig;
@property(readonly, nonatomic) long long fullscreenMaxAds; // @synthesize fullscreenMaxAds;
@property(readonly, nonatomic) long long fullscreenWaitInterval; // @synthesize fullscreenWaitInterval;
@property(readonly, nonatomic) int bannerAnimationType; // @synthesize bannerAnimationType;
@property(readonly, nonatomic) _Bool locationOn; // @synthesize locationOn;
@property(readonly, nonatomic) double refreshInterval; // @synthesize refreshInterval;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(readonly, nonatomic) NSArray *adNetworkConfigs; // @synthesize adNetworkConfigs;
@property(readonly, nonatomic) _Bool adsAreOff; // @synthesize adsAreOff;
@property(readonly, nonatomic) NSURL *configURL; // @synthesize configURL;
@property(readonly, nonatomic) NSString *appKey; // @synthesize appKey;
- (void).cxx_destruct;
- (_Bool)parseConfig:(id)arg1 error:(id *)arg2;
- (_Bool)parseNewConfig:(id)arg1 error:(id *)arg2;
- (_Bool)isMatchLangSet:(id)arg1;
- (_Bool)parseLegacyConfig:(id)arg1 error:(id *)arg2;
- (_Bool)parseExtraConfig:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)description;
- (void)notifyDelegatesOfFailure:(id)arg1;
- (id)initWithAppKey:(id)arg1 sdkType:(int)arg2;

@end
