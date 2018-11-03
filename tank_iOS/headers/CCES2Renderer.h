//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCESRenderer-Protocol.h"

@class EAGLContext, NSString;

@interface CCES2Renderer : NSObject <CCESRenderer>
{
    int backingWidth_;
    int backingHeight_;
    unsigned int samplesToUse_;
    _Bool multiSampling_;
    unsigned int depthFormat_;
    unsigned int pixelFormat_;
    unsigned int defaultFramebuffer_;
    unsigned int colorRenderbuffer_;
    unsigned int depthBuffer_;
    unsigned int msaaFramebuffer_;
    unsigned int msaaColorbuffer_;
    EAGLContext *context_;
}

@property(readonly, nonatomic) unsigned int msaaFramebuffer; // @synthesize msaaFramebuffer=msaaFramebuffer_;
@property(readonly, nonatomic) unsigned int msaaColorbuffer; // @synthesize msaaColorbuffer=msaaColorbuffer_;
@property(readonly, nonatomic) unsigned int colorRenderbuffer; // @synthesize colorRenderbuffer=colorRenderbuffer_;
@property(readonly, nonatomic) unsigned int defaultFramebuffer; // @synthesize defaultFramebuffer=defaultFramebuffer_;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context=context_;
- (void)dealloc;
- (unsigned int)msaaColorBuffer;
- (unsigned int)msaaFrameBuffer;
- (unsigned int)defaultFrameBuffer;
- (unsigned int)colorRenderBuffer;
@property(readonly, copy) NSString *description;
- (struct CGSize)backingSize;
- (_Bool)resizeFromLayer:(id)arg1;
- (id)initWithDepthFormat:(unsigned int)arg1 withPixelFormat:(unsigned int)arg2 withSharegroup:(id)arg3 withMultiSampling:(_Bool)arg4 withNumberOfSamples:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

