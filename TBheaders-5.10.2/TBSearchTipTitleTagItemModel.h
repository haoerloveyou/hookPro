//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "TBSearchTipTitleTagItemModel-Protocol.h"

@class NSString;

@interface TBSearchTipTitleTagItemModel : TBJSONModel <TBSearchTipTitleTagItemModel>
{
    NSString *paramKey;	// 8 = 0x8
    NSString *paramValue;	// 16 = 0x10
    NSString *query;	// 24 = 0x18
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSString *query; // @synthesize query;
@property(retain, nonatomic) NSString *paramValue; // @synthesize paramValue;
@property(retain, nonatomic) NSString *paramKey; // @synthesize paramKey;
- (void).cxx_destruct;

@end
