//
//  RegisterFinishVC.h
//  AppChat
//
//  Created by ThanhSon on 9/15/16.
//  Copyright © 2016 hungpham. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SignDto.h"

#import "API.h"
#import "AppDelegate.h"

#import "UserDto.h"
#import "LoginDto.h"
#import "SignDto.h"

#import "RoomListVC.h"


#import "activityViewController.h"

#define serverRegister @"user/register"
#define serverLogin @"user/login"

@interface RegisterFinishVC : UIViewController<UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *tfFullName;
@property (weak, nonatomic) IBOutlet UITextField *tfGender;
@property (weak, nonatomic) IBOutlet UITextField *tfBrithday;

@property (nonatomic, strong) NSString * email;
@property (nonatomic, strong) NSString * password;

@property (nonatomic, strong) SignDto * userRegister;

@end
