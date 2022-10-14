//
//  AWHVPRealTimeCollectionViewCell.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/9/12.
//

#import <UIKit/UIKit.h>
#import <IJKMediaFramework/IJKMediaFramework.h>
#import "AWHVPVideoPlayerModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnSelectTitle)(NSString *title,IJKFFMoviePlayerController *player);
@interface AWHVPRealTimeCollectionViewCell : UICollectionViewCell
@property(nonatomic,strong)IJKFFMoviePlayerController *player;
@property (nonatomic, strong) AWHVPVideoPlayerModel *model;
@property(nonatomic,copy)ReturnSelectTitle ReturnSelectTitle;
@property(nonatomic,copy)void (^openSoundClick)(AWHVPVideoPlayerModel *model);
@property(nonatomic,copy)void (^selectClick)(AWHVPVideoPlayerModel *model);
//静音
- (void)mute;
@end

NS_ASSUME_NONNULL_END
