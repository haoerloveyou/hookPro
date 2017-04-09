//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VideoMessageViewModel : CommonMessageViewModel
{
    NSString *m_videoPath;
    struct CGSize m_thumbImageSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) struct CGSize thumbImageSize; // @synthesize thumbImageSize=m_thumbImageSize;
@property(readonly, nonatomic) NSString *videoPath; // @synthesize videoPath=m_videoPath;
- (void).cxx_destruct;
- (void)onMessageDownloadVideoFail;
- (void)onMessageDownloadVideoExpired;
- (void)onMessageDownloadThumbImageOK;
@property(readonly, nonatomic) _Bool canPlayVideo;
@property(readonly, nonatomic) UIImage *thumbImage;
@property(readonly, nonatomic) NSString *videoTime;
@property(readonly, nonatomic) NSString *videoSize;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

@end
