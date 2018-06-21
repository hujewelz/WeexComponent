//
//  MediaPlayer.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/8.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@interface MediaPlayer : NSObject<WXModuleProtocol>

- (void)play:(NSString *)url callback:(WXModuleKeepAliveCallback)callback;

- (void)defaultPlayer:(NSString *)url callback:(WXModuleKeepAliveCallback)callback;

@end


