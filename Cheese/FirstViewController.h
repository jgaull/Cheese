//
//  FirstViewController.h
//  Cheese
//
//  Created by Jonathan Gaull on 4/6/13.
//  Copyright (c) 2013 OneHeaded Llama. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBarSDK.h"

@interface FirstViewController : UIViewController <ZBarReaderDelegate>

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker;

@end
