//
//  ProgressHUD.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/16.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>


@interface ProgressHUD : NSObject<WXModuleProtocol>

- (void)show;

- (void)dismiss;

- (void)showInfo:(NSString *)info;

- (void)showSuccess:(NSString *)msg;

- (void)showError:(NSString *)msg;


@end
