//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TBIMMobileContactRestrictedView : UIView
{
    UIButton *_settingButton;	// 8 = 0x8
    CDUnknownBlockType _tapSettingButtonBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType tapSettingButtonBlock; // @synthesize tapSettingButtonBlock=_tapSettingButtonBlock;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
- (void).cxx_destruct;
- (void)tapSettingButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentOffsetY:(long long)arg2 tapSettingButtonBlock:(CDUnknownBlockType)arg3;

@end
