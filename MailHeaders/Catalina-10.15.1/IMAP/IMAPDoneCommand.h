//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@interface IMAPDoneCommand : IMAPSingleCommand
{
}

- (long long)maxAllowedConnectionState;	// IMP=0x0000000000033244
- (long long)minRequiredConnectionState;	// IMP=0x0000000000033239
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x000000000003321e
- (void)setSequenceNumber:(unsigned long long)arg1;	// IMP=0x000000000003319a
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x0000000000033118
- (id)activityString;	// IMP=0x00000000000330ac
- (id)commandTypeString;	// IMP=0x000000000003308d

@end

