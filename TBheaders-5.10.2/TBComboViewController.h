//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SPNetworkRequest, TBComboItem, TBComboItemFavButton, TBModelStatusHandler, TBPriceTextView, UILabel, UIScrollView, UIView, WSPhotoBrowerView;

@interface TBComboViewController : TBViewController <UIScrollViewDelegate>
{
    UILabel *titleLabel;	// 16 = 0x10
    UILabel *countLabel;	// 24 = 0x18
    UIView *headInfoView;	// 32 = 0x20
    UILabel *nameLabel;	// 40 = 0x28
    UILabel *priceLabel;	// 48 = 0x30
    TBComboItemFavButton *favButton;	// 56 = 0x38
    UIView *footView;	// 64 = 0x40
    TBPriceTextView *totalPriceLabel;	// 72 = 0x48
    UILabel *savePriceLabel;	// 80 = 0x50
    WSPhotoBrowerView *photoBrowerView;	// 88 = 0x58
    _Bool isShowAllScreen;	// 96 = 0x60
    TBModelStatusHandler *_comboFailStatusHandler;	// 104 = 0x68
    NSString *_sellerId;	// 112 = 0x70
    TBComboItem *_currentItem;	// 120 = 0x78
    long long _currentItemNum;	// 128 = 0x80
    NSString *_currentMealId;	// 136 = 0x88
    NSMutableArray *_itemViewArray;	// 144 = 0x90
    UIScrollView *_itemScrollView;	// 152 = 0x98
    NSString *_currentItemId;	// 160 = 0xa0
    long long _currentMealIndex;	// 168 = 0xa8
    NSString *_mealType;	// 176 = 0xb0
    SPNetworkRequest *_netWorkRequest;	// 184 = 0xb8
    NSDictionary *_UTQuerys;	// 192 = 0xc0
    NSMutableArray *_mealIdList;	// 200 = 0xc8
}

@property(retain, nonatomic) NSMutableArray *mealIdList; // @synthesize mealIdList=_mealIdList;
@property(retain, nonatomic) NSDictionary *UTQuerys; // @synthesize UTQuerys=_UTQuerys;
@property(retain, nonatomic) SPNetworkRequest *netWorkRequest; // @synthesize netWorkRequest=_netWorkRequest;
@property(retain, nonatomic) NSString *mealType; // @synthesize mealType=_mealType;
@property(nonatomic) long long currentMealIndex; // @synthesize currentMealIndex=_currentMealIndex;
@property(retain, nonatomic) NSString *currentItemId; // @synthesize currentItemId=_currentItemId;
@property(retain, nonatomic) UIScrollView *itemScrollView; // @synthesize itemScrollView=_itemScrollView;
@property(retain, nonatomic) NSMutableArray *itemViewArray; // @synthesize itemViewArray=_itemViewArray;
@property(retain, nonatomic) NSString *currentMealId; // @synthesize currentMealId=_currentMealId;
@property(nonatomic) long long currentItemNum; // @synthesize currentItemNum=_currentItemNum;
@property(retain, nonatomic) TBComboItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) TBModelStatusHandler *comboFailStatusHandler; // @synthesize comboFailStatusHandler=_comboFailStatusHandler;
- (void).cxx_destruct;
- (id)dataForUserTrack;
- (void)updateUTQuerys;
- (void)buyBtnClicked:(id)arg1;
- (void)formBtnClicked:(id)arg1;
- (void)favBtnClicked:(id)arg1;
- (void)imageViewTapAction:(id)arg1;
- (void)tapAction;
- (void)moveToTapItemWithAnimation:(_Bool)arg1;
- (void)refreshfootView:(id)arg1;
- (void)refreshHeaderView;
- (void)refreshData;
- (void)reloadData;
- (void)loadData:(id)arg1;
- (void)initFootScrollView;
- (void)initHeaderInfoView;
- (void)initCustomNavibarTitle;
- (void)initBrowerViewBlock;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
