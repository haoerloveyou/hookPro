//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TMSuggestHotSpot : TBJSONModel
{
    NSString *_imgurl;	// 8 = 0x8
    NSString *_actionurl;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *actionurl; // @synthesize actionurl=_actionurl;
@property(copy, nonatomic) NSString *imgurl; // @synthesize imgurl=_imgurl;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

