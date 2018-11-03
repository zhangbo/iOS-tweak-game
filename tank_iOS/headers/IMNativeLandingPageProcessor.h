//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMEmbeddedBrowserDelegate-Protocol.h"
#import "IMSKStoreProductViewControllerDelegate-Protocol.h"
#import "IMSafariViewControllerDelegate-Protocol.h"

@class IMVideoAsset, NSMutableDictionary, NSString;
@protocol IMNativeLandingPageProcessorDelegate;

@interface IMNativeLandingPageProcessor : NSObject <IMEmbeddedBrowserDelegate, IMSafariViewControllerDelegate, IMSKStoreProductViewControllerDelegate>
{
    unsigned long long _loadTimeStamp;
    id <IMNativeLandingPageProcessorDelegate> _delegate;
    NSMutableDictionary *_assetIDRefs;
    IMVideoAsset *_videoAsset;
}

@property(retain, nonatomic) IMVideoAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) NSMutableDictionary *assetIDRefs; // @synthesize assetIDRefs=_assetIDRefs;
@property(nonatomic) __weak id <IMNativeLandingPageProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long loadTimeStamp; // @synthesize loadTimeStamp=_loadTimeStamp;
- (void).cxx_destruct;
- (void)imSafariViewControllerDidDismissScreen:(id)arg1;
- (void)imEmbeddedBrowserWillLeaveApplication:(id)arg1;
- (void)imEmbeddedBrowserDidFinish:(id)arg1;
- (void)imProductViewControllerLoadFailed:(id)arg1 error:(id)arg2;
- (void)imProductViewControllerLoadSuccessful:(id)arg1;
- (void)imProductViewControllerDidDismissScreen:(id)arg1;
- (void)imProductViewControllerWillDismissScreen:(id)arg1;
- (void)imProductViewControllerDidPresentScreen:(id)arg1;
- (void)imProductViewControllerWillPresentScreen:(id)arg1;
- (id)getAssetWithID:(id)arg1;
- (id)searchAssetWithID:(id)arg1 inContainer:(id)arg2;
- (void)loadAndShowSKStoreWithID:(id)arg1 withFallbackUrl:(id)arg2;
- (void)openExternalURL:(id)arg1 withFallback:(id)arg2;
- (void)openEmbeddedURL:(id)arg1 withFallbackUrl:(id)arg2;
- (void)openURL:(id)arg1;
- (id)initWithAdLoadTime:(unsigned long long)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
