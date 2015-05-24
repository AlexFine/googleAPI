//
//  ViewController.h
//  GoogleAPI
//
//  Created by iD Student on 7/21/14.
//  Copyright (c) 2014 Beam, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>

#import "GTMOAuth2ViewControllerTouch.h"
#import "GTLDrive.h"

@interface ViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (nonatomic, retain) GTLServiceDrive *driveService;

@end