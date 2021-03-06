//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, JDIcon, JDImageView, JDShopPriceLabel, JDShopSamPriceView, NSDictionary, UILabel;

@interface JDActivityForSearchUnitView : UIView
{
    JDImageView *m_imageView;
    UILabel *m_titleLabel;
    JDShopPriceLabel *m_priceLabel;
    JDShopSamPriceView *m_samPriceLabel;
    JDIcon *m_tagIcon;
    JDIcon *m_promotionIcon;
    id <JDActivityForSearchUnitViewDelegate> _shopDelegate;
    NSDictionary *_dictionary;
    CALayer *_stockLayer;
}

@property(retain, nonatomic) CALayer *stockLayer; // @synthesize stockLayer=_stockLayer;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(nonatomic) id <JDActivityForSearchUnitViewDelegate> shopDelegate; // @synthesize shopDelegate=_shopDelegate;
- (void).cxx_destruct;
- (void)turnToDetailViewController;
- (void)handleStock:(_Bool)arg1 withUnderCarriage:(_Bool)arg2;
- (void)loadSearchViewWithDic:(id)arg1;
- (void)updatePromotionWithDic:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

