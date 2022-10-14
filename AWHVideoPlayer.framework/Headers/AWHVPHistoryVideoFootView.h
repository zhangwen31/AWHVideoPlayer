//
//  AWHVPHistoryVideoFootView.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/9/26.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomProgress.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^CodeSelectBlock)(NSString *string);
@interface AWHVPHistoryVideoFootView : UIView

@property(nonatomic,copy)CodeSelectBlock CodeSelectBlock;

@property(nonatomic,assign)NSInteger time;
//终端视频
@property (nonatomic, assign) BOOL isTerminalVideo;

@property(nonatomic,copy)GetSliderValue GetSliderValue;
@property(nonatomic,copy)StartSliderValue StartSliderValue;
@property(nonatomic,copy)GetSliderValue PhaseSliderValue;

//是否正在加载
- (void)loading;
//是否正在播放
- (void)play;

- (void)timerInvalidate;

@end

NS_ASSUME_NONNULL_END
