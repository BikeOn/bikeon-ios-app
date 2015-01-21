//
//  DetailViewController.h
//  BikeOn
//
//  Created by Cristian Oliveira on 19/01/15.
//  Copyright (c) 2015 Cristian Oliveira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

