//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, Traveller;

@protocol TravellerDelegate <NSObject>

@optional
- (void)Traveller:(Traveller *)arg1 didReceiveUnexpectedPacket:(NSData *)arg2;
- (void)Traveller:(Traveller *)arg1 didReceiveResponsePacket:(NSData *)arg2;
- (void)Traveller:(Traveller *)arg1 didFailToSendPacket:(NSData *)arg2 error:(NSError *)arg3;
- (void)Traveller:(Traveller *)arg1 didSendPacket:(NSData *)arg2;
- (void)Traveller:(Traveller *)arg1 didFailWithError:(NSError *)arg2;
- (void)Traveller:(Traveller *)arg1 didStartWithAddress:(NSData *)arg2;
@end

