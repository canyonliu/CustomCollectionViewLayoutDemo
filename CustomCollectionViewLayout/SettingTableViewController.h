//
//  SettingTableViewController.h
//  CustomCollectionViewLayout
//
//  Created by WayneLiu on 15/10/30.
//  Copyright (c) 2015年 lqc. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^DoneBlock) (NSInteger cellColumn, CGFloat cellMargin, CGFloat cellMinHeight, CGFloat cellMaxHeight);

@interface SettingTableViewController : UITableViewController

@property (nonatomic, assign) NSInteger cellColumn;
@property (nonatomic, assign) CGFloat cellMargin;
@property (nonatomic, assign) CGFloat cellMinHeight;
@property (nonatomic, assign) CGFloat cellMaxHeight;

- (void)setDoneBlock:(DoneBlock) block;
@end
