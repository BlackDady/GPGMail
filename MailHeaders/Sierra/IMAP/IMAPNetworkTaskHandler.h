//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTaskHandler.h"

#import "IMAPConnectionResponseDelegate.h"

@class IMAPConnection, IMAPMailboxSyncState, IMAPTask, IMAPTaskManager, NSString;

@interface IMAPNetworkTaskHandler : MCTaskHandler <IMAPConnectionResponseDelegate>
{
    id _connectionLock;	// 8 = 0x8
    IMAPConnection *_connection;	// 16 = 0x10
    id _selectedMailboxLock;	// 24 = 0x18
    NSString *_currentMailboxName;	// 32 = 0x20
    BOOL _isSelected;	// 40 = 0x28
    BOOL _needToCompactOnClose;	// 41 = 0x29
    IMAPTask *_lastTaskSource;	// 48 = 0x30
    IMAPMailboxSyncState *_syncState;	// 56 = 0x38
    IMAPTaskManager *_taskManager;	// 64 = 0x40
}

@property BOOL needToCompactOnClose; // @synthesize needToCompactOnClose=_needToCompactOnClose;
@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(retain, nonatomic) IMAPMailboxSyncState *syncState; // @synthesize syncState=_syncState;
@property(nonatomic) __weak IMAPTask *lastTaskSource; // @synthesize lastTaskSource=_lastTaskSource;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;	// IMP=0x0000000000047e44
- (void)connection:(id)arg1 receivedUnhandledUntaggedResponse:(id)arg2 forMailbox:(id)arg3 forCommand:(id)arg4;	// IMP=0x00000000000474a6
- (void)connection:(id)arg1 receivedFetchResponse:(id)arg2 forMailbox:(id)arg3;	// IMP=0x00000000000473e5
- (void)connection:(id)arg1 receivedExists:(unsigned long long)arg2 forMailbox:(id)arg3;	// IMP=0x0000000000047399
- (BOOL)connection:(id)arg1 shouldProcessUnsolicitedResponse:(id)arg2;	// IMP=0x0000000000047298
@property(nonatomic) BOOL trackSyncState;
- (void)selectedMailboxChangedToMailbox:(id)arg1 fromMailbox:(id)arg2;	// IMP=0x0000000000046fdc
- (BOOL)isSelectedOnMailbox:(id)arg1;	// IMP=0x0000000000046f0e
@property(readonly, copy) NSString *currentMailboxName;
- (void)_finishIdling;	// IMP=0x0000000000046e5c
@property(readonly) BOOL canStartIdle;
@property(readonly) BOOL isIdle;
- (void)_closeConnectionAndCompact:(BOOL)arg1 allowNetworking:(BOOL)arg2;	// IMP=0x0000000000046c18
- (id)serverInterfaceForMailbox:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004693b
- (id)newCleanUpOperation;	// IMP=0x000000000004684e
- (void)setOperation:(id)arg1;	// IMP=0x0000000000046632
- (id)operation;	// IMP=0x0000000000046605
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000046472
- (long long)priority;	// IMP=0x0000000000046356
@property(retain) IMAPConnection *connection;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000460e6
- (id)init;	// IMP=0x0000000000046017
- (id)initWithConnection:(id)arg1 taskManager:(id)arg2;	// IMP=0x0000000000045ec4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
