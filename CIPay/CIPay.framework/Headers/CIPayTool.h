//
//  CIPayTool.h
//  CIPay
//
//  Created by daben on 2022/12/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 持续向外回调消息
typedef void(^PayJSResultCallback)(NSInteger callbackType, NSString * _Nullable callbackName, id _Nullable callbackParams, NSString * _Nullable errorString);

@interface CIPayTool : NSObject

+ (instancetype)tool;

/// 验证命令是否有效
/// @param command 命令
- (BOOL)canIUse:(NSString *)command;

/**
 推送消息处理
 
 @param message JS消息体
 @param callback 消息回调
 @discussion 该方法属于Pay消息分发器，所有和Pay相关的消息都通过该方法进行转发
 */
- (void)dispatchJSMessage:(NSDictionary *)message callback:(PayJSResultCallback)callback;

@end

NS_ASSUME_NONNULL_END
