//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

__attribute__((visibility("hidden")))
@interface VerticallyAlignedLabel : UILabel
{
    int verticalAlignment_;
}

@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=verticalAlignment_;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

