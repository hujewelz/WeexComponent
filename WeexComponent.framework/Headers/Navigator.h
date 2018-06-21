//
//  Navigator.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/2.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@interface Navigator : NSObject <WXModuleProtocol>

- (void)push:(NSString *)url callback:(WXModuleKeepAliveCallback)callback;


- (void)pop:(NSString *)url callback:(WXModuleKeepAliveCallback)callback;

/// 切换根控制器
/// 需要重写，不需要调用 super
- (void)replace:(NSString *)url callback:(WXModuleKeepAliveCallback)callback;


+ (UIViewController *)getPageFromURL:(NSString *)url;

///  通过 key 获取 query string 中的值
///  该方法不需要重写

+ (id)valueForKey:(NSString *)key inURL:(NSString *)url;


/// weex 跳转到原生界面
/// 该方法需要重写，不需要调用 super
+ (UIViewController *)nativePageFromURL:(NSString *)url;

@end
