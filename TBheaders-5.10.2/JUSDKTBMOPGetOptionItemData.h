//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JUSDKDOBase.h"

@class NSArray, NSDictionary, NSString;

@interface JUSDKTBMOPGetOptionItemData : JUSDKDOBase
{
    int _currentPage;	// 8 = 0x8
    int _totalPage;	// 12 = 0xc
    NSArray *_model;	// 16 = 0x10
    NSString *_totalItem;	// 24 = 0x18
    NSString *_pageSize;	// 32 = 0x20
    NSDictionary *_trackParams;	// 40 = 0x28
}

+ (Class)classForName:(id)arg1;
@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(nonatomic) int totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSString *pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *totalItem; // @synthesize totalItem=_totalItem;
@property(retain, nonatomic) NSArray *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)dealloc;

@end
