//
//  AWHVPHistoryVideoDetaliViewController.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/9/22.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPHistoryVideoDetaliViewController : AWHBBBaseViewController
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)NSMutableArray *titleArray;
@property(nonatomic,copy)NSString *videoType;
@property(nonatomic,copy) NSString *carId;
@property(nonatomic,copy) NSString *titleStr;
@end

NS_ASSUME_NONNULL_END
