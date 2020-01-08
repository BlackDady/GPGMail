//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSMutableAttributedString, NSMutableString, NSString;

@interface _FormatFlowedWriter : NSObject
{
    NSMutableString *_outputString;	// 8 = 0x8
    NSMutableString *_quotedString;	// 16 = 0x10
    NSMutableString *_lineString;	// 24 = 0x18
    NSMutableAttributedString *_attributedString;	// 32 = 0x20
    BOOL _addedTrailingSpaces;	// 40 = 0x28
    NSAttributedString *_inputAttributedString;	// 48 = 0x30
    unsigned long long _encoding;	// 56 = 0x38
    NSString *_inputString;	// 64 = 0x40
    unsigned long long _quoteLevel;	// 72 = 0x48
    struct _NSRange _paragraphRange;	// 80 = 0x50
}

@property(nonatomic) struct _NSRange paragraphRange; // @synthesize paragraphRange=_paragraphRange;
@property(nonatomic) unsigned long long quoteLevel; // @synthesize quoteLevel=_quoteLevel;
@property(copy, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
@property(readonly, nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(readonly, copy, nonatomic) NSAttributedString *inputAttributedString; // @synthesize inputAttributedString=_inputAttributedString;
@property(nonatomic) BOOL addedTrailingSpaces; // @synthesize addedTrailingSpaces=_addedTrailingSpaces;
// - (void).cxx_destruct;	// IMP=0x00000000000339ed
@property(readonly, copy, nonatomic) NSString *quotedString;
@property(readonly, copy, nonatomic) NSString *outputString;
- (void)_outputQuotedParagraph;	// IMP=0x000000000005037f
- (unsigned long long)_findLineBreakInRange:(struct _NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(BOOL)arg3;	// IMP=0x000000000004ff47
- (id)init;	// IMP=0x000000000004fe78
- (id)initWithAttributedString:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x000000000003362a

@end

