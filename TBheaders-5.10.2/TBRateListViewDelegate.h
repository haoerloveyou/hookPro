//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateDataViewDelegate.h"

@interface TBRateListViewDelegate : TBRateDataViewDelegate
{
    id _rateDelegate;	// 8 = 0x8
}

@property(nonatomic) __weak id rateDelegate; // @synthesize rateDelegate=_rateDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;

@end

