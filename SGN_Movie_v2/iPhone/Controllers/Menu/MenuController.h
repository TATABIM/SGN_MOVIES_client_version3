//
//  MenuController.h
//  SGN_Movie_v2
//
//  Created by vnicon on 7/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "MoviesController.h"
#import "CinemasController.h"

@interface MenuController : UIViewController <UITableViewDelegate,UITableViewDataSource>
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
