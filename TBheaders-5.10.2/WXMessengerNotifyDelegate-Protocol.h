//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, WXNtfMessage, WXStackNotify, WXStackPlugin, WXStackVoipDialog;

@protocol WXMessengerNotifyDelegate <NSObject>

@optional
- (void)didReceiveEHelpNotify:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveNotifyMessage:(WXStackNotify *)arg1 account:(NSString *)arg2;
- (void)didReceiveCheckAuthCode:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveSendMsgAlertInfo:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveVoipAssistantMsg:(WXStackVoipDialog *)arg1 account:(NSString *)arg2;
- (void)didReceiveDeleteGroupNotifyWithData:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveChangeGroupParentIdNotifyWithData:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveChangeGroupNameNotifyWithData:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveAddNewGroupNotifyWithData:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveFriendNotifyAcceptRefuseOnOtherPlatform:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveFriendNotifyAcceptOKOnOtherPlatform:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveFriendNotifyDenyAdd:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveFriendRecommenOperationTip:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveFriendVerifyAddRquest:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveFriendNotifyContactNeedSync:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveFriendNotifyServerAdd:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveFriendAcceptVerifyRequest:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveFriendAddSuccess:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceivePublicAccountMsg:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveUnreadOfSession:(NSString *)arg1 withTimeStamp:(unsigned int)arg2 account:(NSString *)arg3;
- (void)didReceivePipeMessage:(WXNtfMessage *)arg1 account:(NSString *)arg2;
- (void)didReceivePluginMessage:(WXStackPlugin *)arg1 account:(NSString *)arg2;
- (void)didReceiveTribeInvitation:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveTribeMsgInfo:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveMySelfMessage:(NSArray *)arg1 accoun:(NSString *)arg2;
- (void)didReceiveSyncScreenMessage:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveP2PMessage:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveInputStatus:(int)arg1 fromUser:(NSString *)arg2 account:(NSString *)arg3;
- (void)didLoseConnectionByForce:(NSString *)arg1 account:(NSString *)arg2;
@end
