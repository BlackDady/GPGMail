//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCMessage.h>

@interface MCRemoteMessage : MCMessage
{
    unsigned long long _messageSize;	// 104 = 0x68
}

@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
- (BOOL)isMessageContentLocallyAvailable;	// IMP=0x000000000008dd54
@property(nonatomic) BOOL partsHaveBeenCached;
@property(nonatomic) BOOL isPartial;
- (id)initWithSize:(unsigned long long)arg1;	// IMP=0x00000000000219f5

@end

