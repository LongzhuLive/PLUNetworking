//
//  PLUDiagnoseRequest.h
//  plurequest
//
//  Created by xu sun on 16/6/26.
//  Copyright © 2016年 xu sun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLURequestSessionTask.h"

@interface PLUDiagnoseRequest : NSObject

/**
 *  上传推流LOG
 *
 *  @param clientLogDic @{@"log_type": , @"log": {@"client_info": {}, @"push_info": {}}}
 *  @param success
 *  @param failure
 *
 *  @return PLURequestSessionTask
 */
+ (id<PLURequestSessionTask>)postClientLogByDic:(NSDictionary *)clientLogDic
                                     success:(void (^) (id responseObject))success
                                     failure:(void (^)(NSError *error))failure;
/**
 *  上传播放器LOG
 *
 *  @param playerLogDic @{@"content": @""}
 *  @param success
 *  @param failure
 *
 *  @return PLURequestSessionTask
 */
+ (id<PLURequestSessionTask>)postPlayerLogByDic:(NSDictionary *)playerLogDic
                                     success:(void (^) (id responseObject))success
                                     failure:(void (^)(NSError *error))failure;
/**
 *  上传播放器LOG（开始播放时和正在播放中的事件）
 *
 *  @param success
 *  @param failure
 *
 *  @return PLURequestSessionTask
 */
+ (id<PLURequestSessionTask>)postPlayerState:(NSString *)playState
                                        success:(void (^) (id responseObject))success
                                        failure:(void (^)(NSError *error))failure;
+ (id<PLURequestSessionTask>)postPlayerEvent:(NSString *)playEvent
                                     success:(void (^) (id responseObject))success
                                     failure:(void (^)(NSError *error))failure;
/**
 *  获取客户端IP
 *
 *  @param success @{@"IP": @"172.16.2.2"}
 *  @param failure
 *
 *  @return
 */
+ (id<PLURequestSessionTask>)getClientIpSuccess:(void (^) (id responseObject))success
                                     failure:(void (^)(NSError *error))failure;

/**
 *  上传播放器错误日志
 *
 *  @param jsonArray @[ @{
 @"id": PLUPLayer_ERRORREPORT_JOB_ID,
 @"uid": ([PLUUntility isBlankString:[PLUUserManager getUserId]] ? @(-1): @([[PLUUserManager getUserId] integerValue])),
 @"indexes":playLogString
 },...];
 *  @param success
 *  @param failure
 *
 *  @return
 */
+ (id<PLURequestSessionTask>)postPLUResJobLogByJsonArray:(NSArray *)jsonArray
                                        success:(void (^) (id responseObject))success
                                        failure:(void (^)(NSError *error))failure;

@end
