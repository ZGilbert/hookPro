//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IAudioPlayerDelegate <NSObject>

@optional
- (void)onAudioEnd;
- (void)onAudioUpdate:(CDStruct_1b6d18a9)arg1 total:(CDStruct_1b6d18a9)arg2;
- (void)onAudioPause;
- (void)onAudioPlay;
@end
