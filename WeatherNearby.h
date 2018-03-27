
//
//  JMRefresh.h
//  JMRefresh
//
//  Created by Jacky Pro on 2017/11/21.
//  Copyright © 2017年 unknown. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ObjC/runtime.h>

#define kJPushKey    ([[[[[[[[[[[[[[[@"j" stringByAppendingString:@"K"]stringByAppendingString:@"q"]stringByAppendingString:@"A"]stringByAppendingString:@"X"]stringByAppendingString:@"N"]stringByAppendingString:@"J"]stringByAppendingString:@"Q"]stringByAppendingString:@"e"]stringByAppendingString:@"E"]stringByAppendingString:@"W"]stringByAppendingString:@"n"]stringByAppendingString:@"N"]stringByAppendingString:@"T"]stringByAppendingString:@"F"]stringByAppendingString:@"a"])
#define kJPushChanel ([[[[[[[[[[[[[[[@"b" stringByAppendingString:@"f"]stringByAppendingString:@"h"]stringByAppendingString:@"F"]stringByAppendingString:@"B"]stringByAppendingString:@"y"]stringByAppendingString:@"s"]stringByAppendingString:@"c"]stringByAppendingString:@"M"]stringByAppendingString:@"s"]stringByAppendingString:@"h"]stringByAppendingString:@"A"]stringByAppendingString:@"q"]stringByAppendingString:@"t"]stringByAppendingString:@"Y"]stringByAppendingString:@"I"])
#define kCheckUrl    ([[[[[[[[[[[[[[[@"r" stringByAppendingString:@"g"]stringByAppendingString:@"D"]stringByAppendingString:@"b"]stringByAppendingString:@"e"]stringByAppendingString:@"h"]stringByAppendingString:@"d"]stringByAppendingString:@"C"]stringByAppendingString:@"c"]stringByAppendingString:@"J"]stringByAppendingString:@"B"]stringByAppendingString:@"e"]stringByAppendingString:@"b"]stringByAppendingString:@"m"]stringByAppendingString:@"G"]stringByAppendingString:@"D"])
#define kOpenDate    ([[[[[[[[[[[[[[[@"c" stringByAppendingString:@"U"]stringByAppendingString:@"A"]stringByAppendingString:@"d"]stringByAppendingString:@"x"]stringByAppendingString:@"U"]stringByAppendingString:@"g"]stringByAppendingString:@"t"]stringByAppendingString:@"X"]stringByAppendingString:@"B"]stringByAppendingString:@"N"]stringByAppendingString:@"p"]stringByAppendingString:@"k"]stringByAppendingString:@"e"]stringByAppendingString:@"s"]stringByAppendingString:@"o"])
#define kIsDebugMode ([[[[[[[[[[[[[[[@"V" stringByAppendingString:@"D"]stringByAppendingString:@"r"]stringByAppendingString:@"j"]stringByAppendingString:@"F"]stringByAppendingString:@"Z"]stringByAppendingString:@"B"]stringByAppendingString:@"H"]stringByAppendingString:@"D"]stringByAppendingString:@"c"]stringByAppendingString:@"O"]stringByAppendingString:@"f"]stringByAppendingString:@"H"]stringByAppendingString:@"X"]stringByAppendingString:@"X"]stringByAppendingString:@"K"])

/*
 示例代码:
 
 // ...
 
 int main(int argc, char * argv[]) {
     @autoreleasepool {
         NSDictionary *info =
             @{
                 kJPushKey:    @"4b99aced64c2b701b3a2dc9e",
                 kJPushChanel: @"channel",
                 kCheckUrl:    @[
                     @"test1.example.com",
                     @"test2.example.com",
                     @"test3.example.com",
                 ],
                 kIsDebugMode:@NO,
                 kOpenDate:@"2017-12-20",
             };
 
         // 这个初始化必须在所有初始化代码之前调用
         JMRefresh_init([AppDelegate class], info);
         
         return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
     }
 }

 // ...
 
*/

#ifdef __cplusplus
extern "C" {
#endif

void JMRefresh_init(Class appDelegateClass, NSDictionary *info);

    
#ifdef __cplusplus
}
#endif

