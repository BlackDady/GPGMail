//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class NSBox;

@interface TransparentImageView : NSImageView
{
    NSBox *_backgroundView;	// 112 = 0x70
}

@property(retain, nonatomic) NSBox *backgroundView; // @synthesize backgroundView=_backgroundView;
// - (void).cxx_destruct;	// IMP=0x00000001002abfe6
- (void)awakeFromNib;	// IMP=0x00000001002abded

@end

