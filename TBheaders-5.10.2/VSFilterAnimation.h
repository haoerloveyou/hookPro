//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface VSFilterAnimation : NSObject <NSCoding>
{
    NSString *_key;	// 8 = 0x8
    id _startValue;	// 16 = 0x10
    id _endValue;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
    double _duration;	// 40 = 0x28
}

+ (id)filterAnimationForParameterKey:(id)arg1 startValue:(id)arg2 endValue:(id)arg3 startTime:(double)arg4 duration:(double)arg5;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) id endValue; // @synthesize endValue=_endValue;
@property(readonly, nonatomic) id startValue; // @synthesize startValue=_startValue;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)hasValueAtTime:(double)arg1;
- (id)valueAtTime:(double)arg1;
- (id)initWithKey:(id)arg1 startValue:(id)arg2 endValue:(id)arg3 startTime:(double)arg4 duration:(double)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

