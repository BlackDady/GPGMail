//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailbox;

@interface MFCachedMailboxInfo : NSObject
{
    int _mailboxType;	// 8 = 0x8
    long long _mailboxID;	// 16 = 0x10
    MFMailbox *_mailbox;	// 24 = 0x18
}

@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
@property(nonatomic) long long mailboxID; // @synthesize mailboxID=_mailboxID;
- (void)updateWithMessage:(id)arg1;	// IMP=0x000000000019ec91
- (void)dealloc;	// IMP=0x000000000019ec56
- (id)init;	// IMP=0x000000000019ec13

@end

