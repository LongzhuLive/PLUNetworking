//
//  PLUPlayingRequest.h
//  PLUNetworking
//
//  Created by sunshaobing on 16/6/29.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLURequestSessionTask.h"

@interface PLUPlayingRequest : NSObject
/**
 *  获取播放路线列表
 *
 *  @param roomId  房间ID
 *  @param success NSDictionary
 *  @param failure
 *
 *  @return PLURequestSessionTask
 */
+(id<PLURequestSessionTask>)getEntireLivePlayUrls: (NSInteger)roomId
                                          success:(void(^)(id responseObject))success
                                          failure:(void (^)(NSError *error))failure;
/**
 *  获取播放路线列表
 *
 *  @param roomId  房间ID
 *  @param success NSDictionary
 *  @param failure
 *
 *  @return PLURequestSessionTask
 */
+(id<PLURequestSessionTask>)getEntireLivePlayUrls: (NSInteger)roomId
                                        addParam: (NSDictionary *)addParam
                                       success:(void(^)(id responseObject))success
                                       failure:(void (^)(NSError *error))failure;

/**
 *  获取PK播放路线列表
 *
 *  @param roomId  房间ID
 *  @param success NSDictionary
 *  @param failure
 *
 *  @return PLURequestSessionTask
 */
+(id<PLURequestSessionTask>)getEntireLivePKPlayUrls: (NSInteger)roomId
                                       pkPeerRoomId: (NSInteger)pkPeerRoomId

                                         addParam: (NSDictionary *)addParam
                                          success:(void(^)(id responseObject))success
                                          failure:(void (^)(NSError *error))failure;

/**
 *  获取点播分辨率列表
 *
 *  @param mediaId  mediaId
 *  @param success NSDictionary
 *  @param failure
 *
 *  @return PLURequestSessionTask
 */
+(id<PLURequestSessionTask>)getPluVideoPlayUrls: (NSString *)mediaId
                                          success:(void(^)(id responseObject))success
                                          failure:(void (^)(NSError *error))failure;

@end
