//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFMessageCriterion.h>

@class MFMessageRule;

@interface MFMessageRuleCriterion : MFMessageCriterion
{
    MFMessageRule *_rule;	// 8 = 0x8
}

+ (id)noSentCriterion;	// IMP=0x000000000019acd4
+ (id)noTrashCriterion;	// IMP=0x000000000019ac6e
+ (id)noJunkCriterion;	// IMP=0x000000000019ac08
@property(nonatomic) __weak MFMessageRule *rule; // @synthesize rule=_rule;
// - (void).cxx_destruct;	// IMP=0x000000000019b1ee
- (id)objectSpecifier;	// IMP=0x000000000019b0ae
- (void)setCriterionIdentifier:(id)arg1;	// IMP=0x000000000019b06b
- (void)setRuleExpression:(id)arg1;	// IMP=0x000000000019af4f
- (void)setRuleQualifier:(unsigned int)arg1;	// IMP=0x000000000019adc4
- (void)setRuleType:(unsigned int)arg1;	// IMP=0x000000000019ad4c

@end

