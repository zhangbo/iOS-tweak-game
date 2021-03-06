//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class AdViewReqItem, NSMutableArray, NSMutableDictionary, NSString;

@interface AdInstlRequestManager : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    NSMutableArray *recData;
    int nItemId;
    NSObject *lockObj;
    AdViewReqItem *curReqItem;
    int lastReqStoreTime;
    NSMutableArray *pendingReqItems;
    NSMutableDictionary *connectionDic;
}

+ (id)shareRequestManager;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (void)donePostByConnection:(id)arg1 Status:(_Bool)arg2;
- (id)getAdInstlItemByID:(int)arg1;
- (void)actCheckSend;
- (void)addData:(int)arg1 ReqType:(id)arg2 AppId:(id)arg3 ConfigVer:(int)arg4;
- (void)createCurReqItem:(id)arg1 ConfigVer:(int)arg2;
- (void)checkRemoveOldReqItem;
- (void)addCurrentToPending;
- (void)resignActive:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

