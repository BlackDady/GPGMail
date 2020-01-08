//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPTask.h>

@protocol IMAPMessageDataSource;

@interface IMAPPersistenceTask : IMAPTask
{
    id <IMAPMessageDataSource> _dataSource;	// 8 = 0x8
}

@property(readonly, nonatomic) id <IMAPMessageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x000000000004d5a3
- (long long)networkPriority;	// IMP=0x000000000004d58a
- (id)nextNetworkOperation;	// IMP=0x000000000004d582
- (id)description;	// IMP=0x000000000004d4bf
- (id)mailboxNameWithoutPII;	// IMP=0x000000000004d445
- (id)initWithMailboxName:(id)arg1;	// IMP=0x000000000004d376
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000004d2dd

@end

