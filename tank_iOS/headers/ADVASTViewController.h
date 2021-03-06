//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ADVASTNonVideoViewDelegate-Protocol.h"
#import "ADVASTVideoDownloadManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class ADVASTEventProcessor, ADVASTMediaFile, ADVASTModel, ADVASTResourceLoader, ADVASTVideoDownloadManager, ADVideoReachability, AVPlayer, AVPlayerItem, AVPlayerLayer, NSArray, NSMutableArray, NSString, NSTimer, NSURL, UIActivityIndicatorView, UIButton;
@protocol ADVASTViewControllerDelegate;

@interface ADVASTViewController : UIViewController <ADVASTNonVideoViewDelegate, UIAlertViewDelegate, ADVASTVideoDownloadManagerDelegate>
{
    NSURL *mediaFileURL;
    NSArray *clickTracking;
    NSArray *vastErrors;
    NSArray *impressions;
    NSTimer *playbackTimer;
    NSTimer *videoLoadTimeoutTimer;
    double movieDuration;
    CDStruct_1b6d18a9 durationTime;
    double playedSeconds;
    float currentPlayedPercentage;
    _Bool isPlaying;
    _Bool isViewOnScreen;
    _Bool hasPlayerStarted;
    _Bool isLoadCalled;
    _Bool vastReady;
    _Bool statusBarHidden;
    _Bool didSkipped;
    int currentQuartile;
    UIActivityIndicatorView *loadingIndicator;
    ADVideoReachability *reachabilityForVAST;
    int skipTime;
    float scale;
    ADVASTMediaFile *currentMediaFile;
    ADVASTModel *adModel;
    _Bool videoIsFinished;
    struct CGSize currentVideoSize;
    NSMutableArray *nonVideoViewArr;
    _Bool isPaused;
    _Bool isBufferEmpty;
    _Bool isNoWifiAndNoBuffer;
    UIButton *timeButton;
    _Bool enableAutoClose;
    _Bool _isShowAlertView;
    _Bool _networkCurrentlyReachable;
    float leftGap;
    float topGap;
    long long orientation;
    id <ADVASTViewControllerDelegate> _delegate;
    NSURL *_clickThrough;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    AVPlayer *_player;
    ADVASTResourceLoader *_loader;
    ADVASTEventProcessor *_eventProcessor;
    NSMutableArray *_videoHangTest;
    ADVASTVideoDownloadManager *_manager;
}

@property(retain, nonatomic) ADVASTVideoDownloadManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool networkCurrentlyReachable; // @synthesize networkCurrentlyReachable=_networkCurrentlyReachable;
@property(retain, nonatomic) NSMutableArray *videoHangTest; // @synthesize videoHangTest=_videoHangTest;
@property(retain, nonatomic) ADVASTEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
@property(retain, nonatomic) ADVASTResourceLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool isShowAlertView; // @synthesize isShowAlertView=_isShowAlertView;
@property(retain, nonatomic) NSURL *clickThrough; // @synthesize clickThrough=_clickThrough;
@property(nonatomic) id <ADVASTViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableAutoClose; // @synthesize enableAutoClose;
@property(retain, nonatomic) ADVASTModel *adModel; // @synthesize adModel;
@property(retain, nonatomic) ADVASTMediaFile *currentMediaFile; // @synthesize currentMediaFile;
@property(nonatomic) float scale; // @synthesize scale;
@property(nonatomic) long long orientation; // @synthesize orientation;
@property(nonatomic) float topGap; // @synthesize topGap;
@property(nonatomic) float leftGap; // @synthesize leftGap;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)clickActionWithUrlString:(id)arg1;
- (void)cacheTaskFinished;
- (void)cacheTaskFailedWithError:(id)arg1;
- (void)setupReachability;
- (id)checkNetworkType;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showFaildInfomation:(id)arg1;
- (void)addAlertView;
- (void)becomeActive:(id)arg1;
- (void)resignActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)failedPlayToEnd:(id)arg1;
- (void)videoPlayStalled;
- (void)playbackFinished:(id)arg1;
- (void)removeObservers;
- (void)addNotification;
- (void)removeObserver;
- (void)addObserver;
- (struct CGSize)changeSize:(struct CGSize)arg1 withSize:(struct CGSize)arg2;
- (_Bool)isPlaying;
- (void)addCloseAction;
- (void)showAndPlayVideo;
- (void)handleResumeState;
- (void)handlePauseState;
- (void)skipVideo;
- (void)close;
- (void)info;
- (void)resume;
- (void)pause;
- (void)playIsRollOver:(_Bool)arg1;
- (void)play;
- (void)doSameingBeforePlayVideo;
- (void)setMovieDuration:(CDStruct_1b6d18a9)arg1;
- (void)prepareToLoadVideoData;
- (_Bool)setVideoInfoWithModel;
- (void)rollOver;
- (void)killTimers;
- (void)videoLoadTimerFired;
- (void)stopVideoLoadTimeoutTimer;
- (void)startVideoLoadTimeoutTimer;
- (void)updatePlayedSeconds;
- (void)stopPlaybackTimer;
- (void)startPlaybackTimer;
- (void)createIconAndCompanion;
- (void)createTimeLabel;
- (void)updateTimeLabelText;
- (void)removeActivityView;
- (void)addActivityView;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadVideoUsingSource:(id)arg1;
- (void)loadVideoWithData:(id)arg1;
- (void)loadVideoWithURL:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

