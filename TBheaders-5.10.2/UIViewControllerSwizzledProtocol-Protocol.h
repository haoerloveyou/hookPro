//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol UIViewControllerSwizzledProtocol <NSObject>

@optional
+ (void)viewDidLayoutSubviews:(UIViewController *)arg1;
+ (void)viewWillLayoutSubviews:(UIViewController *)arg1;
+ (void)viewDidDisappear:(_Bool)arg1 viewController:(UIViewController *)arg2;
+ (void)viewWillDisappear:(_Bool)arg1 viewController:(UIViewController *)arg2;
+ (void)viewDidAppear:(_Bool)arg1 viewController:(UIViewController *)arg2;
+ (void)viewWillAppear:(_Bool)arg1 viewController:(UIViewController *)arg2;
@end
