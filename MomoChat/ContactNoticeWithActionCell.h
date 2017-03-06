//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ContactNoticeActionBaseCell.h"

@class UIButton, UIView;

@interface ContactNoticeWithActionCell : ContactNoticeActionBaseCell
{
    UIButton *_firstBtn;
    UIButton *_secondBtn;
    SEL btnSelector;
    id btnActionTarget;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) id btnActionTarget; // @synthesize btnActionTarget;
@property(nonatomic) SEL btnSelector; // @synthesize btnSelector;
@property(retain, nonatomic) UIButton *secondBtn; // @synthesize secondBtn=_secondBtn;
@property(retain, nonatomic) UIButton *firstBtn; // @synthesize firstBtn=_firstBtn;
- (void)layoutSubviews;
- (void)resetCellWithGameNotice:(id)arg1;
- (void)resetBtnStateWithLocalAction;
- (void)resetCellWithRadarNotice:(id)arg1;
- (void)setTwoButtonsFrame;
- (void)setOnlyOneButtonFrame;
- (void)resetCellWithText:(id)arg1 remoteID:(id)arg2;
- (void)resetCellWithContactNotice:(id)arg1;
- (void)setSecondBtnBackgroundImg;
- (void)setFirstBtnBackgroundImg;
- (void)setOnlyOneBtnBackgroundImg;
- (void)resetFrameWithOffset:(double)arg1 andCellHeight:(double)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
