//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTMMailbox.h"

@class NSIndexSet, NSMutableArray, NSMutableIndexSet;

@interface MTMFakeMailbox : MTMMailbox
{
    NSMutableArray *_fakeMessages;	// 80 = 0x50
    NSMutableIndexSet *_fakeSelectionIndexes;	// 88 = 0x58
}

// - (void).cxx_destruct;	// IMP=0x0000000100234803
@property(readonly, copy, nonatomic) NSIndexSet *selectedMessageIndexes;
- (id)messages;	// IMP=0x00000001002347d9
- (id)initWithDictionary:(id)arg1 controller:(id)arg2;	// IMP=0x000000010023470a
- (id)init;	// IMP=0x00000001002346db
- (id)initWithMessageDescriptions:(id)arg1;	// IMP=0x00000001002344dc

@end

