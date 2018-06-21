//
//  WXNotificationCenter.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/22.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@interface WXNotificationCenter : NSObject<WXModuleProtocol>
- (void)post:(NSArray<NSString *> *)urls callback:(WXModuleKeepAliveCallback)callback;

- (void)postWithName:(NSString *)name userInfo:(NSDictionary *)userInfo callback:(WXModuleKeepAliveCallback)callback;

@end
