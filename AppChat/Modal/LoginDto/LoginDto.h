//
//  LoginDto.h
//  AppChat
//
//  Created by ThanhSon on 9/13/16.
//  Copyright © 2016 hungpham. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LoginDto : NSObject

@property (nonatomic ,strong) NSString * email;
@property (nonatomic ,strong) NSString * password;

- (NSDictionary*) getJSONObject;

@end
