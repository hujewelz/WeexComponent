//
//  WXImgLoaderDefaultImpl.h
//  xiaoDian
//
//  Created by huluobo on 2018/3/2.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@interface WXImgLoaderDefaultImpl : NSObject<WXImgLoaderProtocol, WXModuleProtocol>

@end


@interface LocalImageLoader: NSObject<WXImageOperationProtocol>

+ (LocalImageLoader *)loadImageWithName:(NSString *)imageName completed:(void(^)(UIImage *image))completed;
@end
