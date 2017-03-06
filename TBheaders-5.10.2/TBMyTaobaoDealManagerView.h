//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBMyTaobaoDealInfoModel, TBMyTaobaoItemView, TBMyTaobaoSimpleInfoModel;
@protocol TBMyTaobaoDealManagerViewDelegate;

@interface TBMyTaobaoDealManagerView : UIView
{
    UIView *_backgroundView;	// 8 = 0x8
    TBMyTaobaoItemView *_dealMenuContainer;	// 16 = 0x10
    id <TBMyTaobaoDealManagerViewDelegate> _delegate;	// 24 = 0x18
    TBMyTaobaoSimpleInfoModel *_data;	// 32 = 0x20
    TBMyTaobaoDealInfoModel *_dealData;	// 40 = 0x28
}

+ (id)dealManagerViewWithDelegate:(id)arg1;
@property(retain, nonatomic) TBMyTaobaoDealInfoModel *dealData; // @synthesize dealData=_dealData;
@property(retain, nonatomic) TBMyTaobaoSimpleInfoModel *data; // @synthesize data=_data;
@property(nonatomic) __weak id <TBMyTaobaoDealManagerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBMyTaobaoItemView *dealMenuContainer; // @synthesize dealMenuContainer=_dealMenuContainer;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)refundItemClicked:(id)arg1;
- (void)evaluateItemClicked:(id)arg1;
- (void)deliverItemClicked:(id)arg1;
- (void)sendItemClicked:(id)arg1;
- (void)payItemClicked:(id)arg1;
- (void)refreshInfo;
- (void)configViews;

@end
