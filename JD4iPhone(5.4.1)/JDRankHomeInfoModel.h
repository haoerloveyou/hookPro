//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface JDRankHomeInfoModel : NSObject
{
    NSString *_cateId;
    NSString *_cateName;
    NSArray *_products;
    NSArray *_hotSearch;
    NSArray *_shopInfo;
    NSArray *_activities;
}

@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(retain, nonatomic) NSArray *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(retain, nonatomic) NSArray *hotSearch; // @synthesize hotSearch=_hotSearch;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) NSString *cateName; // @synthesize cateName=_cateName;
@property(retain, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end
