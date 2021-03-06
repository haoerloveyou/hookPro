//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDDBSessionProtocol.h"

@class MFSimpleDatabase, NSString;

@interface DBSessionProvider : NSObject <MDDBSessionProtocol>
{
    double minimumTimeInterval;
    NSString *_tableName;
    MFSimpleDatabase *_mfdb;
}

+ (id)providerWithMFDB:(id)arg1;
@property(retain, nonatomic) MFSimpleDatabase *mfdb; // @synthesize mfdb=_mfdb;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (void).cxx_destruct;
- (void)removeAll;
- (void)removeForKeys:(id)arg1;
- (void)removeForKey:(id)arg1;
- (void)addSession:(id)arg1;
- (id)sessionForKey:(id)arg1;
- (long long)count;
- (_Bool)existsForKey:(id)arg1;
- (id)firstSession;
- (_Bool)hasMore;
- (id)loadMore:(unsigned long long)arg1 firstLoad:(_Bool)arg2;
- (void)loadAllKeys:(CDUnknownBlockType)arg1;
- (void)setMinimumTimeIntervalFromDBList:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

