//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ItemListData, NSArray, NSString;

@interface ItemExtensionListData : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSArray *_itemArray;	// 16 = 0x10
    ItemListData *_parentData;	// 24 = 0x18
    NSString *_rn;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *rn; // @synthesize rn=_rn;
@property(nonatomic) __weak ItemListData *parentData; // @synthesize parentData=_parentData;
@property(copy, nonatomic) NSArray *itemArray; // @synthesize itemArray=_itemArray;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDataArray:(id)arg1;

@end

