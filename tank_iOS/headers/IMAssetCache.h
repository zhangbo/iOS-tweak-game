//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMConfigDelegate-Protocol.h"
#import "IMNetworkDelegate-Protocol.h"

@class IMAdsConfig, IMAssetCacheDAO, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IMAssetCache : NSObject <IMNetworkDelegate, IMConfigDelegate>
{
    NSString *_assetCacheDirectory;
    double _defaultExpiry;
    double _maximumCacheSize;
    long long _maxRetries;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSMutableArray *_pendingRequests;
    IMAssetCacheDAO *_dao;
    IMAdsConfig *_adsConfig;
    NSMutableDictionary *_refCounts;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *refCounts; // @synthesize refCounts=_refCounts;
@property(retain, nonatomic) IMAdsConfig *adsConfig; // @synthesize adsConfig=_adsConfig;
@property(retain, nonatomic) IMAssetCacheDAO *dao; // @synthesize dao=_dao;
@property(retain, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(nonatomic) long long maxRetries; // @synthesize maxRetries=_maxRetries;
@property(nonatomic) double maximumCacheSize; // @synthesize maximumCacheSize=_maximumCacheSize;
@property(nonatomic) double defaultExpiry; // @synthesize defaultExpiry=_defaultExpiry;
@property(retain, nonatomic) NSString *assetCacheDirectory; // @synthesize assetCacheDirectory=_assetCacheDirectory;
- (void).cxx_destruct;
- (void)configUpdated:(id)arg1;
- (id)extractCacheControlHeader:(id)arg1;
- (double)timeIntervalFromDateString:(id)arg1;
- (_Bool)isBeingUsed:(id)arg1;
- (_Bool)saveFileContent:(id)arg1 atPath:(id)arg2;
- (id)requestDataForHashString:(id)arg1;
- (void)removeRequestDataFromPendingRequests:(id)arg1;
- (id)requestDataForNsp:(id)arg1;
- (void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetResponse:(id)arg3;
- (void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetHeaders:(id)arg3;
- (void)stop;
- (void)start;
- (void)unuseURL:(id)arg1 withUserId:(id)arg2;
- (void)useURL:(id)arg1 withUserId:(id)arg2;
- (void)addToTableNoOfTries:(long long)arg1 forKey:(id)arg2;
- (void)addToCacheAsset:(id)arg1 withName:(id)arg2 expiry:(double)arg3 staleWhileRevalidate:(double)arg4;
- (void)removeAssetFromCache:(id)arg1 atPath:(id)arg2;
- (void)removeLRUAssetsForSize:(double)arg1;
- (_Bool)deleteAssetAtPath:(id)arg1;
- (id)tupleForKey:(id)arg1 fromTable:(id)arg2;
- (_Bool)hasCacheForKey:(id)arg1 inTable:(id)arg2;
- (id)createHashForString:(id)arg1;
- (void)downloadAsset:(id)arg1 ofFileType:(id)arg2 withDelegate:(id)arg3;
- (void)fileDownloadSucceeded:(id)arg1 withName:(id)arg2 withExpiry:(double)arg3 staleWhileRevalidate:(double)arg4 forURL:(id)arg5;
- (void)sendSuccessCallbackForAsset:(id)arg1 toPath:(id)arg2 forURL:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)sendCallbackForFileDownloadSucceededForAsset:(id)arg1 toPath:(id)arg2 forURL:(id)arg3;
- (void)sendCallbackForFileFetchFromCacheSucceededForAsset:(id)arg1 toPath:(id)arg2 forURL:(id)arg3;
- (void)fileDownloadFailed:(id)arg1 ofFileType:(id)arg2 forURL:(id)arg3 withError:(id)arg4 shouldRetry:(_Bool)arg5;
- (void)downloadAsset:(id)arg1 ofFileType:(id)arg2;
- (id)fileExtensionFromFileType:(id)arg1;
- (double)cacheSize;
- (double)getDirectorySize:(id)arg1;
- (void)clearupCacheToMakeSize;
- (void)cleanupRetries;
- (void)cleanupExpiredAssets;
- (void)updateDefaults;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

