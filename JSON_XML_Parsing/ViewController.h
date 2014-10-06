//
//  ViewController.h
//  JSON_XML_Parsing
//
//  Created by Anuj Katiyal on 05/10/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface ViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, MFMailComposeViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtCountry;
@property (weak, nonatomic) IBOutlet UILabel *lblCountry;
@property (weak, nonatomic) IBOutlet UITableView *tblCountryDetails;
- (IBAction)sendJSON:(id)sender;

@end

