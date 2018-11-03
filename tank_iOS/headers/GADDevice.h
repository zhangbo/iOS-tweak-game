//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo, MPVolumeView, NSArray, NSDictionary, NSNumber, NSString, UISlider;
@protocol NSObject, OS_dispatch_queue;

@interface GADDevice : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    id <NSObject> _radioAccessTechnologyChangeObserver;
    long long _statusBarOrientation;
    unsigned long long _supportedInterfaceOrientationsForKeyWindow;
    struct CGRect _standardizedMainScreenPortraitBounds;
    struct CGRect _standardizedMainScreenLandscapeBounds;
    _Bool _userInterfaceIdiomIsPhone;
    unsigned long long _bookstores;
    float _audioVolume;
    NSArray *_audioRoutePortNames;
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;
    NSDictionary *_infoPlist;
    _Bool _hasCachedStaticParameters;
    struct CGSize _standardizedOrientedKeyWindowSize;
    MPVolumeView *_volumeView;
    UISlider *_volumeSliderView;
    NSString *_lastKnownRadioAccessTechnology;
    NSString *_radioAccessTechnology;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_userAgentString;
    NSString *_deviceModel;
    NSString *_systemVersion;
    double _mainScreenDensity;
    _Bool _isOtherAudioPlaying;
    NSNumber *_shouldSilenceAudioValue;
    _Bool _canText;
    _Bool _canMakePhoneCalls;
    CDStruct_f6aba300 _operatingSystemVersion;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSNumber *shouldSilenceAudioValue; // @synthesize shouldSilenceAudioValue=_shouldSilenceAudioValue;
@property(readonly, nonatomic) _Bool isOtherAudioPlaying; // @synthesize isOtherAudioPlaying=_isOtherAudioPlaying;
@property(readonly, nonatomic) _Bool canMakePhoneCalls; // @synthesize canMakePhoneCalls=_canMakePhoneCalls;
@property(readonly, nonatomic) _Bool canText; // @synthesize canText=_canText;
@property(readonly, nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
- (void).cxx_destruct;
- (id)temporaryDirectoryURLWithCreation:(_Bool)arg1 error:(id *)arg2;
- (id)temporaryPathWithCreation:(_Bool)arg1;
- (_Bool)isSimulator;
@property(copy) NSString *userAgentString;
@property(copy) NSString *mobileCountryCode;
@property(copy) NSString *mobileNetworkCode;
@property(copy) NSString *radioAccessTechnology;
- (id)lastKnownRadioAccessTechnology;
@property(readonly, copy, nonatomic) NSArray *audioRoutePortNames;
@property(readonly, nonatomic) float audioVolume;
@property(readonly, nonatomic) struct CGSize standardizedPortraitKeyWindowSize;
@property(readonly, nonatomic) struct CGSize standardizedOrientedKeyWindowSize;
@property(readonly, nonatomic) struct CGRect standardizedOrientedApplicationFrame;
@property(readonly, nonatomic) struct CGRect standardizedOrientedScreenBounds;
@property(readonly, nonatomic) struct CGRect standardizedLandscapeScreenBounds;
@property(readonly, nonatomic) struct CGRect standardizedPortraitScreenBounds;
@property(readonly, nonatomic) _Bool orientationLandscape;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) double mainScreenDensity;
@property(readonly, nonatomic) NSString *deviceSubmodel;
@property(readonly, nonatomic) NSString *deviceModel;
- (id)deviceIdentifier;
- (id)rawDeviceIdentifier;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) _Bool jailbroken;
@property(readonly, copy, nonatomic) NSString *limitAdTrackingString;
@property(readonly, nonatomic) _Bool limitAdTracking;
- (id)canOpenURLs:(id)arg1;
- (_Bool)OSIsSupported;
- (_Bool)isOSAtLeastMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;
- (void)updateOperatingSystemVersionProperties;
- (id)diskUsageStatisticsWithError:(id *)arg1;
- (id)baseSDKVersion;
- (id)parameters;
- (void)disableRadioAccessTechnologyChecking;
- (void)enableRadioAccessTechnologyChecking;
- (void)updateAudioPortNames;
- (void)updateAudioVolume;
- (void)updateAudio;
- (void)updateOrientedKeyWindowSize;
- (void)updateMobileCarrierInformation;
- (void)updateBookstores;
- (void)updateOrientation;
- (void)updateDynamicParameters;
- (void)cacheStaticParameters;
- (id)init;

@end

