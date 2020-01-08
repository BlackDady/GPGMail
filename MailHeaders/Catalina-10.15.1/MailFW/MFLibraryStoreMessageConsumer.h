//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/MFMessageConsumer-Protocol.h>

@class MCInvocationQueue, MFLibraryStore, NSString;

@interface MFLibraryStoreMessageConsumer : NSObject <MFMessageConsumer>
{
    BOOL _shouldCancel;	// 8 = 0x8
    long long _collectorID;	// 16 = 0x10
    MFLibraryStore *_libraryStore;	// 24 = 0x18
    MCInvocationQueue *_callbackQueue;	// 32 = 0x20
}

@property(readonly, nonatomic) MCInvocationQueue *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) __weak MFLibraryStore *libraryStore; // @synthesize libraryStore=_libraryStore;
@property BOOL shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property long long collectorID; // @synthesize collectorID=_collectorID;
// - (void).cxx_destruct;	// IMP=0x000000000012452f
- (void)finishedSendingMessages;	// IMP=0x00000000001243f4
- (void)searchPhaseComplete;	// IMP=0x00000000001243a8
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromUpdate:(BOOL)arg3;	// IMP=0x0000000000124288
- (void)clearLibraryStoreWeakReference;	// IMP=0x0000000000124274
- (id)init;	// IMP=0x00000000001241a5
- (id)initWithLibraryStore:(id)arg1;	// IMP=0x0000000000124112

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

