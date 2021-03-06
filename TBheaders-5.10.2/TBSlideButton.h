//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@protocol TBButtonSlideDelegate;

@interface TBSlideButton : UIButton
{
    struct CGPoint _touchBeginPoint;	// 8 = 0x8
    id <TBButtonSlideDelegate> _slideDelegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <TBButtonSlideDelegate> slideDelegate; // @synthesize slideDelegate=_slideDelegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

