//
//  MainThreadModule.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/22.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@interface MainThreadModule : NSObject<WXModuleProtocol>
- (void)mainThread:(void(^)(void))callback;
@end
