//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SuggestCellBuilder-Protocol.h"

@class NSString;

@interface TMSuggestShopCellBuilder : NSObject <SuggestCellBuilder>
{
}

- (Class)cellClass;
- (id)suggestCellReuseId;
- (double)suggestCellHeightWithData:(id)arg1;
- (id)supportSuggestDataType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

