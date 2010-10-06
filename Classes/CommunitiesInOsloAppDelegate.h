//
//  CommunitiesInOsloAppDelegate.h
//  CommunitiesInOslo
//
//  Created by Tobias Lund-Melcher on 06.10.10.
//  Copyright KnowIT Objectnet AS 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CommunitiesInOsloAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
