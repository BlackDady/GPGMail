//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailbox;

@interface EMMailboxPredictionResult : NSObject
{
    MFMailbox *_predictedMailbox;	// 8 = 0x8
}

+ (id)resultWithMailbox:(id)arg1;	// IMP=0x000000000016f426
@property(retain, nonatomic) MFMailbox *predictedMailbox; // @synthesize predictedMailbox=_predictedMailbox;
// - (void).cxx_destruct;	// IMP=0x000000000016f4b4

@end

