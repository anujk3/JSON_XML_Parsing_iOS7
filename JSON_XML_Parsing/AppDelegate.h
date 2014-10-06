//
//  AppDelegate.h
//  JSON_XML_Parsing
//
//  Created by Anuj Katiyal on 05/10/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>


extern NSString *const kUsername;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

+ (void)downloadDataFromURL:(NSURL *)url withCompletionHandler:(void(^)(NSData *data))completionHandler;

@end

