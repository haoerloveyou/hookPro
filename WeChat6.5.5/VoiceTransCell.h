//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSString, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface VoiceTransCell : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int sequence; // @dynamic sequence;
@property(retain, nonatomic) SKBuiltinBuffer_t *text; // @dynamic text;
@property(retain, nonatomic) NSString *voiceId; // @dynamic voiceId;

@end
