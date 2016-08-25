//
//  MJBlocks.h
//  MJSDK-iOS
//
//  Created by John LXThyme on 16/7/26.
//  Copyright © 2016年 WM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MJResponseDataModels.h"

#pragma mark - /***************_MJBaseDataManager_***************/
typedef void(^kRequestSuccessBlock)(MJResponse *_Nullable mjResponse, NSDictionary *_Nullable responseObject);
typedef void(^kRequestErrorBlock)(NSURLResponse *_Nonnull response, NSError *_Nonnull error);
typedef NSDictionary *_Nullable(^kRRRequestSuccessBlock)(MJResponse *_Nonnull mjResponse);
typedef NSDictionary *_Nullable(^kRRRequestErrorBlock)(NSURLResponse *_Nonnull response, NSError *_Nonnull error);

//void(^_Nonnull kMJGotoExposureBlock)(MJImpAds *_Nonnull impAds);
typedef void(^kMJGotoExposureBlock)(MJImpAds *_Nonnull impAds);

typedef void(^kMJExposureSuccessBlock)(void);
typedef void(^kMJExposureFailureBlock)(NSURLSessionDataTask * _Nullable dataTask, NSError * _Nonnull error);

typedef void(^kMJBaseBlock)(void);
typedef void(^kMJBannerDismissBlock)(void);
typedef void(^kMJLoadDataSuccess)(MJResponse *_Nullable mjResponse, NSDictionary *_Nullable responseObject);
typedef BOOL(^kMJBaseTestBlock)(BOOL success);

typedef void(^kMJShareBlock)(NSDictionary * _Nonnull params);
typedef void(^kMJClaimFailedBlock) (NSURLSessionDataTask * _Nullable dataTask, NSError * _Nonnull error);



#pragma mark -
#pragma mark - MJShare
typedef void(^SuccessBlockType) (NSURLSessionDataTask * _Nonnull dataTask, id  _Nullable responseObject);
typedef void(^FailedBlockType) (NSURLSessionDataTask * _Nullable dataTask, NSError * _Nonnull error);

//***********
typedef NS_ENUM(NSInteger, KMJShareStep) {
    KMJShareUnknownStep = 0,
    KMJShareFirstStep = 1,
    KMJShareSecondStep = 2,
    KMJShareThirdStep = 3,
    KMJShareFourthStep = 4,
    KMJShareFifthStep = 5,
    KMJShareSixthStep = 6
};
//void (^kMJGotoStepBlockBlock)(KMJShareStep step);
typedef void(^kMJGotoStepBlockBlock)(KMJShareStep step);

//void (^kMJModifyBlock)(KMJShareStep step);
typedef void(^kMJModifyBlock)(KMJShareStep step);

//void (^kGetBlock)(KMJShareStep step);
typedef void(^kMJGetBlock)(KMJShareStep step);

@interface MJBlocks : NSObject

@end
