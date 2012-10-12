//
//  RTMasterViewController.h
//  GithubPublicReposForXcodeDemo
//
//  Created by 今城 善矩 on 2012/10/12.
//
//

#import <UIKit/UIKit.h>

@class RTDetailViewController;

#import <CoreData/CoreData.h>

@interface RTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) RTDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
