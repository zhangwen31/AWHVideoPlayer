//
//  AWHVPAlarmTypeTableHeadView.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>
#import <AWHReportModule/AWHRMAlarmTypeModel.h>
#import <AWHBoneRuntime/AWHBRExpandButton.h>
typedef void(^SelectBtn)(NSString *string);

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPAlarmTypeTableHeadView : UITableViewHeaderFooterView

@property(nonatomic,strong)AWHRMAlarmTypeModel *model;
@property(nonatomic,strong)UILabel *nameLab;
@property(nonatomic, copy)SelectBtn SelectBtn;
@property(nonatomic, strong)AWHBRExpandButton*selectButton;
@property(nonatomic, strong)UIColor *contentBackgroundColor;

@end

NS_ASSUME_NONNULL_END
