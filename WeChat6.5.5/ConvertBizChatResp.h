//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, BizChatUser, FullBizChat, NSString, QyBaseResponse;

__attribute__((visibility("hidden")))
@interface ConvertBizChatResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int bizchatType; // @dynamic bizchatType;
@property(retain, nonatomic) NSString *brandUserName; // @dynamic brandUserName;
@property(retain, nonatomic) FullBizChat *groupChat; // @dynamic groupChat;
@property(retain, nonatomic) QyBaseResponse *qyBaseResp; // @dynamic qyBaseResp;
@property(retain, nonatomic) BizChatUser *singleChat; // @dynamic singleChat;

@end
