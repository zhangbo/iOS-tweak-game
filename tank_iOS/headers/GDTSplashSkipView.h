//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;
@protocol GDTSplashSkipViewDelegate;

@interface GDTSplashSkipView : UIView
{
    int _exposureTime;
    id <GDTSplashSkipViewDelegate> _delegate;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <GDTSplashSkipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int exposureTime; // @synthesize exposureTime=_exposureTime;
- (void).cxx_destruct;
- (void)stopTick;
- (void)tick;
- (void)startTick:(int)arg1;

@end
