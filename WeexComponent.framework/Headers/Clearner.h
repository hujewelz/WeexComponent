//
//  Clearner.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/22.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>


@interface Clearner : NSObject<WXModuleProtocol>

- (void)getCacheSize:(WXModuleKeepAliveCallback)callback;

- (void)clearCache:(WXModuleKeepAliveCallback)callback;

@end
