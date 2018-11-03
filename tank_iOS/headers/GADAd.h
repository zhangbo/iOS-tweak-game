//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdReward, GADAutoClickProtection, GADSafeBrowsingReporter, GADStatisticDictionary, GADSwipeToViewControllerConfigurations, NSDictionary, NSMutableArray, NSMutableSet, NSString, NSURL, NSURLRequest;
@protocol GADAdMediationDelegate, GADMRAIDEventHandling;

@interface GADAd : NSObject
{
    NSMutableSet *_clickURLs;
    NSMutableSet *_impressionURLs;
    NSMutableSet *_manualImpressionURLs;
    _Bool _hasSentDebugSignal;
    _Bool _scrollEnabled;
    _Bool _fluid;
    _Bool _hasAdNetworkJavaScript;
    GADStatisticDictionary *_statistics;
    NSURL *_adBaseURL;
    NSString *_adHTML;
    NSURL *_adURL;
    NSURLRequest *_originalRequest;
    NSMutableArray *_redirects;
    NSDictionary *_responseHeaders;
    NSDictionary *_activeViewConfigurations;
    long long _impressionDefinition;
    GADSwipeToViewControllerConfigurations *_swipeToViewControllerConfigurations;
    unsigned long long _responseType;
    id <GADMRAIDEventHandling> _MRAIDEventHandler;
    double _reloadInterval;
    unsigned long long _supportedOrientations;
    NSString *_debugDialogString;
    NSString *_customAdSizeString;
    GADAutoClickProtection *_autoClickProtection;
    GADSafeBrowsingReporter *_safeBrowsingReporter;
    double _croppedContentThreshold;
    NSURL *_adNetworkPassbackURL;
    NSString *_GWSQueryID;
    id <GADAdMediationDelegate> _mediationDelegate;
    NSString *_debugSignalInformation;
    NSString *_adUnitID;
    GADAdReward *_reward;
    struct CGSize _size;
}

@property(retain, nonatomic) GADAdReward *reward; // @synthesize reward=_reward;
@property(copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(copy, nonatomic) NSString *debugSignalInformation; // @synthesize debugSignalInformation=_debugSignalInformation;
@property(nonatomic) __weak id <GADAdMediationDelegate> mediationDelegate; // @synthesize mediationDelegate=_mediationDelegate;
@property(copy, nonatomic) NSString *GWSQueryID; // @synthesize GWSQueryID=_GWSQueryID;
@property(readonly, copy, nonatomic) NSURL *adNetworkPassbackURL; // @synthesize adNetworkPassbackURL=_adNetworkPassbackURL;
@property(readonly, nonatomic) _Bool hasAdNetworkJavaScript; // @synthesize hasAdNetworkJavaScript=_hasAdNetworkJavaScript;
@property(nonatomic) double croppedContentThreshold; // @synthesize croppedContentThreshold=_croppedContentThreshold;
@property(retain, nonatomic) GADSafeBrowsingReporter *safeBrowsingReporter; // @synthesize safeBrowsingReporter=_safeBrowsingReporter;
@property(retain, nonatomic) GADAutoClickProtection *autoClickProtection; // @synthesize autoClickProtection=_autoClickProtection;
@property(copy, nonatomic) NSString *customAdSizeString; // @synthesize customAdSizeString=_customAdSizeString;
@property(copy, nonatomic) NSString *debugDialogString; // @synthesize debugDialogString=_debugDialogString;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) double reloadInterval; // @synthesize reloadInterval=_reloadInterval;
@property(nonatomic, getter=isFluid) _Bool fluid; // @synthesize fluid=_fluid;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak id <GADMRAIDEventHandling> MRAIDEventHandler; // @synthesize MRAIDEventHandler=_MRAIDEventHandler;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) unsigned long long responseType; // @synthesize responseType=_responseType;
@property(retain, nonatomic) GADSwipeToViewControllerConfigurations *swipeToViewControllerConfigurations; // @synthesize swipeToViewControllerConfigurations=_swipeToViewControllerConfigurations;
@property(nonatomic) long long impressionDefinition; // @synthesize impressionDefinition=_impressionDefinition;
@property(copy, nonatomic) NSDictionary *activeViewConfigurations; // @synthesize activeViewConfigurations=_activeViewConfigurations;
@property(copy, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(readonly, copy, nonatomic) NSMutableArray *redirects; // @synthesize redirects=_redirects;
@property(copy, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(copy, nonatomic) NSURL *adURL; // @synthesize adURL=_adURL;
@property(copy, nonatomic) NSString *adHTML; // @synthesize adHTML=_adHTML;
@property(copy, nonatomic) NSURL *adBaseURL; // @synthesize adBaseURL=_adBaseURL;
@property(retain, nonatomic) GADStatisticDictionary *statistics; // @synthesize statistics=_statistics;
- (void).cxx_destruct;
- (void)pingManualImpressionURLs;
- (void)pingImpressionURLs;
- (void)pingDebugSignal;
- (void)pingClickURLs;
- (void)addManualImpressionURLsFromArray:(id)arg1;
- (void)addImpressionURLsFromArray:(id)arg1;
- (void)addClickURLsFromArray:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

