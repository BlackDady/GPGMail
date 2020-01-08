//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDSearchableIndexPersistence.h>

#import <MailFW/EFLoggable-Protocol.h>

@class NSString;

@interface MFSearchableIndexPersistence_macOS : EDSearchableIndexPersistence <EFLoggable>
{
}

+ (id)log;	// IMP=0x00000000001fcadf
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1;	// IMP=0x00000000001fd60c
- (id)_verificationDataFromMessage:(id)arg1 messageIDTransactionIDDictionary:(id)arg2;	// IMP=0x00000000001fd42b
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 result:(id)arg4;	// IMP=0x00000000001fcda7
- (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;	// IMP=0x00000000001fcc93
- (id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3;	// IMP=0x00000000001fcbc7
- (id)messagesRowIDWhereSubClause;	// IMP=0x00000000001fcba8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

