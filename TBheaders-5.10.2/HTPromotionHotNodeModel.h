//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class HTDosTbovsNodeModel, NSString;

@interface HTPromotionHotNodeModel : TBJSONModel
{
    _Bool _leaf;	// 8 = 0x8
    long long _id;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    HTDosTbovsNodeModel *_nodeData;	// 32 = 0x20
}

@property(retain, nonatomic) HTDosTbovsNodeModel *nodeData; // @synthesize nodeData=_nodeData;
@property(nonatomic) _Bool leaf; // @synthesize leaf=_leaf;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

