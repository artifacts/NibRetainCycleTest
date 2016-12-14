//
//  Document.h
//  NibRetainCycleTest
//
//  Created by Michael Markowski on 14/12/16.
//  Copyright © 2016 Artifacts. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSPersistentDocument

// Set this to strong and voilá - Retain Cycle.

@property (nonatomic, weak) IBOutlet NSArrayController *gniechArrayController;

@end
