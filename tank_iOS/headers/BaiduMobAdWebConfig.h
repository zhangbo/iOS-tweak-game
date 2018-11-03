//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BaiduMobAdWebConfig : NSObject
{
    _Bool _hasCloseControl;
    int _clickBtnDelay;
    _Bool _hasVolumeControl;
    float _videoBackgroundOpacity;
    NSString *_videoBackgroundColor;
    _Bool _applicationStateShowSpam;
    _Bool _acquireNativeInfoInRealTime;
    int _interIconButtonHeight;
    int _interIconButtonWidth;
    float _innerInterstitialRatio;
    NSString *_lpJSCode;
    NSString *_lpReferer;
}

+ (id)sharedWebConfig;
@property(nonatomic) float innerInterstitialRatio; // @synthesize innerInterstitialRatio=_innerInterstitialRatio;
@property(nonatomic) int interIconButtonWidth; // @synthesize interIconButtonWidth=_interIconButtonWidth;
@property(nonatomic) int interIconButtonHeight; // @synthesize interIconButtonHeight=_interIconButtonHeight;
@property(nonatomic) _Bool acquireNativeInfoInRealTime; // @synthesize acquireNativeInfoInRealTime=_acquireNativeInfoInRealTime;
@property(nonatomic) _Bool applicationStateShowSpam; // @synthesize applicationStateShowSpam=_applicationStateShowSpam;
@property(retain, nonatomic) NSString *lpReferer; // @synthesize lpReferer=_lpReferer;
@property(retain, nonatomic) NSString *lpJSCode; // @synthesize lpJSCode=_lpJSCode;
@property(nonatomic) float videoBackgroundOpacity; // @synthesize videoBackgroundOpacity=_videoBackgroundOpacity;
@property(retain, nonatomic) NSString *videoBackgroundColor; // @synthesize videoBackgroundColor=_videoBackgroundColor;
@property(nonatomic) _Bool hasCloseControl; // @synthesize hasCloseControl=_hasCloseControl;
@property(nonatomic) _Bool hasVolumeControl; // @synthesize hasVolumeControl=_hasVolumeControl;
@property(nonatomic) int clickBtnDelay; // @synthesize clickBtnDelay=_clickBtnDelay;
- (id)init;

@end

