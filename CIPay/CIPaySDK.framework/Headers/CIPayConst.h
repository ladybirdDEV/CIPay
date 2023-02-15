//
//  CIPayConst.h
//  CIPay
//
//  Created by daben on 2022/12/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 回调类型
typedef NS_ENUM(NSUInteger, CIPayJSCallbackType) {
    CIPayJSCallbackTypeNormal, // 普通回调
    CIPayJSCallbackTypeSubscribe // 订阅回调
};

/// 平台类型
typedef NSString * CIPayPlatform;
/// Stripe
FOUNDATION_EXPORT CIPayPlatform const CIPayPlatformStripe;


/// 参数名（JS 2 Native）
typedef NSString * CIPayParamName;
/// callbackId
FOUNDATION_EXPORT CIPayParamName const CIPayParamCallbackIdName;
/// platform
FOUNDATION_EXPORT CIPayParamName const CIPayParamPlatformName;
/// payment
FOUNDATION_EXPORT CIPayParamName const CIPayParamPaymentName;

/// 响应：Native回调给小程序
typedef NSString * CIPayResKey;

/// 错误码（小程序框架设计如此：errMsg=ok代表成功，errMsg=fail代表失败）
/// 使用示例：@{CIPayResStatusKey : CIPayResStatusSuccess, CIPayResMessageKey : @"This response is success"}
FOUNDATION_EXPORT CIPayResKey const CIPayResStatusKey;
FOUNDATION_EXPORT CIPayResKey const CIPayResStatusSuccess;
FOUNDATION_EXPORT CIPayResKey const CIPayResStatusFailure;
FOUNDATION_EXPORT CIPayResKey const CIPayResMessageKey;

/// result
FOUNDATION_EXPORT CIPayResKey const CIPayResResultKey;
/// status
FOUNDATION_EXPORT CIPayResKey const CIPayResPStatusKey;

@interface CIPayConst : NSObject

@end

NS_ASSUME_NONNULL_END
