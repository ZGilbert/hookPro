//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSPhotoZoomingBaseScrollView.h"

@class TBSNSPhotoZoomingGoodsDescView;

@interface TBSNSPhotoZoomingGoodsView : TBSNSPhotoZoomingBaseScrollView
{
    TBSNSPhotoZoomingGoodsDescView *_goodsDescView;	// 8 = 0x8
}

@property(retain, nonatomic) TBSNSPhotoZoomingGoodsDescView *goodsDescView; // @synthesize goodsDescView=_goodsDescView;
- (void).cxx_destruct;
- (void)updateDataWithModel:(id)arg1 type:(long long)arg2;
- (void)removeSubView;
- (void)showSubView;
- (void)hidSubView;
- (void)setTimeLineItem:(id)arg1;
- (void)setGoDetailURL:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
