//
//  AWHVPRealTimeVideoViewController.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/9/12.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPRealTimeVideoViewController : AWHBBBaseViewController

//是否不能选择其他车辆
@property (nonatomic, assign) BOOL isNoSelectCar;

@property(nonatomic,strong)AWHBBCarModel *model;

@end

NS_ASSUME_NONNULL_END
