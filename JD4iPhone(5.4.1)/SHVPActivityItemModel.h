//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SHVPJumpProtocol.h"

@class NSString, SHVPJumpModel;

@interface SHVPActivityItemModel : NSObject <SHVPJumpProtocol>
{
    long long _type;
    NSString *_img;
    SHVPJumpModel *_jump;
}

@property(retain, nonatomic) SHVPJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)firstJumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

