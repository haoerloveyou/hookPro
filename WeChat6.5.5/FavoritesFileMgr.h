//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class FavoritesFileRetainCountDB, NSString;

__attribute__((visibility("hidden")))
@interface FavoritesFileMgr : MMService <MMService>
{
    FavoritesFileRetainCountDB *_frcDB;
}

- (void).cxx_destruct;
- (_Bool)decFileRetainCountByMd5:(id)arg1 IsThumb:(_Bool)arg2 ItemLocalId:(unsigned int)arg3 DataFmt:(id)arg4;
- (_Bool)incFileRetainCountByMd5:(id)arg1 andItemLocalId:(unsigned int)arg2;
- (void)initDB:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
