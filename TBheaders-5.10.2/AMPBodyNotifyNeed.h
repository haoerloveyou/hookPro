//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPBodyObject-Protocol.h"

@class NSString;

@interface AMPBodyNotifyNeed : NSObject <AMPBodyObject>
{
    long long _packTargetId;	// 8 = 0x8
    long long _appTypeId;	// 16 = 0x10
    NSString *_senderNick;	// 24 = 0x18
    long long _senderId;	// 32 = 0x20
    NSString *_senderIcon;	// 40 = 0x28
    NSString *_receiverNick;	// 48 = 0x30
    long long _receiverId;	// 56 = 0x38
    long long _interactType;	// 64 = 0x40
    NSString *_title;	// 72 = 0x48
    NSString *_content;	// 80 = 0x50
    long long _bizType;	// 88 = 0x58
    NSString *_parentContent;	// 96 = 0x60
    NSString *_parentExtSymbol;	// 104 = 0x68
    NSString *_extSymbol;	// 112 = 0x70
}

@property(copy, nonatomic) NSString *extSymbol; // @synthesize extSymbol=_extSymbol;
@property(copy, nonatomic) NSString *parentExtSymbol; // @synthesize parentExtSymbol=_parentExtSymbol;
@property(copy, nonatomic) NSString *parentContent; // @synthesize parentContent=_parentContent;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long interactType; // @synthesize interactType=_interactType;
@property(nonatomic) long long receiverId; // @synthesize receiverId=_receiverId;
@property(copy, nonatomic) NSString *receiverNick; // @synthesize receiverNick=_receiverNick;
@property(copy, nonatomic) NSString *senderIcon; // @synthesize senderIcon=_senderIcon;
@property(nonatomic) long long senderId; // @synthesize senderId=_senderId;
@property(copy, nonatomic) NSString *senderNick; // @synthesize senderNick=_senderNick;
@property(nonatomic) long long appTypeId; // @synthesize appTypeId=_appTypeId;
@property(nonatomic) long long packTargetId; // @synthesize packTargetId=_packTargetId;
- (void).cxx_destruct;
- (void)parseFromData:(id)arg1;
- (void)parseFromDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

