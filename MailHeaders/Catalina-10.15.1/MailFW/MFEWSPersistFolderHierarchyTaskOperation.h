//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSPersistenceTaskOperation.h>

@class MFEWSSyncFolderHierarchyBatch;
@protocol MFEWSPersistFolderHierarchyTaskOperationDelegate;

@interface MFEWSPersistFolderHierarchyTaskOperation : MFEWSPersistenceTaskOperation
{
    id <MFEWSPersistFolderHierarchyTaskOperationDelegate> _delegate;	// 8 = 0x8
    MFEWSSyncFolderHierarchyBatch *_batch;	// 16 = 0x10
}

@property(readonly, nonatomic) MFEWSSyncFolderHierarchyBatch *batch; // @synthesize batch=_batch;
@property __weak id <MFEWSPersistFolderHierarchyTaskOperationDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x000000000009b008
- (void)main;	// IMP=0x000000000009ab92
- (id)init;	// IMP=0x000000000009aac3
- (id)initWithBatch:(id)arg1;	// IMP=0x000000000009aa55

@end

