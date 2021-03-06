//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ClientLVProvider : NSObject
{
    NSMutableDictionary *lvCache;
    NSMutableDictionary *changedList;
}

- (void)resetLvCache;
- (void)resetChangedListNames;
- (id)changedListNames;
- (long long)lvForList:(id)arg1;
- (long long)setLvObj:(id)arg1 forLtString:(id)arg2;
- (id)lvNumberForLt:(id)arg1;
- (void)setLvObj:(id)arg1 forLt:(id)arg2;
- (void)setLv:(long long)arg1 forList:(id)arg2;
- (void)dealloc;
- (id)init;

@end

