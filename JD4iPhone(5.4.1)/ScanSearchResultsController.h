//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDStoreNetwork, NSError, ScanSearchResults, UIImage;

@interface ScanSearchResultsController : NSObject
{
    id <ScanSearchResultsControllerDelegate> _delegate;
    ScanSearchResults *_results;
    NSError *_error;
    JDStoreNetwork *_network;
    UIImage *_image;
    struct CGRect _selectedBounds;
}

@property(nonatomic) struct CGRect selectedBounds; // @synthesize selectedBounds=_selectedBounds;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) ScanSearchResults *results; // @synthesize results=_results;
@property(nonatomic) __weak id <ScanSearchResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchResultsWithMainCategoryId:(id)arg1 subCategoryId:(id)arg2 hotCategoryId:(id)arg3 sexId:(id)arg4 isFirstQuery:(id)arg5 triggerQueryType:(id)arg6 isUserRectangle:(id)arg7;
- (void)modifySelectedBounds:(struct CGRect)arg1;
- (void)selectSexId:(id)arg1;
- (void)selectHotCategoryId:(id)arg1;
- (void)selectSubCategoryId:(id)arg1;
- (void)selectMainCategoryId:(id)arg1;
- (void)fetch;
@property(readonly, nonatomic) UIImage *imageForSelectedBounds;
- (void)dealloc;
- (id)initWithImage:(id)arg1 selectedBounds:(struct CGRect)arg2;

@end
