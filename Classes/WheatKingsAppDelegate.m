//
//  WheatKingsAppDelegate.m
//  WheatKings
//
//  Created by Gregory Bell on 17/01/10.
//  Copyright Nexopia 2010. All rights reserved.
//

#import "WheatKingsAppDelegate.h"
#import "WheatKingsViewController.h"

@implementation WheatKingsAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
