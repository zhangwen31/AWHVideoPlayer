//
//  AWHVPPTZControlView.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/9/27.
//

#import <UIKit/UIKit.h>
#import <AWHVideoPlayer/AWHVPVideoPlayerModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPPTZControlView : UIView

@property (nonatomic, strong) AWHVPVideoPlayerModel *model;

@property(nonatomic,copy)void (^GetSpeedValue)(NSInteger speed);

@property (nonatomic, copy) void (^functionClick)(NSString *function);

@end

NS_ASSUME_NONNULL_END
