//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface FavTagTextField : UITextField
{
    UIResponder *_overrideNextResponder;
    _Bool _isMarking;
}

@property(nonatomic) _Bool isMarking; // @synthesize isMarking=_isMarking;
@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;

@end
