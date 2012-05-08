//
//  AppDelegate.h
//  Quiz
//
//  Created by Jeff Weiss on 1/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    int currentQuestionIndex;
    
    //the model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    //the view objects
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}

@property (strong, nonatomic, retain) IBOutlet UIWindow *window;


- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;
@end
