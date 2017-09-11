//
//  PLUSimpleRequest.h
//  plurequest
//
//  Created by xu sun on 16/6/26.
//  Copyright © 2016年 xu sun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PLUFoundation/PLUFoundation.h>
#import "PLURequestSessionTask.h"
/**
 *  简单原始的系统http请求
 */
@interface PLUSimpleRequest : NSObject
/**
 *  POSTJSON/String方法，JSON/String放入BODY
 *
 *  @param urlString 路径，不要带query
 *  @param params    json
 *  @param header    <#header description#>
 *  @param success   <#success description#>
 *  @param failure   <#failure description#>
 *
 *  @return <#return value description#>
 */
+ (id<PLURequestSessionTask>)postByUrlString: (NSString *)urlString
                                   params:(id)params
                              requestHead:(NSDictionary *)header
                                  success:(void (^) (id responseObject))success
                                  failure:(void (^)(NSError *error))failure;
/**
 *  GET方法
 *
 *  @param urlString 路径，不要带query
 *  @param params    query参数
 *  @param header    <#header description#>
 *  @param success   <#success description#>
 *  @param failure   <#failure description#>
 *
 *  @return <#return value description#>
 */
+ (id<PLURequestSessionTask>)getByUrlString: (NSString *)urlString
                                  params:(NSDictionary *)params
                             requestHead:(NSDictionary *)header
                                 success:(void (^) (id responseObject))success
                                 failure:(void (^)(NSError *error))failure;

@end
