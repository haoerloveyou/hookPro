//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailApiUnit;

@interface AliDetailASYIModel : TBJSONModel
{
    AliDetailApiUnit *_apiUnit;	// 8 = 0x8
    id _extras;	// 16 = 0x10
}

@property(retain, nonatomic) id extras; // @synthesize extras=_extras;
@property(retain, nonatomic) AliDetailApiUnit *apiUnit; // @synthesize apiUnit=_apiUnit;
- (void).cxx_destruct;

@end
