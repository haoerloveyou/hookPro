//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface NXPackageManager : NSObject
{
    struct RecursiveMutex _propertyLock;	// 8 = 0x8
    NSDictionary *_configure;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_ioQueue;	// 80 = 0x50
}

+ (void)cleanTemporaryFolder;
+ (id)packageCachePath;
+ (id)packagePreloadPath;
+ (id)packageTemplatePath;
+ (id)packageConfigurePath;
+ (id)packageStorePath;
+ (id)packageTemporaryPath;
+ (id)packageMainPath;
+ (id)packageDocumentPath;
+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)saveUnzipFileFolder:(id)arg1;
- (void)inQueue_updateZipAtURL:(id)arg1 complete:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *configure;
- (id)jsonDictFromFilePath:(id)arg1;
- (void)updateZipAtURL:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)packageVersion;
- (id)packageForJSVersion:(id)arg1;
- (id)init;

@end

