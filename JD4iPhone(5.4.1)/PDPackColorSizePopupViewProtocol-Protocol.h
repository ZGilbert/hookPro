//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDImageView, NSString, PDMiniSkuDetailModel, PackProductModel, UIButton;

@protocol PDPackColorSizePopupViewProtocol <NSObject>
- (void)confirmButtonTapped:(UIButton *)arg1 productModel:(PackProductModel *)arg2;
- (void)imageViewTapped:(JDImageView *)arg1 miniSkuDetailModel:(PDMiniSkuDetailModel *)arg2;
- (void)changeSku:(NSString *)arg1;
@end
