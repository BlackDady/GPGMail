//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFLibraryUpgradeStep.h>

@interface MFFixActionMessagesTableUpgradeStep : MFLibraryUpgradeStep
{
}

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2;	// IMP=0x00000000000ad359
+ (unsigned long long)targetVersion;	// IMP=0x00000000000ad34e
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;	// IMP=0x00000000000ad398

@end

