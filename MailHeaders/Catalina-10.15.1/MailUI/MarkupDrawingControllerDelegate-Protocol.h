//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MarkupDrawingController, NSError, NSURL;

@protocol MarkupDrawingControllerDelegate <NSObject>
- (void)markupDrawingController:(MarkupDrawingController *)arg1 didCancelWithError:(NSError *)arg2;
- (void)markupDrawingController:(MarkupDrawingController *)arg1 didCreateDrawingWithURL:(NSURL *)arg2;
@end

