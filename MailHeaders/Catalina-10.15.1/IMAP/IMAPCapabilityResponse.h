//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSArray;

@interface IMAPCapabilityResponse : IMAPResponse
{
    NSArray *_capabilities;	// 8 = 0x8
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;	// IMP=0x000000000000785f
@property(copy, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
- (void).cxx_destruct;	// IMP=0x000000000000832c
- (id)description;	// IMP=0x0000000000021f52

@end

