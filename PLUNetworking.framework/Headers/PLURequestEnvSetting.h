//
//  PLURequestEnvSetting.h
//  PLUNetworking
//
//  Created by sunshaobing on 16/6/30.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLURequestSessionTask.h"

@protocol PLURequestEnvRequestDelegate <NSObject>

/**
 *  此方法实现可以路由所有的GET业务请求
 */
@optional
- (id<PLURequestSessionTask>)getByUrlString: (NSString *)urlString
                                  params:(NSDictionary *)params
                             requestHead:(NSDictionary *)header
                                 success:(void (^) (id responseObject))success
                                 failure:(void (^)(NSError *error))failure;

- (id<PLURequestSessionTask>)postByUrlString: (NSString *)urlString
                                      params:(id)params
                                 requestHead:(NSDictionary *)header
                                     success:(void (^) (id responseObject))success
                                     failure:(void (^)(NSError *error))failure;
@optional
- (NSDictionary *)additonalHeader;

@end


@interface PLURequestEnvSetting : NSObject

//适用于APP自己做网络请求的场景，后续优化，若app想用自己的网络框架可以设置实现此代理
@property (nonatomic, weak) id<PLURequestEnvRequestDelegate> requestDelegate;

//Default: @"http://loger.corp.plu.cn/"
@property (nonatomic, copy) NSString *logerCorpPluUrl;
//Default: @"http://loger.plures.net/"
@property (nonatomic, copy) NSString *logerPlures;
//Default: @"http://playerlog.longzhu.com/"
@property (nonatomic, copy) NSString *playerLogerUrl;
//Default: @"http://livestream.plu.cn/"
@property (nonatomic, copy) NSString *LiveStreamPluUrl;
//Default: @"http://configapi.plu.cn/"
@property (nonatomic, copy) NSString *configApiPluUrl;
//Default: @"http://star.api.plu.cn/"
@property (nonatomic, copy) NSString *starApiPluUrl;
//Default: @"http://liveapi.plu.cn/"
@property (nonatomic, copy) NSString *liveApiPluUrl;
//Default: @"http://mb.tga.plu.cn/"
@property (nonatomic, copy) NSString *mbTGAPluUrl;
//Default: @"http://mbcdn.tga.plu.cn/"
@property (nonatomic, copy) NSString *mbCDNTGAPluUrl;
//Default: @"http://api.v.plu.cn/"
@property (nonatomic, copy) NSString *apiVideoPluUrl;
//Default: @"http://mservice.longzhu.com/"
@property (nonatomic, copy) NSString *getMyIp;
//Default: @"v1/state"/ manual set @"player/pptv"  for PPTV
@property (nonatomic, copy) NSString *playStateRouteName;
//Default: @"v1/event"/ manual set @"lag/pptv" for PPTV
@property (nonatomic, copy) NSString *playEventRouteName;

+(PLURequestEnvSetting *)defaultRequestEnvSetting;

@end










