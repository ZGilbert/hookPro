//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSMutableArray, NSString, UIView;

@protocol OrderOftenBuyVCTableViewDataSource <NSObject>
- (NSString *)keyOfMapingCellAndModel;

@optional
- (NSMutableArray *)dataList;
- (UIView *)footerViewAtSection:(long long)arg1;
- (UIView *)headerViewAtSection:(long long)arg1;
- (double)sectionFooterHeightAtSection:(long long)arg1;
- (double)sectionHeaderHeightAtSection:(long long)arg1;
- (long long)numberOfRows;
- (NSString *)reuseIdentifier;
- (double)cellHeightAtIndexPath:(NSIndexPath *)arg1;
@end
