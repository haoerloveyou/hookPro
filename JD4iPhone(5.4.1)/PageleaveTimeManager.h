//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PageleaveTimeManager : NSObject
{
}

+ (void)logResponsTime:(id)arg1 isCache:(_Bool)arg2 functionName:(id)arg3;
+ (_Bool)isPageLeaveTimeOut:(id)arg1 timeAge:(double)arg2;
+ (void)removePageLeaveTime:(id)arg1;
+ (void)savePageLeaveTime:(id)arg1;

@end

