//
//  ShareModule.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/8.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@interface ShareModule : NSObject<WXModuleProtocol>
- (void)openWX:(WXModuleKeepAliveCallback)callback;
- (void)shareLink:(NSDictionary *)data callback:(WXModuleKeepAliveCallback)callback;
- (void)shareImage:(NSDictionary *)data callback:(WXModuleKeepAliveCallback)callback;
- (void)shareImages:(NSArray *)imageUrls callback:(WXModuleKeepAliveCallback)callback;
- (void)shareVideo:(NSDictionary *)data callback:(WXModuleKeepAliveCallback)callback;
- (void)downloadVideo:(NSString *)urlStr callback:(WXModuleKeepAliveCallback)callback;
@end
