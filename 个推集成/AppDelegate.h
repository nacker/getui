//
//  AppDelegate.h
//  个推集成
//
//  Created by nacker on 16/1/17.
//  Copyright © 2016年 nacker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GeTuiSdk.h"

#define kGtAppId           @"xxx"
#define kGtAppKey          @"xxx"
#define kGtAppSecret       @"xxx"

@interface AppDelegate : UIResponder <UIApplicationDelegate,GeTuiSdkDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

