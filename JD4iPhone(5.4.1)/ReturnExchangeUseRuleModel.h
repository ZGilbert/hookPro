//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSDate;

@interface ReturnExchangeUseRuleModel : JDModel
{
    NSArray *_returnExchangeNotice;
    NSDate *_date;
}

+ (id)getReturnExchangeNoticesArray;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSArray *returnExchangeNotice; // @synthesize returnExchangeNotice=_returnExchangeNotice;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
