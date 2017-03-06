//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol TBIBaseBarViewDelegate;

@interface TBIBaseBarView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIButton *_leftButton;	// 16 = 0x10
    UIButton *_rightButton;	// 24 = 0x18
    id <TBIBaseBarViewDelegate> _delegate;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <TBIBaseBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setRightButtonHidden:(_Bool)arg1;
- (void)setRightButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1 AnimateIsPush:(_Bool)arg2;
- (void)popToTitle:(id)arg1;
- (void)pushToTitle:(id)arg1;
- (void)titleAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)rightAction:(id)arg1;
- (float)buttonOriginY;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
