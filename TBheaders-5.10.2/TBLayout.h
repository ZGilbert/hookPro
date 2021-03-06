//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBNeedSetDashAttributesProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString, UIView;

@interface TBLayout : NSObject <TBNeedSetDashAttributesProtocol>
{
    _Bool _needLayout;	// 8 = 0x8
    id _parentItem;	// 16 = 0x10
    NSDictionary *_layoutContent;	// 24 = 0x18
    UIView *_parentView;	// 32 = 0x20
    double _parentOffsetX;	// 40 = 0x28
    double _parentOffsetY;	// 48 = 0x30
    NSDictionary *_viewAttributes;	// 56 = 0x38
    NSArray *_viewItems;	// 64 = 0x40
    double _marginTop;	// 72 = 0x48
    double _marginLeft;	// 80 = 0x50
    double _marginBottom;	// 88 = 0x58
    double _marginRight;	// 96 = 0x60
    UIView *_view;	// 104 = 0x68
    id _dataSource;	// 112 = 0x70
    struct CGSize _contextSize;	// 120 = 0x78
    struct CGSize _size;	// 136 = 0x88
}

@property(nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) double marginBottom; // @synthesize marginBottom=_marginBottom;
@property(nonatomic) double marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) double marginTop; // @synthesize marginTop=_marginTop;
@property(nonatomic) struct CGSize contextSize; // @synthesize contextSize=_contextSize;
@property(nonatomic) _Bool needLayout; // @synthesize needLayout=_needLayout;
@property(retain, nonatomic) NSArray *viewItems; // @synthesize viewItems=_viewItems;
@property(retain, nonatomic) NSDictionary *viewAttributes; // @synthesize viewAttributes=_viewAttributes;
@property(nonatomic) double parentOffsetY; // @synthesize parentOffsetY=_parentOffsetY;
@property(nonatomic) double parentOffsetX; // @synthesize parentOffsetX=_parentOffsetX;
@property(nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSDictionary *layoutContent; // @synthesize layoutContent=_layoutContent;
@property(nonatomic) id parentItem; // @synthesize parentItem=_parentItem;
- (void).cxx_destruct;
- (void)setPageTrackCodeOfViewItems:(id)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (void)layoutViewItems;
- (void)sizeToFit;
- (_Bool)isViewLoaded;
- (void)destroyView;
@property(readonly, nonatomic) double fixedHeight;
@property(readonly, nonatomic) double fixedWidth;
- (id)createView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertyName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

