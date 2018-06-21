/**
 * Created by Weex.
 * Copyright (c) 2016, Alibaba, Inc. All rights reserved.
 *
 * This source code is licensed under the Apache Licence 2.0.
 * For the full copyright and license information,please view the LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>
#import <SocketRocket/SRWebSocket.h>


@interface BaseWXViewController : UIViewController<SRWebSocketDelegate>

- (instancetype)initWithPage:(NSString *)page;

@property (nonatomic, copy) NSString *page;
@property (nonatomic, strong) NSURL *url;

@property (nonatomic, copy) NSString *querry;

@property (nonatomic, strong) NSString *source;
@property (nonatomic, strong) SRWebSocket *hotReloadSocket;

@end
