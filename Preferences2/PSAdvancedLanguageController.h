//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListItemsController.h>

@class PSSpecifier;

@interface PSAdvancedLanguageController : PSListItemsController
{
    PSSpecifier *_checkedSpecifier;
}

- (void)setLocaleLanguage:(id)arg1 specifier:(id)arg2;
- (void)updateChecked:(id)arg1;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end
