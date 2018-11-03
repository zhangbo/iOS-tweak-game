//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class GDTSplashViewClickData;
@protocol GDTSplashImageViewDelegate;

@interface GDTSplashImageView : UIImageView
{
    id <GDTSplashImageViewDelegate> _delegate;
    GDTSplashViewClickData *_clickData;
}

@property(retain, nonatomic) GDTSplashViewClickData *clickData; // @synthesize clickData=_clickData;
@property(nonatomic) __weak id <GDTSplashImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

