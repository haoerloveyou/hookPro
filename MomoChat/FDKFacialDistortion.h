//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "FDKTriggerable.h"
#import "MTLJSONSerializing.h"

@class NSString;

@interface FDKFacialDistortion : MTLModel <MTLJSONSerializing, FDKTriggerable>
{
    float _strength;
    NSString *_type;
    unsigned long long _triggerType;
    unsigned long long _hidingTriggerType;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) float strength; // @synthesize strength=_strength;
@property(nonatomic) unsigned long long hidingTriggerType; // @synthesize hidingTriggerType=_hidingTriggerType;
@property(nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

