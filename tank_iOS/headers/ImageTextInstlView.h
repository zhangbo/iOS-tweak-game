//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface ImageTextInstlView : UIView
{
    UIView *titleView;
    UIImageView *icon;
    UILabel *mainTitle;
    UILabel *subTitle;
    UILabel *mesLabel;
    UIButton *downLoadBtn;
    struct CGSize toSize;
}

@property(nonatomic) struct CGSize toSize; // @synthesize toSize;
@property(retain, nonatomic) UIButton *downLoadBtn; // @synthesize downLoadBtn;
@property(retain, nonatomic) UILabel *mesLabel; // @synthesize mesLabel;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hexStringToColor:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithIconImage:(id)arg1 Title:(id)arg2 subTitle:(id)arg3 message:(id)arg4 actinonType:(int)arg5 delegate:(id)arg6;

@end

