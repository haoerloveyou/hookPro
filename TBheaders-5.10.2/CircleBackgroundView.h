//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface CircleBackgroundView : UIView
{
    double _r;	// 8 = 0x8
    double _dt;	// 16 = 0x10
    double _tHeight;	// 24 = 0x18
    UIColor *_c1;	// 32 = 0x20
    UIColor *_c2;	// 40 = 0x28
    _Bool _isHiddenCursor;	// 48 = 0x30
}

@property(nonatomic) _Bool isHiddenCursor; // @synthesize isHiddenCursor=_isHiddenCursor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 back1Color:(id)arg2 back2Color:(id)arg3 raidus:(double)arg4 dt:(double)arg5 arrowHeight:(double)arg6;

@end
