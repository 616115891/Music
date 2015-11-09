//
//  MusicModel.h
//  Music
//
//  Created by apple on 15/11/8.
//  Copyright © 2015年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModel.h"
@class MusicBillboardModel;
@interface MusicModel : BaseModel
@property (nonatomic, assign) double errorCode;
@property (nonatomic, strong) NSArray *songList;
@property (nonatomic, strong) MusicBillboardModel *billboard;
@end

@interface MusicBillboardModel : BaseModel

@property (nonatomic, assign) double havemore;
@property (nonatomic, strong) NSString *billboardNo;
@property (nonatomic, strong) NSString *picS640;
@property (nonatomic, assign) double billboardType;
@property (nonatomic, strong) NSString *picS444;
@property (nonatomic, strong) NSString *webUrl;
@property (nonatomic, strong) NSString *picS210;
@property (nonatomic, strong) NSString *updateDate;
@property (nonatomic, strong) NSString *comment;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *picS260;

@end

@interface MusicSongListModel : BaseModel

@property (nonatomic, strong) NSString *rank;
@property (nonatomic, strong) NSString *artistName;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *allArtistId;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) double learn;
@property (nonatomic, strong) NSString *piaoId;
@property (nonatomic, assign) double isFirstPublish;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, assign) double hasMv;
@property (nonatomic, strong) NSString *isCharge;
@property (nonatomic, strong) NSString *koreanBbSong;
@property (nonatomic, strong) NSString *resourceType;
@property (nonatomic, strong) NSString *songId;
@property (nonatomic, strong) NSString *albumTitle;
@property (nonatomic, strong) NSString *resourceTypeExt;
@property (nonatomic, assign) double hasMvMobile;
@property (nonatomic, strong) NSString *delStatus;
@property (nonatomic, strong) NSString *picSmall;
@property (nonatomic, strong) NSString *allArtistTingUid;
@property (nonatomic, strong) NSString *artistId;
@property (nonatomic, strong) NSString *tingUid;
@property (nonatomic, assign) double havehigh;
@property (nonatomic, strong) NSString *songSource;
@property (nonatomic, assign) double charge;
@property (nonatomic, strong) NSString *albumId;
@property (nonatomic, strong) NSString *allRate;
@property (nonatomic, strong) NSString *highRate;

@end