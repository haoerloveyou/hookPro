//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ETSDKServer.h"

@class NSData, NSString, NSURL, TBSDKUploadService;

@interface ETUploadServiceServer : ETSDKServer
{
    TBSDKUploadService *_uploadService;	// 32 = 0x20
    int _uploadType;	// 40 = 0x28
    NSData *_fileData;	// 48 = 0x30
    NSString *_fileName;	// 56 = 0x38
    NSURL *_fileURL;	// 64 = 0x40
    _Bool _optimize;	// 72 = 0x48
    NSString *_bizCode;	// 80 = 0x50
}

+ (id)appMonitorMeasureArray;
+ (id)appMonitorDimensionArray;
+ (id)appMonitorPoint;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(readonly, nonatomic) _Bool optimize; // @synthesize optimize=_optimize;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) int uploadType; // @synthesize uploadType=_uploadType;
@property(readonly, nonatomic) TBSDKUploadService *uploadService; // @synthesize uploadService=_uploadService;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dictionaryWithAppMonitorMeasureValue;
- (id)dictionaryWithAppMonitorDimensionValue;
- (void)requestDidFinished;
- (void)startUploadService;
- (id)init;

@end

