//
//  LocationModule.h
//  xiaoDian
//
//  Created by huluobo on 2018/6/7.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@interface LocationModule : NSObject<WXModuleProtocol>

- (void)getLocation:(WXModuleKeepAliveCallback)callback;

@end
