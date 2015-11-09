//
//  MusicNetManager.m
//  Music
//
//  Created by apple on 15/11/8.
//  Copyright © 2015年 apple. All rights reserved.
//

#import "MusicNetManager.h"

#define kMusicPath @"http://tingapi.ting.baidu.com/v1/restserver/ting"

@implementation MusicNetManager

/** 发送请求获得JSON数据*/
+(id)getMusicType:(NSInteger)type page:(NSInteger)page completionHandle:(void(^)(id model, NSError *error))completionHandle;
{
    NSMutableDictionary * params = [NSMutableDictionary dictionaryWithDictionary:@{@"from":@"webapp_music",@"method":@"baidu.ting.billboard.billList",@"format":@"json"}];
    switch (type) {
        case MusicTypeXinGeBang:
            params[@"type"]=@1;
            break;
        case MusicTypeReGeBang:
            params[@"type"]=@2;
            break;
        case MusicTypeKTVReGeBang:
            params[@"type"]=@6;
            break;
        case MusicTypeChiZhaGeQuBang:
            params[@"type"]=@7;
            break;
        case MusicTypeXueBiYinPengYinBang:
            params[@"type"]=@9;
            break;
        case MusicTypeXueBiYinPengYinSaiGeBang:
            params[@"type"]=@10;
            break;
        case MusicTypeYaoGunBang:
            params[@"type"]=@11;
            break;
        case MusicTypeJueShi:
            params[@"type"]=@12;
            break;
        case MusicTypeLiuXing:
            params[@"type"]=@16;
            break;
        case MusicTypeOuMengJinQuBang:
            params[@"type"]=@21;
            break;
        case MusicTypeJingDianLaoGeBang:
            params[@"type"]=@22;
            
            break;
        case MusicTypeQingGeDuiChangBang:
            params[@"type"]=@23;
            
            break;
        case MusicTypeYingShiJinQuBang:
            params[@"type"]=@24;
            break;
        case MusicTypeWangLuoGeQuBang:
            params[@"type"]=@25;
            break;
            
    }
    params[@"size"] = @10;
    params[@"offset"] = @(10*(page-1));

    NSString * path = [self percentPathWithPath:kMusicPath params:params];
    return [self GET:path parameters:nil completionHandler:^(id responseObj, NSError *error) {
        completionHandle([MusicModel mj_objectWithKeyValues:responseObj],error);
    }];
}

@end
