//
//  AppDelegate.h
//  zlglearngit
//
//  Created by zhangleigao on 2018/7/28.
//  Copyright © 2018年 zhangleigao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

