//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCMessage, NSArray;
@protocol MCMessageDataSource;

@protocol SelectionOwner <NSObject>
@property(readonly, copy, nonatomic) NSArray *selection;
@property(readonly, nonatomic) id <MCMessageDataSource> messageStore;
@property(readonly, nonatomic) MCMessage *messageThatUserIsProbablyReading;
@property(readonly, nonatomic) MCMessage *currentDisplayedMessage;
- (void)selectMessages:(NSArray *)arg1;
- (NSArray *)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;

@optional
@property(readonly, nonatomic) BOOL isInThreadedMode;
- (void)toggleThreadedMode;
@end

