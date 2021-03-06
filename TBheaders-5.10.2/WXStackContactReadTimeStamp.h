//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface WXStackContactReadTimeStamp : NSObject
{
    long long sessionType;	// 8 = 0x8
    NSString *sessionId;	// 16 = 0x10
    unsigned long long timeStamp;	// 24 = 0x18
    unsigned long long unreadMsgCount;	// 32 = 0x20
    long long lastMsgTime;	// 40 = 0x28
    long long lastMsgContentType;	// 48 = 0x30
    NSString *lastMsgContent;	// 56 = 0x38
    NSArray *arylastMsgContents;	// 64 = 0x40
    unsigned long long playTime;	// 72 = 0x48
    unsigned long long fileSize;	// 80 = 0x50
    NSNumber *msgId;	// 88 = 0x58
    NSDictionary *extData;	// 96 = 0x60
}

@property(retain, nonatomic) NSDictionary *extData; // @synthesize extData;
@property(retain, nonatomic) NSNumber *msgId; // @synthesize msgId;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
@property(nonatomic) unsigned long long playTime; // @synthesize playTime;
@property(retain, nonatomic) NSArray *arylastMsgContents; // @synthesize arylastMsgContents;
@property(copy, nonatomic) NSString *lastMsgContent; // @synthesize lastMsgContent;
@property(nonatomic) long long lastMsgContentType; // @synthesize lastMsgContentType;
@property(nonatomic) long long lastMsgTime; // @synthesize lastMsgTime;
@property(nonatomic) unsigned long long unreadMsgCount; // @synthesize unreadMsgCount;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(nonatomic) long long sessionType; // @synthesize sessionType;
- (void).cxx_destruct;
- (id)init;

@end

