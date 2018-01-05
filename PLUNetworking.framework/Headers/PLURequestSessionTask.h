//
//  PLURequestTask.h
//  PLUNetworking
//
//  Created by sunshaobing on 16/7/18.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PLURequestSessionTask <NSObject>

- (void)cancel;

- (NSHTTPURLResponse *)response;

@end
