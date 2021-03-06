//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AdVideoManagerDelegate;

@interface AdVideoManager : NSObject
{
    id <AdVideoManagerDelegate> delegate;
    NSString *adVideoKey;
    NSString *appChannel;
    _Bool autoRoll;
    _Bool disableShowAlert;
}

+ (id)managerWithAdVideoKey:(id)arg1 WithDelegate:(id)arg2;
@property(nonatomic) _Bool disableShowAlert; // @synthesize disableShowAlert;
@property(nonatomic) _Bool autoRoll; // @synthesize autoRoll;
@property(retain, nonatomic) NSString *appChannel; // @synthesize appChannel;
@property(retain, nonatomic) NSString *adVideoKey; // @synthesize adVideoKey;
@property(nonatomic) __weak id <AdVideoManagerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)adapter:(id)arg1 didGetEvent:(int)arg2 error:(id)arg3;
- (id)marketChannel;
- (id)currentNetworkName;
- (int)loadType;
- (_Bool)loadSingleAdVideoView:(id)arg1 withIndex:(int)arg2;
- (_Bool)showVideoAdWithController:(id)arg1;
- (_Bool)loadVideoAd:(id)arg1;
- (void)updateUserID:(id)arg1;
- (_Bool)isReady;
- (void)startGetConfig;
- (void)dealloc;

@end

