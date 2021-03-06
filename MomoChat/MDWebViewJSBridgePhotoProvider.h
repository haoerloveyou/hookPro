//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDPhotoPickerAndFilterHandlerDelegate.h"

@class MDPhotoPickerAndFilterHandler, NSDictionary, NSString, WebViewJavascriptBridge;

@interface MDWebViewJSBridgePhotoProvider : NSObject <MDPhotoPickerAndFilterHandlerDelegate>
{
    WebViewJavascriptBridge *_currentBridge;
    MDPhotoPickerAndFilterHandler *_customPhotoPicker;
    NSString *_currentCallBackID;
    NSString *_currentCallBackType;
    NSDictionary *_imagesParaDic;
}

@property(retain, nonatomic) NSDictionary *imagesParaDic; // @synthesize imagesParaDic=_imagesParaDic;
@property(copy, nonatomic) NSString *currentCallBackType; // @synthesize currentCallBackType=_currentCallBackType;
@property(copy, nonatomic) NSString *currentCallBackID; // @synthesize currentCallBackID=_currentCallBackID;
@property(retain, nonatomic) MDPhotoPickerAndFilterHandler *customPhotoPicker; // @synthesize customPhotoPicker=_customPhotoPicker;
@property(retain, nonatomic) WebViewJavascriptBridge *currentBridge; // @synthesize currentBridge=_currentBridge;
- (void)userDidSelectImageAssets:(id)arg1;
- (void)imagePickerControllerDidCancel;
- (void)handleFilteredImage:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showPhotoSourceActionSheet;
- (void)handlePhotoPickingWithType:(long long)arg1;
- (void)getPhotoFromCamera;
- (void)getPhotoFromAlbum;
- (void)dealloc;
- (id)initWithWebViewJavascriptBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

