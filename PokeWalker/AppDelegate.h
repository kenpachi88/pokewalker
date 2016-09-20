//
//  AppDelegate.h
//  PokeWalker
//
//  Created by kenny on 7/17/16.
//  Copyright © 2016 kenny. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "SettingsViewController.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
+ (NSOperationQueue *)connectionQueue;

@end

