//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AdInstlManagerDelegate-Protocol.h"
#import "AdViewControllerDelegate-Protocol.h"
#import "WXApiManagerDelegate-Protocol.h"

@class AdInstlManager, NSString;

@interface RootViewController : UIViewController <AdViewControllerDelegate, AdInstlManagerDelegate, WXApiManagerDelegate>
{
    AdInstlManager *adInstl;
    int _currentScene;
    NSString *_appId;
}

@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) int currentScene; // @synthesize currentScene=_currentScene;
@property(retain, nonatomic) AdInstlManager *adInstl; // @synthesize adInstl;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (_Bool)prefersStatusBarHidden;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)managerDidRecvAuthResponse:(id)arg1;
- (void)managerDidRecvAddCardResponse:(id)arg1;
- (void)managerDidRecvMessageResponse:(id)arg1;
- (void)managerDidRecvLaunchFromWXReq:(id)arg1;
- (void)managerDidRecvShowMessageReq:(id)arg1;
- (void)managerDidRecvGetMessageReq:(id)arg1;
- (void)sendLinkContent2:(int)arg1;
- (void)sendLinkContent:(int)arg1;
- (_Bool)adInstlUsingHtml5;
- (_Bool)adInstlLogMode;
- (_Bool)adInstlTestMode;
- (void)adInstlReceivedNotificationAdsAreOff:(id)arg1;
- (void)adInstlManager:(id)arg1 didGetEvent:(int)arg2 error:(id)arg3;
- (void)showInstlAd;
- (void)loadInstlAd;
- (void)didGotNotify:(id)arg1 Info:(id)arg2;
- (void)setAdIsVisible:(_Bool)arg1;
- (void)setNewRect:(int)arg1;
- (void)removeAd;
- (void)showAd;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
