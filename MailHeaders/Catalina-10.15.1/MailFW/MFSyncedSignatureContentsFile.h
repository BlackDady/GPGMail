//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFSyncedFile.h>

@class NSString;

@interface MFSyncedSignatureContentsFile : MFSyncedFile
{
    NSString *_uniqueID;	// 8 = 0x8
}

+ (id)syncedSignatureContentsFileWithUniqueID:(id)arg1;	// IMP=0x000000000023193a
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
// - (void).cxx_destruct;	// IMP=0x0000000000231e48
- (id)upgradeLegacyCloudData:(id)arg1 fromLegacyVersion:(long long)arg2;	// IMP=0x0000000000231cdd
- (id)resolveConflictVersion:(id)arg1 againstCurrentVersion:(id)arg2;	// IMP=0x0000000000231c30
- (void)writeSignatureContents:(id)arg1;	// IMP=0x0000000000231bd8
- (id)readSignatureContents;	// IMP=0x00000000002319d7

@end

