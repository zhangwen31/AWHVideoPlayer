//
//  AWHVPRealTimeCollectionView.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2023/7/22.
//

#import <UIKit/UIKit.h>
#import <IJKMediaFramework/IJKMediaFramework.h>
#import <AWHVideoBasePlayer/AWHVPVideoPlayerModel.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHVPRealTimeReturnSelectTitle)(NSString *title,IJKFFMoviePlayerController *player);
@interface AWHVPRealTimeCollectionView : UIView

@property(nonatomic,strong)IJKFFMoviePlayerController *player;
@property (nonatomic, strong) AWHVPVideoPlayerModel *model;
@property (nonatomic, strong) NSString *carId;
@property (nonatomic, assign) AWHVPMovieScalingMode movieScalingMode;
@property (nonatomic, strong) NSString *codeName;
@property(nonatomic,copy)AWHVPRealTimeReturnSelectTitle ReturnSelectTitle;
@property(nonatomic,copy)void (^openSoundClick)(AWHVPVideoPlayerModel *model);
@property(nonatomic,copy)void (^selectClick)(AWHVPVideoPlayerModel *model);
@property(nonatomic,copy)void (^reconnectClick)(AWHVPVideoPlayerModel *model);
@property(nonatomic,copy)void (^fullClearBackClick)(void);
//静音
- (void)mute;
//暂停
-(void)stopPlay;

@end

NS_ASSUME_NONNULL_END
