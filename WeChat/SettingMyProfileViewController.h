//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CSettingExt.h"
#import "HDHeadImageViewDelegate.h"
#import "IOplogExt.h"
#import "MMRegionPickerViewControllerDelegate.h"
#import "settingModifyAliasDelegate.h"
#import "settingModifySignDelegate.h"
#import "settingMyAccountExtInfoLogicDelegate.h"

@class MMHeadImageView, MMRegionPickerViewController, MMTableViewInfo, NSString, NameEditorViewController, SettingMyAccountExtInfoLogic;

@interface SettingMyProfileViewController : MMUIViewController <HDHeadImageViewDelegate, settingModifySignDelegate, MMRegionPickerViewControllerDelegate, settingMyAccountExtInfoLogicDelegate, CSettingExt, settingModifyAliasDelegate, IOplogExt>
{
    MMHeadImageView *m_headImage;
    MMRegionPickerViewController *m_regionPicker;
    SettingMyAccountExtInfoLogic *m_infoLogic;
    MMTableViewInfo *m_tableViewInfo;
    NameEditorViewController *m_CurrentVC;
    NSString *m_nsTempNickName;
}

- (void).cxx_destruct;
- (void)viewDidTransitionToNewSize;
- (void)initDeepLinkConfig;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)saveNewSign:(id)arg1;   //修改个性签名 @"内容"
- (void)onModifySex:(id)arg1;   //修改性别 @"1" 女
- (void)onModifyNickName:(id)arg1 vc:(id)arg2;
- (void)onSettingChanged:(int)arg1;
- (void)onInfoChange;
- (void)dealloc;
- (void)showMyAddressInfoView;  //进入我的地址修改页面
- (void)showQRInfoView;  //显示我的二维码
- (void)showModifySignView; // 进入修改个性签名
- (void)showModifyAddressView;  //进入修改地区
- (void)showModifyNickName;  //进入修改名字
- (void)showModifySexView;  //进入修改性别
- (id)getAddressString;  //地区
- (id)getSexString;  //得到性别
- (double)getSignCellHeight;
- (void)makeChangeImgCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeQRInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeSignCell:(id)arg1 cellInfo:(id)arg2;
- (void)willAppear;
- (void)willDisshow;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onChangeImg:(id)arg1;
- (void)ChangeSex:(id)arg1;
- (void)SaveAndExit;  //保存并退出
- (void)Save;
- (void)returnBack; //返回到 '我' 页面
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (void)onLinkedIn;
- (void)updateTableCell;
- (void)saveNewAlias;
- (void)showModifyUserName;  //设置微信号界面
- (_Bool)isNeedShowWCPay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
