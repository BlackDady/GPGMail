//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCTaskHandlerOperation.h>

@class IMAPNetworkTaskHandler, NSString;

@interface IMAPNetworkTaskOperation : MCTaskHandlerOperation
{
    NSString *_mailboxName;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (void).cxx_destruct;	// IMP=0x000000000004900a
@property(retain) IMAPNetworkTaskHandler *handler;
- (id)init;	// IMP=0x0000000000048d87
- (id)initWithMailboxName:(id)arg1;	// IMP=0x0000000000048d19

@end

