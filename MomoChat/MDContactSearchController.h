//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDFullSubSearchBaseController.h"

@class MDNumberSearchHelper, NSMutableArray;

@interface MDContactSearchController : MDFullSubSearchBaseController
{
    _Bool _isShowNoResultView;
    NSMutableArray *_resultArray;
    MDNumberSearchHelper *_numberSearchHelper;
}

@property(nonatomic) _Bool isShowNoResultView; // @synthesize isShowNoResultView=_isShowNoResultView;
@property(retain, nonatomic) MDNumberSearchHelper *numberSearchHelper; // @synthesize numberSearchHelper=_numberSearchHelper;
@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sendSearch:(id)arg1;
- (void)dealNoResultView;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)numberSearchItemWithSearchText:(id)arg1;
- (void)configDataWithSearchText:(id)arg1;
- (void)viewDidLoad;
- (id)initWithSearchText:(id)arg1;

@end
