//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBFavoriteCategoryPropertyItem : TBJSONModel
{
    NSString *_attrId;	// 8 = 0x8
    NSString *_attrName;	// 16 = 0x10
    NSString *_count;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *attrName; // @synthesize attrName=_attrName;
@property(retain, nonatomic) NSString *attrId; // @synthesize attrId=_attrId;
- (void).cxx_destruct;

@end
