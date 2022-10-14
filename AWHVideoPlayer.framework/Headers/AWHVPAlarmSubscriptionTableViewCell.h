//
//  AWHVPAlarmSubscriptionTableViewCell.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>
#import <AWHReportModule/AWHRMAlarmTypeModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPAlarmSubscriptionTableViewCell : UITableViewCell

@property (nonatomic,copy) void(^ChoseBtnBlock)(id,BOOL);
@property(nonatomic,strong)AWHRMAlarmTypeModel *model;
@property (nonatomic,strong)UILabel *titleLab;
@property (nonatomic,strong)UIImageView *desImageView;
@property(nonatomic, strong)UIColor *contentBackgroundColor;

@end

NS_ASSUME_NONNULL_END
