//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADNativeAd.h"

#import "GADLoadable-Protocol.h"
#import "GADMediatedNativeCustomTemplateAd-Protocol.h"

@class GADMediaContent, GADMediaView, GADVideoController, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADNativeCustomTemplateAd : GADNativeAd <GADMediatedNativeCustomTemplateAd, GADLoadable>
{
    _Bool _disableImageLoading;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSDictionary *_optionalImages;
    NSDictionary *_requiredImages;
    NSMutableDictionary *_imageAssets;
    NSDictionary *_stringAssets;
    GADMediaContent *_mediaContent;
    GADMediaView *_mediaView;
    NSMutableSet *_availableAssetKeys;
    GADVideoController *_videoController;
    CDUnknownBlockType _customClickHandler;
    NSString *_templateID;
}

+ (_Bool)canInitWithAdLoader:(id)arg1 error:(id *)arg2;
+ (id)requestParametersForAdLoader:(id)arg1;
+ (id)requiredDelegateProtocol;
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void).cxx_destruct;
- (void)adLoaderDidReceiveAd:(id)arg1;
- (void)loadAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadImageAssetsWithImageDictionary:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)beginObservingVideoClickNotifications;
- (void)handleVideoClickNotifications;
- (void)handleNativeAdCustomClick:(id)arg1;
@property(readonly, nonatomic) GADMediaView *mediaView;
- (id)stringForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *availableAssetKeys;
- (id)requiredAssets;
- (void)recordImpression;
- (void)performClickOnAssetWithKey:(id)arg1 customClickHandler:(CDUnknownBlockType)arg2;
- (id)adFormatTemplateID;
- (_Bool)hasValidConfigurationForRequestParameters:(id)arg1;
- (void)setSlot:(id)arg1;
- (void)removeCustomClickObserver;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithMediatedNativeAd:(id)arg1 options:(id)arg2;
- (id)initWithDictionary:(id)arg1 options:(id)arg2;
- (void)GADNativeCustomTemplateAd_category;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

