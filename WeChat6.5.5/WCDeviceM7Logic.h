//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CMStepCounter, NSMutableArray, WCDeviceStepObject;
@protocol WCDeviceM7LogicDelegate;

__attribute__((visibility("hidden")))
@interface WCDeviceM7Logic : MMObject
{
    id <WCDeviceM7LogicDelegate> _delegate;
    _Bool m_bStepGetting;
    _Bool m_bHadGetHKStep;
    _Bool m_bHadGetM7Step;
    WCDeviceStepObject *m_oStepObject;
    _Bool m_bHadObserverQuery;
    _Bool m_bForceUploadSteps;
    int m_lastGetStepTime;
    _Bool m_bDataChanged;
    NSMutableArray *m_aryWhiteList;
    CMStepCounter *_m_cmStepCounter;
}

@property(retain, nonatomic) CMStepCounter *m_cmStepCounter; // @synthesize m_cmStepCounter=_m_cmStepCounter;
@property(nonatomic) _Bool m_bDataChanged; // @synthesize m_bDataChanged;
@property(retain, nonatomic) NSMutableArray *m_aryWhiteList; // @synthesize m_aryWhiteList;
@property(nonatomic) __weak id <WCDeviceM7LogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkCallDelegate;
- (int)getCurrM7StepCount;
- (void)getStepCount:(id)arg1;
- (_Bool)isInWhiteList:(id)arg1;
- (id)hkSource2ClientSource:(id)arg1;
- (id)getHKSourcePropertyLD;
- (id)getHKSourcePropertyPT;
- (int)getStepFromHealthKit;
- (int)tryGetStepFromHealthKit;
- (void)tryDoObserverStepQuery;
- (_Bool)getM7OrHealthKitStepCount:(_Bool)arg1;
- (_Bool)saveHKSourceWhiteCache;
- (_Bool)loadHKSourceWhiteCache;
- (id)pathForHKSourceWhiteCache;
- (void)updateSampleSourceList:(id)arg1;
- (id)init;

@end

