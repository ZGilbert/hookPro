//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString, UIScrollView;

@interface TBQGCategorySegmentedControl : UIControl <UIScrollViewDelegate>
{
    long long _lastSelectedSegmentIndex;	// 8 = 0x8
    _Bool _scrollingBySelection;	// 16 = 0x10
    long long _selectedSegmentIndex;	// 24 = 0x18
    CDUnknownBlockType _indexChangeBlock;	// 32 = 0x20
    NSArray *_items;	// 40 = 0x28
    UIScrollView *_scrollView;	// 48 = 0x30
    double _segmentWidth;	// 56 = 0x38
    NSNumber *_cId;	// 64 = 0x40
    NSMutableArray *_segmentViews;	// 72 = 0x48
}

@property(retain, nonatomic) NSMutableArray *segmentViews; // @synthesize segmentViews=_segmentViews;
@property(retain, nonatomic) NSNumber *cId; // @synthesize cId=_cId;
@property(readonly, nonatomic) double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType indexChangeBlock; // @synthesize indexChangeBlock=_indexChangeBlock;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(nonatomic, getter=isScrollingBySelection) _Bool scrollingBySelection; // @synthesize scrollingBySelection=_scrollingBySelection;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)dynamicScrollView:(double)arg1;
- (void)layoutSegments;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)insertSegmentWithTitle:(id)arg1 animated:(_Bool)arg2 titleWidth:(double)arg3 cId:(id)arg4;
- (void)setSelectedSegmentIndex:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (void)notifyForSegmentChangeToIndex:(long long)arg1;
- (void)handleSelect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
