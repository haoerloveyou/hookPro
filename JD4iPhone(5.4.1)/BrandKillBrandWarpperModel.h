//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class BrandKillBrandModel, NSString;

@interface BrandKillBrandWarpperModel : SecKillBaseModel
{
    BrandKillBrandModel *_brandInfo;
    NSString *_available;
    NSString *_sourceValue;
}

@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(copy, nonatomic) NSString *available; // @synthesize available=_available;
@property(retain, nonatomic) BrandKillBrandModel *brandInfo; // @synthesize brandInfo=_brandInfo;
- (void).cxx_destruct;

@end

