//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol TBQGBrandBannerModel, TBQGBrandModel, TBQGGoodsItem, TBQGTemplateItem;

@interface TBQGCategoryItemModel : TBJSONModel
{
    NSNumber *_categoryId;	// 8 = 0x8
    NSString *_categoryName;	// 16 = 0x10
    NSNumber *_count;	// 24 = 0x18
    NSArray<TBQGGoodsItem> *_items;	// 32 = 0x20
    NSArray<TBQGTemplateItem> *_templateConfig;	// 40 = 0x28
    NSArray<TBQGBrandModel> *_brandItems;	// 48 = 0x30
    NSArray<TBQGBrandBannerModel> *_brandBanners;	// 56 = 0x38
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSArray<TBQGBrandBannerModel> *brandBanners; // @synthesize brandBanners=_brandBanners;
@property(retain, nonatomic) NSArray<TBQGBrandModel> *brandItems; // @synthesize brandItems=_brandItems;
@property(retain, nonatomic) NSArray<TBQGTemplateItem> *templateConfig; // @synthesize templateConfig=_templateConfig;
@property(retain, nonatomic) NSArray<TBQGGoodsItem> *items; // @synthesize items=_items;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) NSNumber *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end

