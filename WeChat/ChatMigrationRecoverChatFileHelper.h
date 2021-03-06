//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSRecursiveLock;

@interface ChatMigrationRecoverChatFileHelper : NSObject
{
    _Bool m_bRecovering;
    NSOperationQueue *m_operationQueue;
    NSRecursiveLock *m_oLock;
    NSMutableArray *m_arrDumpInfo;
    NSMutableDictionary *m_dicMediaIDPath;
    NSMutableSet *m_setChatName;
    NSMutableDictionary *m_dicReportInfo;
    unsigned long long m_messageItemCount;
    unsigned long long m_messageNoSvrIdCount;
    unsigned long long m_messageNotSupportCount;
    unsigned long long m_bakMessageItemNilCount;
    unsigned long long m_bakMessageWrapNilCount;
    id <ChatMigrationRecoverChatFileHelperDelegate> m_delegate;
}

+ (id)getRecoverDumpFilePath:(id)arg1;
+ (id)getRecoverMediaFilePath:(id)arg1;
@property(nonatomic) __weak id <ChatMigrationRecoverChatFileHelperDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)stopRecoverMessage;
- (unsigned int)internalRecoverMessage:(id)arg1;
- (void)startRecoverThread:(id)arg1;
- (void)startRecoverMessage:(id)arg1;
- (void)reImportSessionData;
- (void)hasAnotherMsgForChatName:(id)arg1;
- (unsigned int)addMsgAndFormMediaDictionary:(id)arg1;
- (unsigned int)addContactListChat;
- (unsigned int)renameMediaFiles;
- (id)messageWrapFromBakChatMsgItem:(id)arg1;
- (void)convertStatusVideo:(id)arg1 andBakchatMsgItem:(id)arg2;
- (_Bool)handleBufferForBakChatMsgItem:(id)arg1 messageWrap:(id)arg2;
- (void)clearDumpInfo;
- (id)getDicOfMediaIDPath;
- (void)safeSetObjectForMediaPathDic:(id)arg1 forKey:(id)arg2;
- (id)onClearVoiceHeadData:(id)arg1;
- (id)pathForMessageWrap:(id)arg1 forBakChatMediaType:(unsigned int)arg2 withMediaID:(id)arg3;
- (id)getMediaHeadByMessageWrap:(id)arg1;
- (id)getMediaIDByMessageWrap:(id)arg1;
- (id)getPackagePathNameForMediaID:(id)arg1;
- (void)clearAllOldPackageIfNotStarted;
- (void)clearAllOldPackage:(_Bool)arg1;
- (_Bool)isBakChatName:(id)arg1;
- (void)initCacheMediaDataPath;
- (void)dealloc;
- (id)init;

@end

