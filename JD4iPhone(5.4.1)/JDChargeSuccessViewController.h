//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class JDReactNativeViewController, NSString, UIBarButtonItem;

@interface JDChargeSuccessViewController : JDViewController
{
    JDReactNativeViewController *chargeSuccessViewController;
    UIBarButtonItem *_rightButtonItem;
    NSString *orderType;
    NSString *orderFrom;
}

- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)gotoTabIndex;
- (void)rightButtonAction:(id)arg1;
- (void)backButtonClicked;
- (void)viewDidLoad;

@end
