//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBOTPGenerator : NSObject
{
}

+ (void)generateOTPImageWithInfo:(id)arg1 pubKey:(id)arg2 periodTimeInSeconds:(int)arg3 digits:(int)arg4 imageSize:(double)arg5 compeletion:(CDUnknownBlockType)arg6;
+ (id)generateOTPWithInfo:(id)arg1 pubKey:(id)arg2 periodTimeInSeconds:(int)arg3 digits:(int)arg4;
+ (id)MD5String:(id)arg1;

@end
