//
//  AWHVPRealTimeVideoPlayerView.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/9/26.
//

#import <UIKit/UIKit.h>
#import <IJKMediaFramework/IJKMediaFramework.h>
#import "AWHVPVideoPlayerModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPRealTimeVideoPlayerView : UIView

@property (nonatomic, strong) AWHVPVideoPlayerModel *model;

@property(nonatomic,strong)IJKFFMoviePlayerController *player;

@property(nonatomic,copy)void (^clearBackClick)(void);

@end

NS_ASSUME_NONNULL_END
