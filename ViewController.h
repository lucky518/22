//
//  ViewController.h
//  
//
//  Created by lucky on 14-3-5.
//  Copyright (c) 2014年 lucky. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMapKit.h"

@interface ViewController : UIViewController<BMKMapViewDelegate>

@property (strong, nonatomic) IBOutlet BMKMapView *mapView;

@end
