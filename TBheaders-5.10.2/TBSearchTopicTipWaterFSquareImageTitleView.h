//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TBSearchTopicTipWaterFSquareImageTitleView : UIView
{
    UIView *_leftLineView;	// 8 = 0x8
    UIView *_rightLineView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UILabel *_showMoreLabel;	// 40 = 0x28
}

@property(retain, nonatomic) UILabel *showMoreLabel; // @synthesize showMoreLabel=_showMoreLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
- (void).cxx_destruct;
- (void)configByModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

