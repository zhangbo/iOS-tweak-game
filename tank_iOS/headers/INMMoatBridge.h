//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "INMMoatDecorator.h"

@class CALayer;

@interface INMMoatBridge : INMMoatDecorator
{
    _Bool _isFullScreen;
    int _isNativeAd;
    CALayer *_target;
    id _client;
}

+ (id)toJSON:(id)arg1;
+ (id)logToConsole:(const char *)arg1 ofSize:(int)arg2;
@property(nonatomic) int isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(retain) id client; // @synthesize client=_client;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property __weak CALayer *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)getJSEnvString;
- (id)getMetaData;
- (void)addDebugInfoTo:(id)arg1 windowId:(int)arg2 topLayer:(id)arg3 topLayerName:(id)arg4 window:(id)arg5 adLayer:(id)arg6;
- (id)getResponseForMoatRequest:(id)arg1;
- (_Bool)isMoatRequest:(id)arg1;
- (void)markMoatActive;
- (id)initWithDelegate:(id)arg1 target:(id)arg2 delegateProtocol:(id)arg3 forNativeAd:(_Bool)arg4;

@end

