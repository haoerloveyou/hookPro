//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface PCM_Buffer : NSObject
{
    unsigned int _offset;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1;

@end

