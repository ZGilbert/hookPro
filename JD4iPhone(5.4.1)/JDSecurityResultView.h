//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface JDSecurityResultView : UIView
{
    UILabel *m_successTitle;
    UIButton *m_shopButton;
    _Bool result;
    id <JDSecurityResultDelegate> delegate;
}

@property(nonatomic) id <JDSecurityResultDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool result; // @synthesize result;
- (void)shopButtonClick;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

