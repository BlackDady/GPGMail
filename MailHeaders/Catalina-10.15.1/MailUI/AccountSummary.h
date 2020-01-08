//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTextField, NSView;

@interface AccountSummary : NSObject
{
    NSView *_view;	// 8 = 0x8
    NSTextField *_accountDescription;	// 16 = 0x10
    NSTextField *_fullname;	// 24 = 0x18
    NSTextField *_emailAddress;	// 32 = 0x20
    NSTextField *_userName;	// 40 = 0x28
    NSTextField *_incomingServer;	// 48 = 0x30
    NSTextField *_incomingServerSSLMode;	// 56 = 0x38
    NSTextField *_outgoingServer;	// 64 = 0x40
    NSTextField *_outgoingServerSSLMode;	// 72 = 0x48
}

@property(nonatomic) __weak NSTextField *outgoingServerSSLMode; // @synthesize outgoingServerSSLMode=_outgoingServerSSLMode;
@property(nonatomic) __weak NSTextField *outgoingServer; // @synthesize outgoingServer=_outgoingServer;
@property(nonatomic) __weak NSTextField *incomingServerSSLMode; // @synthesize incomingServerSSLMode=_incomingServerSSLMode;
@property(nonatomic) __weak NSTextField *incomingServer; // @synthesize incomingServer=_incomingServer;
@property(nonatomic) __weak NSTextField *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak NSTextField *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(nonatomic) __weak NSTextField *fullname; // @synthesize fullname=_fullname;
@property(nonatomic) __weak NSTextField *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
// - (void).cxx_destruct;	// IMP=0x00000001000a6cfd
- (void)setupUIWithAccount:(id)arg1;	// IMP=0x00000001000a6b96
- (void)setupUIWithAccount:(id)arg1 deliveryAccount:(id)arg2;	// IMP=0x00000001000a6450
- (id)init;	// IMP=0x00000001000a63a5

@end

