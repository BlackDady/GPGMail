//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPMailboxCommand.h>

@class NSDictionary;

@interface IMAPStatusCommand : IMAPMailboxCommand
{
    unsigned long long _dataItems;	// 24 = 0x18
    NSDictionary *_statusEntries;	// 32 = 0x20
}

@property(copy) NSDictionary *statusEntries; // @synthesize statusEntries=_statusEntries;
@property unsigned long long dataItems; // @synthesize dataItems=_dataItems;
- (void).cxx_destruct;	// IMP=0x0000000000036fba
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x0000000000036f56
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x0000000000036e84
- (id)_newStringForDataItems;	// IMP=0x0000000000036ce3
- (void)addDataItem:(unsigned long long)arg1;	// IMP=0x0000000000036ca3
- (id)activityString;	// IMP=0x0000000000036c37
- (id)commandTypeString;	// IMP=0x0000000000036c18
- (id)initWithMailboxName:(id)arg1;	// IMP=0x0000000000036b49
- (id)initWithMailboxName:(id)arg1 dataItems:(unsigned long long)arg2;	// IMP=0x0000000000036a1f

@end

