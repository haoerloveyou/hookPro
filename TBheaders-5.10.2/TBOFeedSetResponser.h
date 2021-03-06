//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseResponseModel.h"

@class NSArray, NSMutableArray, NSString;
@protocol TBOAction, TBOCommunity, TBOFeed;

@interface TBOFeedSetResponser : TBOBaseResponseModel
{
    NSMutableArray<TBOCommunity> *_community;	// 8 = 0x8
    NSMutableArray<TBOFeed> *_feeds;	// 16 = 0x10
    NSMutableArray<TBOFeed> *_hotFeeds;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSArray<TBOAction> *_actions;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray<TBOAction> *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray<TBOFeed> *hotFeeds; // @synthesize hotFeeds=_hotFeeds;
@property(retain, nonatomic) NSMutableArray<TBOFeed> *feeds; // @synthesize feeds=_feeds;
@property(retain, nonatomic) NSMutableArray<TBOCommunity> *community; // @synthesize community=_community;
- (void).cxx_destruct;
- (id)items;

@end

