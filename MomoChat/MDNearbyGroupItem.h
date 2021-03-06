//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDNearbyGroupLayout, NSArray, NSString;

@interface MDNearbyGroupItem : NSObject
{
    _Bool _isShowedOnce;
    long long _itemType;
    NSString *_targetId;
    NSString *_actionString;
    NSString *_postString;
    NSArray *_clickLogs;
    NSArray *_viewLogs;
    MDNearbyGroupLayout *_layout;
}

@property(retain, nonatomic) MDNearbyGroupLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool isShowedOnce; // @synthesize isShowedOnce=_isShowedOnce;
@property(retain, nonatomic) NSArray *viewLogs; // @synthesize viewLogs=_viewLogs;
@property(retain, nonatomic) NSArray *clickLogs; // @synthesize clickLogs=_clickLogs;
@property(retain, nonatomic) NSString *postString; // @synthesize postString=_postString;
@property(retain, nonatomic) NSString *actionString; // @synthesize actionString=_actionString;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)dictionayFromNearbyGroupItem;

@end

