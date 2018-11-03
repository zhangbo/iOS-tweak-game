//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMAdStore, NSData, NSNumber, NSString;

@protocol IMAdStoreDelegate <NSObject>
- (_Bool)adStore:(IMAdStore *)arg1 shouldDeleteAdOnFetchFromDBForMarkupType:(NSString *)arg2;
- (void)adStore:(IMAdStore *)arg1 failedToLoadAdWithErrorCode:(int)arg2 andDescription:(NSString *)arg3 clientID:(NSString *)arg4;
- (void)adStore:(IMAdStore *)arg1 didLoadAdWithResponse:(NSData *)arg2 impId:(NSString *)arg3 insertionTS:(NSNumber *)arg4 vastTag:(NSData *)arg5 clientID:(NSString *)arg6;
@end

