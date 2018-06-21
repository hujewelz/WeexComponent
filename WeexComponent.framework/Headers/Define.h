//
//  Define.h
//  WeexComponent
//
//  Created by huluobo on 2018/6/11.
//

#ifndef Define_h
#define Define_h

#define dispatch_async_main(block) if ([NSThread isMainThread]) { \
    block;\
} else { \
    dispatch_async(dispatch_get_main_queue(), ^{ \
        block; \
    }); \
} \

#endif /* Define_h */
