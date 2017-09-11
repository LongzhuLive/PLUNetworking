//
//  PLURoomStreamingRequest.h
//  Push
//
//  Created by sunshaobing on 16/6/27.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "PLURequestSessionTask.h"

@interface PLURoomStreamingRequest : NSObject

/**
 *  获取推流配置
 *
 *  @param success NSDictionary
 *  @param failure <#failure description#>
 *
 *  @return <#return value description#>
 */
+ (id<PLURequestSessionTask>)getPushConfig:(void (^) (id responseObject))success
                                       failure:(void (^)(NSError *error))failure;
/**
 *  获取游戏直播推流线路列表
 *
 *  @param streamType 0（推荐，其他未知）
 *  @param success    NSDictionary
 *  @param failure    <#failure description#>
 *
 *  @return <#return value description#>
 */
+ (id<PLURequestSessionTask>)getStreamingTargetUrls: (NSInteger)streamType
                                          sucess:(void (^)(id responseObject))success
                                         failure:(void (^)(NSError *error))failure;
/**
 *  游戏直播开始接口
 *
 *  @param title           标题，不可为nil
 *  @param titleDesc       标题描述，可为nil
 *  @param liveSourceType  来源
 *  @param liveStreamType  线路
 *  @param clLocation      位置，可为空
 *  @param address         位置，clLocation不为空时不能为空
 *  @param categoryId      分类
 *  @param model           设备型号，可为nil
 *  @param watchDirections 观看方向，可为空
 *  @param success         NSDictionary
 *  @param failure         <#failure description#>
 *
 *  @return <#return value description#>
 */
+(id<PLURequestSessionTask>)getGameLiveStartLiveWithTitle:(NSString *)title
                                             titleDesc: (NSString *)titleDesc
                                        liveSourceType: (NSInteger)liveSourceType
                                        liveStreamType: (NSInteger)liveStreamType
                                              location: (CLLocation *)clLocation
                                               address: (NSString *)address
                                            categoryId: (NSString *)categoryId
                                                 model: (NSString *)model
                                       watchDirections: (NSString *)watchDirections
                                               success:(void(^)(id responseObject))success
                                               failure:(void (^)(NSError *error))failure;
/**
 *  游戏结束直播接口
 *
 *  @param reason         原因ID
 *  @param reasonDesp     原因描述
 *  @param liveSourceType 来源
 *  @param success
 *  @param failure
 *
 *  @return <#return value description#>
 */
+(id<PLURequestSessionTask>)getGameLiveEndLiveWithReason:(NSInteger)reason
                                           reasonDesp:(NSString *)reasonDesp
                                       liveSourceType: (NSInteger)liveSourceType
                                              success:(void(^)(id responseObject))success
                                              failure:(void (^)(NSError *error))failure;
/**
 *  随拍开启直播接口
 *
 *  @param title           标题，不可为nil
 *  @param liveSourceType  来源
 *  @param liveStreamType  线路
 *  @param clLocation      位置，可为空
 *  @param address         位置，clLocation不为空时不能为空
 *  @param categoryId      分类
 *  @param model           设备型号，可为nil
 *  @param watchDirections 观看方向，可为空
 *  @param success         NSDictionary
 *  @param failure         <#failure description#>
 *
 *  @return <#return value description#>
 */
+(id<PLURequestSessionTask>)getEntireLiveStartLiveWithTitle:(NSString *)title
                                          liveSourceType: (NSInteger)liveSourceType
                                          liveStreamType: (NSInteger)liveStreamType
                                                location: (CLLocation *)clLocation
                                                 address: (NSString *)address
                                              categoryId: (NSString *)categoryId
                                                   model: (NSString *)model
                                         watchDirections: (NSString *)watchDirections
                                                   cover: (NSString *)cover
                                                    tags: (NSString *)tags
                                                 success:(void(^)(id responseObject))success
                                                 failure:(void (^)(NSError *error))failure;
/**
 *  随拍结束直播接口
 *
 *  @param reason         原因ID
 *  @param reasonDesp     原因描述
 *  @param liveSourceType 来源
 *  @param success        <#success description#>
 *  @param failure        <#failure description#>
 *
 *  @return <#return value description#>
 */
+(id<PLURequestSessionTask>)getEntireLiveEndLiveWithReason:(NSInteger)reason
                                             reasonDesp:(NSString *)reasonDesp
                                         liveSourceType: (NSInteger)liveSourceType
                                                success:(void(^)(id responseObject))success
                                                failure:(void (^)(NSError *error))failure;
/**
 *  金山推流地址的更新
 *
 *  @param oldUrl  来的推流地址
 *  @param success NSDictionary
 *  @param failure <#failure description#>
 *
 *  @return <#return value description#>
 */
+(id<PLURequestSessionTask>)getEntireLiveKsyUpStreamUrlByOldUrl:(NSString *)oldUrl
                                                     success:(void(^)(id responseObject))success
                                                     failure:(void (^)(NSError *error))failure;
@end
