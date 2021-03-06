//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface TBFICImageFormat : NSObject <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSString *_family;	// 16 = 0x10
    struct CGSize _imageSize;	// 24 = 0x18
    struct CGSize _pixelSize;	// 40 = 0x28
    unsigned long long _style;	// 56 = 0x38
    long long _maximumCount;	// 64 = 0x40
    unsigned long long _devices;	// 72 = 0x48
    unsigned long long _protectionMode;	// 80 = 0x50
    double _imageScale;	// 88 = 0x58
}

+ (id)formatWithName:(id)arg1 family:(id)arg2 imageSize:(struct CGSize)arg3 style:(unsigned long long)arg4 maximumCount:(long long)arg5 devices:(unsigned long long)arg6 protectionMode:(unsigned long long)arg7;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) unsigned long long protectionMode; // @synthesize protectionMode=_protectionMode;
@property(nonatomic) unsigned long long devices; // @synthesize devices=_devices;
@property(nonatomic) long long maximumCount; // @synthesize maximumCount=_maximumCount;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *family; // @synthesize family=_family;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *protectionModeString;
@property(readonly, nonatomic) _Bool isGrayscale;
@property(readonly, nonatomic) long long bitsPerComponent;
@property(readonly, nonatomic) long long bytesPerPixel;
@property(readonly, nonatomic) unsigned int bitmapInfo;

@end

