//
//  TabBar.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/29.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@interface TabBar : NSObject<WXModuleProtocol>

@property (nonatomic, strong, readonly) UITabBarController *tabBarVC;

- (void)render:(NSArray<NSString *> *)pages;

@end
