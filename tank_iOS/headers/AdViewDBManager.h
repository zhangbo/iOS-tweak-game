//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AdViewDBManager : NSObject
{
    struct sqlite3 *_database;
    NSString *_path;
}

+ (void)closeDBManager:(id)arg1;
+ (id)sharedDBManagerWithPath:(id)arg1;
- (void).cxx_destruct;
- (_Bool)loadAdViewReqItems:(id)arg1 SDKType:(int)arg2;
- (_Bool)saveAdViewReqItem:(id)arg1 SDKType:(int)arg2;
- (_Bool)delAdViewReqInfo:(int)arg1 SDKType:(int)arg2;
- (int)getMaxAdViewReqInfoId:(int)arg1;
- (_Bool)ensureAdInstlReqInfoTable;
- (id)loadAdViewConfig:(id)arg1 SDKType:(int)arg2;
- (_Bool)saveAdViewConfig:(id)arg1 Key:(id)arg2 SDKType:(int)arg3;
- (_Bool)ensureAdViewConfigTable;
- (_Bool)execSql:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)path;

@end
