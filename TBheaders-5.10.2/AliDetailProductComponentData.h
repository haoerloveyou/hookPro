//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary;
@protocol AliDetailComponentLayoutModel;

@interface AliDetailProductComponentData : TBJSONModel
{
    NSDictionary *_model;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
    NSDictionary *_styles;	// 24 = 0x18
    NSArray<AliDetailComponentLayoutModel> *_children;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray<AliDetailComponentLayoutModel> *children; // @synthesize children=_children;
@property(retain, nonatomic) NSDictionary *styles; // @synthesize styles=_styles;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
- (void).cxx_destruct;

@end
