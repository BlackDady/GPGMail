//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFMutedMessageAction.h>

#import <MailFW/EFLoggable-Protocol.h>

@class NSString;

@interface MFMutedMessageActionArchiveOrDelete : MFMutedMessageAction <EFLoggable>
{
}

+ (id)log;	// IMP=0x00000000001b5849
- (BOOL)_shouldArchive;	// IMP=0x00000000001b5f1c
- (id)toMailboxForAccount:(id)arg1;	// IMP=0x00000000001b5e85
- (void)performActionWithChangeManager:(id)arg1;	// IMP=0x00000000001b5b16
- (void)performActionWithStore:(id)arg1;	// IMP=0x00000000001b5912

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

