//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDSearchTableViewController.h"

#import "MDFavoriteApiOperationDelegate.h"
#import "MDSearchControllerDelegate.h"

@class MDFavoriteApiOperation, MDFavoriteItem, MDReturnButtonItem, NSMutableArray, NSString;

@interface MDAddFavoriteViewController : MDSearchTableViewController <MDSearchControllerDelegate, MDFavoriteApiOperationDelegate>
{
    MDFavoriteApiOperation *_apiOperation;
    NSMutableArray *_itemList;
    MDFavoriteItem *_selectedItem;
    long long _selectedIndex;
    MDReturnButtonItem *_returnItem;
}

@property(retain, nonatomic) MDReturnButtonItem *returnItem; // @synthesize returnItem=_returnItem;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) MDFavoriteItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) MDFavoriteApiOperation *apiOperation; // @synthesize apiOperation=_apiOperation;
- (void)returnItemClicked;
- (void)setupNavBar;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
