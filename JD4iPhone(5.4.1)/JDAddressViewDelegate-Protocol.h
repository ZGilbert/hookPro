//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDAddressView, UIButton;

@protocol JDAddressViewDelegate <NSObject>

@optional
- (void)didClickTipView;
- (void)addressView:(JDAddressView *)arg1 didClickRightButton:(UIButton *)arg2;
- (void)addressView:(JDAddressView *)arg1 didClickLeftButton:(UIButton *)arg2;
- (void)addressView:(JDAddressView *)arg1 didSelectRow:(long long)arg2 inTab:(long long)arg3;
@end
