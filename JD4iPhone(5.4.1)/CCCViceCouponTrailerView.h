//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BJChoiceCouponModel, CCCWeakTimer, CCCouponTrailerView, UIButton, UIColor, UILabel;

@interface CCCViceCouponTrailerView : UIView
{
    long long currentTime;
    CDUnknownBlockType _action;
    UIColor *_progressBackgroundColor;
    CCCouponTrailerView *_trailerView;
    UIButton *_notifyReceiveButton;
    BJChoiceCouponModel *_couponModel;
    CCCWeakTimer *_timer;
    UIView *_clickView;
    UILabel *_alertNum;
}

@property(retain, nonatomic) UILabel *alertNum; // @synthesize alertNum=_alertNum;
@property(retain, nonatomic) UIView *clickView; // @synthesize clickView=_clickView;
@property(retain, nonatomic) CCCWeakTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) BJChoiceCouponModel *couponModel; // @synthesize couponModel=_couponModel;
@property(retain, nonatomic) UIButton *notifyReceiveButton; // @synthesize notifyReceiveButton=_notifyReceiveButton;
@property(retain, nonatomic) CCCouponTrailerView *trailerView; // @synthesize trailerView=_trailerView;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)unArchvierDataForkey:(id)arg1;
- (void)archvierData:(id)arg1 forkey:(id)arg2;
- (void)addAlertPeopleNum;
- (void)stopTimer;
- (void)notifyCouponAction;
- (void)changeNotificationState:(_Bool)arg1;
- (void)startCountDown;
- (void)refreshTimerView;
- (void)updateViewWithItem:(id)arg1 progressColor:(id)arg2 BackgroundImage:(id)arg3;
- (void)coundDown;
- (void)setUpSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
