//
//  MusicNetManager.h
//  Music
//
//  Created by apple on 15/11/8.
//  Copyright © 2015年 apple. All rights reserved.
//

#import "BaseNetManager.h"
#import "MusicModel.h"
typedef NS_ENUM(NSUInteger, MusicType) {
    MusicTypeXinGeBang,        //新歌榜
    MusicTypeReGeBang,          //热歌榜
    MusicTypeKTVReGeBang,         //KTV热歌榜
    MusicTypeChiZhaGeQuBang,         //叱咤歌曲榜
    MusicTypeXueBiYinPengYinBang,        //雪碧音碰音榜
    MusicTypeXueBiYinPengYinSaiGeBang,          //雪碧音碰音赛歌榜
    MusicTypeYaoGunBang,        //摇滚榜
    MusicTypeJueShi,       //爵士
    MusicTypeLiuXing,         //流行
    MusicTypeOuMengJinQuBang,         //欧美金曲榜
    MusicTypeJingDianLaoGeBang,        //经典老歌榜
    MusicTypeQingGeDuiChangBang,        //情歌对唱榜
    MusicTypeYingShiJinQuBang,          //影视金曲榜
    MusicTypeWangLuoGeQuBang,            //网络歌曲榜
};
@interface MusicNetManager : BaseNetManager
/** 通过type辨别类型 发送请求获得JSON数据*/
+(id)getMusicType:(NSInteger)type page:(NSInteger)page completionHandle:(void(^)(id model, NSError *error))completionHandle;

@end
