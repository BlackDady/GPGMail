//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCThrowingInvocationOperation.h>

@interface MCMainThreadInvocationOperation : MCThrowingInvocationOperation
{
    BOOL _isExecuting;	// 8 = 0x8
    BOOL _isFinished;	// 9 = 0x9
}

+ (BOOL)automaticallyNotifiesObserversOfIsFinished;	// IMP=0x0000000000055b05
+ (BOOL)automaticallyNotifiesObserversOfIsExecuting;	// IMP=0x0000000000055afd
- (void)_finish;	// IMP=0x000000000002bff6
- (BOOL)isFinished;	// IMP=0x000000000002bd89
- (void)_setIsExecuting:(BOOL)arg1;	// IMP=0x000000000002bdd2
- (BOOL)isExecuting;	// IMP=0x000000000002bd40
- (BOOL)isConcurrent;	// IMP=0x0000000000055af2
- (void)main;	// IMP=0x000000000002bf8a
- (void)start;	// IMP=0x000000000002ba58

@end

