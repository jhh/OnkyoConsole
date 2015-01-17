//
//  AppDelegate.h
//  Onkyo Console
//
//  Created by Jeff Hutchison on 6/8/13.
//  Copyright (c) 2013 Jeff Hutchison. All rights reserved.
//

@import Cocoa;
#import "OnkyoKit.h"
#import <os/activity.h>
#import "ReceiverBrowser.h"

@interface AppDelegate : NSObject <NSApplicationDelegate, ReceiverBrowserDelegate, ONKReceiverDelegate>

@property ReceiverBrowser *receiverBrowser;
@property (unsafe_unretained) IBOutlet NSTextView *consoleTextView;
@property (unsafe_unretained) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *commandTextField;

- (IBAction)sendCommand:(NSTextField *)sender;

@end
