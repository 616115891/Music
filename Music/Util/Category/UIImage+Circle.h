//
//  UIImage+Circle.h
//  MusicPlayer
//
//  Created by apple on 15/9/16.
//  Copyright (c) 2015年 apple. All rights reserved.
//
//将图片切成圆形放回
#import <UIKit/UIKit.h>

@interface UIImage (Circle)


+(UIImage *)scaleToSize:(UIImage *)image size:(CGSize)size;

+(UIImage* )circleImageWithName:(NSString *)name borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

+ (UIImage *)circleImageWithImage:(UIImage *)sourceImage borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;
@end
