//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFSyncedFile.h>

@interface MFSyncedSignaturesFile : MFSyncedFile
{
}

+ (id)syncedSignaturesFile;	// IMP=0x000000000023139e
- (id)upgradeLegacyCloudData:(id)arg1 fromLegacyVersion:(long long)arg2;	// IMP=0x000000000023182f
- (id)resolveConflictVersion:(id)arg1 againstCurrentVersion:(id)arg2;	// IMP=0x000000000023142c
- (void)writeSignatures:(id)arg1;	// IMP=0x0000000000231418
- (id)readSignatures;	// IMP=0x0000000000231404

@end

