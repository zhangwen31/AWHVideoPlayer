//
//  AWHVPAlarmSubscriptionView.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHVPReturnSelectAlarmTypeBlock)(NSSet *selectSet,NSArray *allAlarmArray);
@interface AWHVPAlarmSubscriptionView : UIView

@property(nonatomic,copy)AWHVPReturnSelectAlarmTypeBlock ReturnSelectAlarmTypeBlock;
@property (nonatomic,strong)NSMutableSet *selectSet;
- (instancetype)initWithRequestInterface:(NSString *)requestInterface;
- (instancetype)initWithRequestType:(NSString *)type;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
