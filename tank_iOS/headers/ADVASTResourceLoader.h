//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADVASTRequestTaskDelegate-Protocol.h"
#import "AVAssetResourceLoaderDelegate-Protocol.h"

@class ADVASTRequestTask, NSMutableArray, NSString;
@protocol ADVASTResourceLoaderDelegate;

@interface ADVASTResourceLoader : NSObject <AVAssetResourceLoaderDelegate, ADVASTRequestTaskDelegate>
{
    _Bool _seekRequired;
    _Bool _cacheFinished;
    id <ADVASTResourceLoaderDelegate> _delegate;
    NSMutableArray *_requestList;
    ADVASTRequestTask *_requestTask;
}

@property(retain, nonatomic) ADVASTRequestTask *requestTask; // @synthesize requestTask=_requestTask;
@property(retain, nonatomic) NSMutableArray *requestList; // @synthesize requestList=_requestList;
@property(nonatomic) _Bool cacheFinished; // @synthesize cacheFinished=_cacheFinished;
@property _Bool seekRequired; // @synthesize seekRequired=_seekRequired;
@property(nonatomic) __weak id <ADVASTResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)finishLoadingWithLoadingRequest:(id)arg1;
- (void)processRequestList;
- (void)removeLoadingRequest:(id)arg1;
- (void)newTaskWithLoadingRequest:(id)arg1 cache:(_Bool)arg2;
- (void)addLoadingRequest:(id)arg1;
- (void)requestTaskDidFailWithError:(id)arg1 task:(id)arg2;
- (void)requestTaskDidFinishLoadingWithCache:(_Bool)arg1 task:(id)arg2;
- (void)requestTaskDidUpdateCache;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)stopLoading;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
