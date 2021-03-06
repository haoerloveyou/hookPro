//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBRateSheet;

@interface TBRateSheetButton : UIView
{
    TBRateSheet *_activityView;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak TBRateSheet *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)setupWithText:(id)arg1;
- (id)initWithText:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

