//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAAppTaskMgrExt <NSObject>

@optional
- (void)onLeaveWeAppWhenClickBackBtnOrWeAppTerminateWithUsername:(NSString *)arg1;
- (void)onAppTaskMarkBackToChatIsShow:(_Bool)arg1;
- (void)onAppTaskTerminate:(NSString *)arg1;
- (void)onAppTaskLaunch:(NSString *)arg1;
@end
