//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "StackElementDelegate-Protocol.h"

@class CALayer, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol StackDataSource, StackDelegate;

@interface StackController : NSObject <StackElementDelegate>
{
    NSMutableArray *_stackedItems;	// 8 = 0x8
    NSMutableSet *_stackedItemsSet;	// 16 = 0x10
    NSMutableArray *_orderedItems;	// 24 = 0x18
    NSMutableSet *_orderedItemsSet;	// 32 = 0x20
    NSMutableDictionary *_stackElementsByItem;	// 40 = 0x28
    NSMutableDictionary *_loadRequestDatesByItem;	// 48 = 0x30
    BOOL _isAnimating;	// 56 = 0x38
    BOOL _animateStateTransitions;	// 57 = 0x39
    BOOL _updateNeeded;	// 58 = 0x3a
    BOOL _loadingData;	// 59 = 0x3b
    BOOL _waitingForTransitionToStackState;	// 60 = 0x3c
    BOOL _isTerminating;	// 61 = 0x3d
    BOOL _isSuspended;	// 62 = 0x3e
    BOOL _preventStackBeforeOffscreen;	// 63 = 0x3f
    id <StackDataSource> _dataSource;	// 64 = 0x40
    id <StackDelegate> _delegate;	// 72 = 0x48
    NSArray *_itemsToDisplay;	// 80 = 0x50
    CALayer *_stackContainerLayer;	// 88 = 0x58
    double _lastDisplayedItemsUpdateRequest;	// 96 = 0x60
    double _lastTransitionToStackState;	// 104 = 0x68
    unsigned long long _transactionCount;	// 112 = 0x70
    struct CGSize _stackCenterOffset;	// 120 = 0x78
}

@property(nonatomic) BOOL preventStackBeforeOffscreen; // @synthesize preventStackBeforeOffscreen=_preventStackBeforeOffscreen;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(nonatomic) BOOL isTerminating; // @synthesize isTerminating=_isTerminating;
@property(nonatomic) BOOL waitingForTransitionToStackState; // @synthesize waitingForTransitionToStackState=_waitingForTransitionToStackState;
@property(nonatomic) BOOL loadingData; // @synthesize loadingData=_loadingData;
@property(nonatomic) BOOL updateNeeded; // @synthesize updateNeeded=_updateNeeded;
@property(nonatomic) unsigned long long transactionCount; // @synthesize transactionCount=_transactionCount;
@property(nonatomic) double lastTransitionToStackState; // @synthesize lastTransitionToStackState=_lastTransitionToStackState;
@property(nonatomic) double lastDisplayedItemsUpdateRequest; // @synthesize lastDisplayedItemsUpdateRequest=_lastDisplayedItemsUpdateRequest;
@property(nonatomic) struct CGSize stackCenterOffset; // @synthesize stackCenterOffset=_stackCenterOffset;
@property(retain, nonatomic) CALayer *stackContainerLayer; // @synthesize stackContainerLayer=_stackContainerLayer;
@property(copy, nonatomic) NSArray *itemsToDisplay; // @synthesize itemsToDisplay=_itemsToDisplay;
@property(nonatomic) BOOL animateStateTransitions; // @synthesize animateStateTransitions=_animateStateTransitions;
@property(nonatomic) __weak id <StackDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <StackDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;	// IMP=0x00000001002910d1
- (void)stackElement:(id)arg1 targetStateDidChangeFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x0000000100290e65
- (void)stackElement:(id)arg1 currentStateDidChangeFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x0000000100290ad3
- (void)stackElement:(id)arg1 willRemoveLayer:(id)arg2;	// IMP=0x00000001002908ef
- (id)layerForStackElement:(id)arg1;	// IMP=0x0000000100290784
@property(readonly, nonatomic) BOOL stackIsTerminating;
- (void)cancelPendingActions;	// IMP=0x0000000100290756
- (void)updateIsAnimating;	// IMP=0x00000001002905cc
@property(nonatomic) BOOL isAnimating;
- (BOOL)isAnyStackElementBeingStacked;	// IMP=0x000000010029037d
- (id)stackElementToReshowUnderneathStackElement:(id)arg1;	// IMP=0x0000000100290161
- (id)orderedStackedElementsWithOrientation:(long long)arg1;	// IMP=0x000000010028ff17
- (void)stackDataSourceDidLoadItemData:(id)arg1;	// IMP=0x000000010028fe05
- (void)updateOrientationForStackElement:(id)arg1;	// IMP=0x000000010028fa24
- (void)updateStackElement:(id)arg1;	// IMP=0x000000010028f4e7
- (void)updateStackElements;	// IMP=0x000000010028f0ce
- (void)setNeedsToUpdateStackElements;	// IMP=0x000000010028f082
- (void)endTransaction;	// IMP=0x000000010028eff4
- (void)beginTransaction;	// IMP=0x000000010028efc2
- (BOOL)isDataAvailableForStackElement:(id)arg1 loadIfNeeded:(BOOL)arg2;	// IMP=0x000000010028edb1
- (void)removeStackElement:(id)arg1;	// IMP=0x000000010028ec84
- (id)stackElementForItem:(id)arg1 createIfNeeded:(BOOL)arg2 withInitialState:(long long)arg3;	// IMP=0x000000010028eb9e
- (id)stackElementForItem:(id)arg1 createIfNeeded:(BOOL)arg2;	// IMP=0x000000010028eb86
- (id)keyForItem:(id)arg1;	// IMP=0x000000010028eb2f
- (void)removeStackedLayers:(BOOL)arg1;	// IMP=0x000000010028e8e2
- (void)updateDisplayedItems;	// IMP=0x000000010028dd0e
- (void)addStackedItem:(id)arg1;	// IMP=0x000000010028dbb3
- (void)setNeedsToUpdateDisplayedItems:(BOOL)arg1 immediately:(BOOL)arg2;	// IMP=0x000000010028da47
- (void)displayStackedLayersForItems:(id)arg1 animated:(BOOL)arg2;	// IMP=0x000000010028d8a7
- (void)dealloc;	// IMP=0x000000010028d6b6
- (id)init;	// IMP=0x000000010028d534

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

