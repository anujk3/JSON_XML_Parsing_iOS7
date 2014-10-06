//
//  NeighboursViewController.h
//  JSON_XML_Parsing
//
//  Created by Anuj Katiyal on 03/10/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NeighboursViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NSXMLParserDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblNeighbours;
@property (nonatomic, strong) NSString *geonameID;

@end
