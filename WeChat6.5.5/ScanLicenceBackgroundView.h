//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface ScanLicenceBackgroundView : UIView
{
    struct CGRect maskRect;
    UIImage *_leftTopImage;
    UIImage *_rightTopImage;
    UIImage *_leftBottomImage;
    UIImage *_rightBottomImage;
    double _lengthWidthRatio;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andTypeRatio:(double)arg2;

@end

