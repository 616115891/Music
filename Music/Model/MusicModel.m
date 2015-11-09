//
//  MusicModel.m
//  Music
//
//  Created by apple on 15/11/8.
//  Copyright © 2015年 apple. All rights reserved.
//

#import "MusicModel.h"

@implementation MusicModel

+(NSDictionary *)mj_objectClassInArray
{
    return @{@"songList":[MusicSongListModel class]};
}

+(NSString *)mj_replacedKeyFromPropertyName121:(NSString *)propertyName
{
    return [propertyName mj_underlineFromCamel];
}

@end

@implementation MusicBillboardModel

+(NSString *)mj_replacedKeyFromPropertyName121:(NSString *)propertyName
{
    return [propertyName mj_underlineFromCamel];
}

@end

@implementation MusicSongListModel

+(NSDictionary *)mj_replacedKeyFromPropertyName
{
    return @{@"type":@"copy_type"};
}

+(NSString *)mj_replacedKeyFromPropertyName121:(NSString *)propertyName
{
    return [propertyName mj_underlineFromCamel];
}

@end