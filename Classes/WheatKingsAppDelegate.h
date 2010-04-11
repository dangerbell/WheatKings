//
//  WheatKingsAppDelegate.h
//  WheatKings
//
//  Created by Gregory Bell on 17/01/10.
//  Copyright Nexopia 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WheatKingsViewController;

@interface WheatKingsAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    WheatKingsViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet WheatKingsViewController *viewController;

@end

