//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMNetworkDelegate-Protocol.h"

@class IMAdsConfig, IMAdsDAO, IMNetworkServiceProvider, IMRequest, NSString;
@protocol IMAdStoreDelegate;

@interface IMAdStore : NSObject <IMNetworkDelegate>
{
    _Bool _hasReturnedFromCache;
    id <IMAdStoreDelegate> _delegate;
    IMNetworkServiceProvider *_nsp;
    IMAdsDAO *_adsDAO;
    IMRequest *_request;
    long long _placementId;
    NSString *_adType;
    NSString *_adSize;
    IMAdsConfig *_config;
    double _loadStartTS;
    NSString *_clientID;
    NSString *_isPreloaded;
}

@property(retain, nonatomic) NSString *isPreloaded; // @synthesize isPreloaded=_isPreloaded;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(nonatomic) double loadStartTS; // @synthesize loadStartTS=_loadStartTS;
@property _Bool hasReturnedFromCache; // @synthesize hasReturnedFromCache=_hasReturnedFromCache;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *adSize; // @synthesize adSize=_adSize;
@property(retain, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(nonatomic) long long placementId; // @synthesize placementId=_placementId;
@property(retain, nonatomic) IMRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) IMAdsDAO *adsDAO; // @synthesize adsDAO=_adsDAO;
@property(retain, nonatomic) IMNetworkServiceProvider *nsp; // @synthesize nsp=_nsp;
@property(nonatomic) __weak id <IMAdStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)genericTelemetryPayload;
- (void)submitServerCallInitiatedFor:(id)arg1 placementId:(long long)arg2;
- (int)convertToAdsErrorFromNetworkResponse:(id)arg1;
- (void)sendFailureCallbackWithErrorCode:(int)arg1 andDescription:(id)arg2 clientID:(id)arg3;
- (void)sendSuccessCallbackWithAdContent:(id)arg1 impId:(id)arg2 insertionTS:(id)arg3 vastTag:(id)arg4 expiry:(id)arg5 clientID:(id)arg6;
- (void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetResponse:(id)arg3;
- (void)saveAds:(id)arg1 withRequestId:(id)arg2;
- (id)createAdNetworkRequest:(id)arg1;
- (void)getAdFromNetwork:(id)arg1;
- (id)getAdFromCache;
- (void)updateVastTagForPlacementID:(long long)arg1 withRequestID:(id)arg2 withVastTag:(id)arg3;
- (_Bool)deleteAdForImpressionId:(id)arg1;
- (void)getAdForParams:(id)arg1 withConfig:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
