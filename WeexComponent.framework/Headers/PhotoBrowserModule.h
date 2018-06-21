//
//  PhotoBrowserModule.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/29.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>


@interface PhotoBrowserModule : NSObject<WXModuleProtocol>

- (void)showImages:(NSArray *)imageUrls atIndex: (NSUInteger)index callback:(WXModuleKeepAliveCallback)callback;

@end
