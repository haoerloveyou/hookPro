//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GetMFriendResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *friendList; // @dynamic friendList;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;

@end
