//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AdViewVideo, NSError, NSString;

@protocol AdViewVideoDelegate <NSObject>

@optional
- (void)AdViewVideoFailReceiveDataWithError:(NSError *)arg1;
- (void)AdViewVideoDidReceiveAd:(NSString *)arg1;
- (void)AdViewVideoClosed;
- (void)AdViewVideoPlayEnded;
- (void)AdViewVideoPlayStarted;
- (void)AdViewVideoIsReadyToPlay:(AdViewVideo *)arg1;
@end
