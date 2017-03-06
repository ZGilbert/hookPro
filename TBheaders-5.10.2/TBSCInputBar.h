//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HPGrowingTextViewDelegate-Protocol.h"
#import "TBEmoticonSelectionViewControllerDelegate-Protocol.h"
#import "TBSCCommentSelectViewDelegate-Protocol.h"
#import "TBSCMyPathSelectItemDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class HPGrowingTextView, NSArray, NSString, NSTimer, TBEmoticonSelectionViewController, TBSCCommentCommodityItem, TBSCCommentSelectView, TBSCIKSelectPhoto, TBSCImageUploadService, UIActivityIndicatorView, UIButton, UIImageView;
@protocol TBSCInputBarDeletage;

@interface TBSCInputBar : UIView <HPGrowingTextViewDelegate, TBEmoticonSelectionViewControllerDelegate, TBSCCommentSelectViewDelegate, UIActionSheetDelegate, TBSCMyPathSelectItemDelegate>
{
    int _inputSwitchButtonType;	// 8 = 0x8
    int _emotionButtonType;	// 12 = 0xc
    int _keyboardStatus;	// 16 = 0x10
    int _currentAnimation;	// 20 = 0x14
    TBSCImageUploadService *_imgUpLoadService;	// 24 = 0x18
    _Bool _isViewDidUnload;	// 32 = 0x20
    _Bool _hideOnResign;	// 33 = 0x21
    _Bool _isPictureDisable;	// 34 = 0x22
    _Bool _isCommdityDisable;	// 35 = 0x23
    _Bool _isImageAndTextNeedSend;	// 36 = 0x24
    _Bool _needsImage;	// 37 = 0x25
    int _commentContentType;	// 40 = 0x28
    int _imageUploadStatus;	// 44 = 0x2c
    int _commentScene;	// 48 = 0x30
    int _picShowStauts;	// 52 = 0x34
    int _sceneType;	// 56 = 0x38
    TBSCCommentCommodityItem *_commentCommodityItem;	// 64 = 0x40
    NSString *_text;	// 72 = 0x48
    NSString *_pageName;	// 80 = 0x50
    CDUnknownBlockType _keyBoardStatusBlock;	// 88 = 0x58
    HPGrowingTextView *_hpTextView;	// 96 = 0x60
    id <TBSCInputBarDeletage> _inputBarDelegate;	// 104 = 0x68
    NSString *_itemExtSymbol;	// 112 = 0x70
    NSString *_imageName;	// 120 = 0x78
    UIButton *_emotionButton;	// 128 = 0x80
    UIButton *_multiButton;	// 136 = 0x88
    TBSCCommentSelectView *_commentSelectView;	// 144 = 0x90
    UIImageView *_pictureImageView;	// 152 = 0x98
    UIImageView *_commdityImageView;	// 160 = 0xa0
    UIButton *_imageButton;	// 168 = 0xa8
    NSString *_emotionPicStr;	// 176 = 0xb0
    NSString *_commentPicStr;	// 184 = 0xb8
    NSString *_mutiliPicStr;	// 192 = 0xc0
    TBEmoticonSelectionViewController *_emoticonSelectionViewController;	// 200 = 0xc8
    TBSCIKSelectPhoto *_photo;	// 208 = 0xd0
    UIView *_toolbarView;	// 216 = 0xd8
    NSTimer *_levelTimer;	// 224 = 0xe0
    UIActivityIndicatorView *_buttonLoadingIndicator;	// 232 = 0xe8
    double _timeData;	// 240 = 0xf0
    NSArray *_photos;	// 248 = 0xf8
}

+ (id)inpuBarWithFrame:(struct CGRect)arg1 targetType:(int)arg2 needsImage:(_Bool)arg3;
+ (id)inpuBarWithFrame:(struct CGRect)arg1 targetType:(int)arg2;
@property(nonatomic) _Bool needsImage; // @synthesize needsImage=_needsImage;
@property(nonatomic) int sceneType; // @synthesize sceneType=_sceneType;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(nonatomic) double timeData; // @synthesize timeData=_timeData;
@property(nonatomic) int picShowStauts; // @synthesize picShowStauts=_picShowStauts;
@property(retain, nonatomic) UIActivityIndicatorView *buttonLoadingIndicator; // @synthesize buttonLoadingIndicator=_buttonLoadingIndicator;
@property(retain, nonatomic) NSTimer *levelTimer; // @synthesize levelTimer=_levelTimer;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) _Bool isImageAndTextNeedSend; // @synthesize isImageAndTextNeedSend=_isImageAndTextNeedSend;
@property(nonatomic) int imageUploadStatus; // @synthesize imageUploadStatus=_imageUploadStatus;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) TBSCIKSelectPhoto *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) TBEmoticonSelectionViewController *emoticonSelectionViewController; // @synthesize emoticonSelectionViewController=_emoticonSelectionViewController;
@property(nonatomic) _Bool isCommdityDisable; // @synthesize isCommdityDisable=_isCommdityDisable;
@property(nonatomic) _Bool isPictureDisable; // @synthesize isPictureDisable=_isPictureDisable;
@property(nonatomic) _Bool hideOnResign; // @synthesize hideOnResign=_hideOnResign;
@property(retain, nonatomic) NSString *mutiliPicStr; // @synthesize mutiliPicStr=_mutiliPicStr;
@property(retain, nonatomic) NSString *commentPicStr; // @synthesize commentPicStr=_commentPicStr;
@property(retain, nonatomic) NSString *emotionPicStr; // @synthesize emotionPicStr=_emotionPicStr;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIImageView *commdityImageView; // @synthesize commdityImageView=_commdityImageView;
@property(retain, nonatomic) UIImageView *pictureImageView; // @synthesize pictureImageView=_pictureImageView;
@property(retain, nonatomic) TBSCCommentSelectView *commentSelectView; // @synthesize commentSelectView=_commentSelectView;
@property(retain, nonatomic) UIButton *multiButton; // @synthesize multiButton=_multiButton;
@property(retain, nonatomic) UIButton *emotionButton; // @synthesize emotionButton=_emotionButton;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *itemExtSymbol; // @synthesize itemExtSymbol=_itemExtSymbol;
@property(nonatomic) int commentContentType; // @synthesize commentContentType=_commentContentType;
@property(nonatomic) __weak id <TBSCInputBarDeletage> inputBarDelegate; // @synthesize inputBarDelegate=_inputBarDelegate;
@property(retain, nonatomic) HPGrowingTextView *hpTextView; // @synthesize hpTextView=_hpTextView;
@property(copy, nonatomic) CDUnknownBlockType keyBoardStatusBlock; // @synthesize keyBoardStatusBlock=_keyBoardStatusBlock;
@property(nonatomic) _Bool isViewDidUnload; // @synthesize isViewDidUnload=_isViewDidUnload;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) TBSCCommentCommodityItem *commentCommodityItem; // @synthesize commentCommodityItem=_commentCommodityItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearService;
- (void)destroy;
- (void)userLogEvent;
- (void)cancelLogin;
- (void)onUserLogIn;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlert:(id)arg1;
- (void)changeShowStatus:(id)arg1;
- (void)deleteImageAtLocal:(id)arg1;
- (_Bool)isNetReachable;
- (void)uploadImageToRemote:(id)arg1;
- (void)upLoadImageAndText;
- (void)getItemExtSymbolFromImageName;
- (void)itemSelected:(id)arg1;
- (void)selectView:(id)arg1 didSelectMenuWithType:(int)arg2;
- (void)emoticonSelectionViewController:(id)arg1 didSelectEmoticon:(id)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)inputSwitchActionWithNoAnimaton;
- (void)forceCloseKeyboardWithNOAnimation;
- (void)closeKeyboardAreaWithNOAnimation;
- (void)closeKeyboardArea;
- (void)resignTextView;
- (void)hide;
- (void)show;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showEmotionView:(_Bool)arg1;
- (void)resetData;
- (void)clearAllData;
- (void)clearImageView;
- (void)hideImageView;
- (void)showImageView;
- (void)setPictureImageViewShow:(_Bool)arg1;
- (void)imageButtonClicked:(id)arg1;
- (void)emotionBtnClick:(id)arg1;
- (void)multiBtnClick:(id)arg1;
- (void)keyboardSwitchAnimWithStatus:(int)arg1;
- (void)initSelectView;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)refreshEmotionButtonWithType:(int)arg1;
- (void)refreshMultiButtonWithType:(int)arg1;
- (void)hidden;
- (void)noHidden;
- (void)setNickName:(id)arg1;
- (void)setupViewWithTargetType;
- (void)setupScene:(int)arg1 needsImage:(_Bool)arg2;
- (void)setupScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
