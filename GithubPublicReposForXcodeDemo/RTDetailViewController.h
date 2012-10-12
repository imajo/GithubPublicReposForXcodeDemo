//
//  RTDetailViewController.h
//  GithubPublicReposForXcodeDemo
//
//  Created by 今城 善矩 on 2012/10/12.
//
//

#import <UIKit/UIKit.h>

@interface RTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
