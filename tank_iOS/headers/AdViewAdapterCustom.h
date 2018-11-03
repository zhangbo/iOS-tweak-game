//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdViewAdNetworkAdapter.h"

#import "AdViewCustomAdViewDelegate-Protocol.h"
#import "AdViewWebBrowserControllerDelegate-Protocol.h"

@class AdViewCustomAdView, AdViewWebBrowserController, CLLocationManager, NSMutableData, NSString, NSURLConnection;

@interface AdViewAdapterCustom : AdViewAdNetworkAdapter <AdViewCustomAdViewDelegate, AdViewWebBrowserControllerDelegate>
{
    _Bool requesting;
    CLLocationManager *locationManager;
    NSURLConnection *adConnection;
    NSMutableData *adData;
    NSURLConnection *imageConnection;
    NSMutableData *imageData;
    AdViewCustomAdView *adView;
    AdViewWebBrowserController *webBrowserController;
}

+ (void)load;
+ (int)networkType;
@property(retain, nonatomic) AdViewWebBrowserController *webBrowserController; // @synthesize webBrowserController;
@property(retain, nonatomic) AdViewCustomAdView *adView; // @synthesize adView;
@property(retain, nonatomic) NSURLConnection *imageConnection; // @synthesize imageConnection;
@property(retain, nonatomic) NSURLConnection *adConnection; // @synthesize adConnection;
- (void).cxx_destruct;
- (void)webBrowserClosed:(id)arg1;
- (void)adTapped:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)parseAdData:(id)arg1 error:(id *)arg2;
- (_Bool)parseEnums:(int *)arg1 adInfo:(id)arg2 minVal:(int)arg3 maxVal:(int)arg4 fieldName:(id)arg5 error:(id *)arg6;
@property(readonly, nonatomic) CLLocationManager *locationManager;
- (void)dealloc;
- (void)stopBeingDelegate;
- (void)getAd;
- (_Bool)shouldSendExMetric;
- (id)initWithAdViewDelegate:(id)arg1 view:(id)arg2 config:(id)arg3 networkConfig:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
