//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TBShareQrcodePopView : UIView
{
    CDUnknownBlockType _cancel;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIButton *_closebutton;	// 24 = 0x18
    UIView *_closeBlank;	// 32 = 0x20
}

@property(retain, nonatomic) UIView *closeBlank; // @synthesize closeBlank=_closeBlank;
@property(retain, nonatomic) UIButton *closebutton; // @synthesize closebutton=_closebutton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
- (void).cxx_destruct;
- (id)closeBlankD:(int)arg1 toModel:(id)arg2;
- (id)closebuttonD:(int)arg1 toModel:(id)arg2;
- (void)setupViewWithQrcode:(int)arg1 toModel:(id)arg2;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (id)initWithQrcode:(int)arg1 toModel:(id)arg2;

@end

