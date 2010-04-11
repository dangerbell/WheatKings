//
//  WheatKingsViewController.h
//  WheatKings
//
//  Created by Gregory Bell on 17/01/10.
//  Copyright Nexopia 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <MapKit/MKMapView.h>

@interface WheatKingsViewController : UIViewController {
	MKMapView *map;
}

@property (nonatomic, retain) IBOutlet MKMapView *map;

@end

