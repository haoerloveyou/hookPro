//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FinderInventoryHeadPicModel, NSArray, NSNumber, NSString;

@interface FinderInventoryListModel : NSObject
{
    NSString *_code;
    NSString *_offSet;
    FinderInventoryHeadPicModel *_headPic;
    NSArray *_content;
    NSString *_testId;
    NSNumber *_sysTime;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSNumber *sysTime; // @synthesize sysTime=_sysTime;
@property(copy, nonatomic) NSString *testId; // @synthesize testId=_testId;
@property(retain, nonatomic) NSArray *content; // @synthesize content=_content;
@property(retain, nonatomic) FinderInventoryHeadPicModel *headPic; // @synthesize headPic=_headPic;
@property(copy, nonatomic) NSString *offSet; // @synthesize offSet=_offSet;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

