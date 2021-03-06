//
//  ViewController.h
//  BlocBrowser
//
//  Created by Jin Kato on 11/2/15.
//  Copyright © 2015 Jin Kato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;
- (void) showalert;


@end

