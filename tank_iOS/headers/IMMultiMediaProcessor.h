//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMBaseProcessor.h"

#import "IMMediaManagerDelegate-Protocol.h"

@class IMMediaManager;

@interface IMMultiMediaProcessor : IMBaseProcessor <IMMediaManagerDelegate>
{
    IMMediaManager *_mediaManager;
}

@property(retain, nonatomic) IMMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imMediaManagerFireErrorEvent:(id)arg1 onCommand:(id)arg2 forScheme:(id)arg3;
- (void)closeAllMedia;
- (void)playVideoWithParams:(id)arg1 withScheme:(id)arg2;
- (id)initWithRenderView:(id)arg1;

@end

