//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, TBTakeoutUserInfoModel;
@protocol TBTakeoutNavListModel;

@interface TBTakeoutMeModel : TBJSONModel
{
    TBTakeoutUserInfoModel *_userInfo;	// 8 = 0x8
    NSArray<TBTakeoutNavListModel> *_navList;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray<TBTakeoutNavListModel> *navList; // @synthesize navList=_navList;
@property(retain, nonatomic) TBTakeoutUserInfoModel *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;

@end

