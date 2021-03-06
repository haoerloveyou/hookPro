//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface AliDetailSPulseLayer : CALayer
{
    double _radius;	// 24 = 0x18
    double _pulseDuration;	// 32 = 0x20
    unsigned long long _repeatTime;	// 40 = 0x28
    CDUnknownBlockType _pulseFinished;	// 48 = 0x30
}

@property(copy, nonatomic) CDUnknownBlockType pulseFinished; // @synthesize pulseFinished=_pulseFinished;
@property(nonatomic) unsigned long long repeatTime; // @synthesize repeatTime=_repeatTime;
@property(nonatomic) double pulseDuration; // @synthesize pulseDuration=_pulseDuration;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)setupAnimationGroup;
- (void)startPulse;
- (id)init;

@end

