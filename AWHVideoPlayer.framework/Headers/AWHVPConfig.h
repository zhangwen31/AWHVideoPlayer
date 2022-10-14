//
//  AWHVPConfig.h
//  AWHVideoPlayer
//
//  Created by 王恒 on 2022/9/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPConfig : NSObject
/**
 * 视频接口返回状态说明
 * -6: 车辆欠费
 * -4: 设备没有回应，请稍后再试
 * -3: 车辆不存在
 * -2: 系统异常
 * -1: 设备离线
 * 0：成功
 * 1: 设备返回失败
 * 2 : 设备返回消息有误
 * 3 : 设备不支持
 * 13: 对讲被占用
 * 14: 广播被占用
 * 15: 上级平台正在播放
 * 16: 紧急报警正在录像
 * 17: 广播端口分配完毕
 * 20: 该通道正在回放
 * 21: 上级平台正在回放
 * 30: 809成功
 * 31: 809返回失败
 * 32: 809不支持
 * 33: 809会话结束
 * 34: 809时效口令错误
 * 35: 809不满足跨域条件
 * 43: 设备使用流量已超出设置
 * 44: 服务器带宽已满，请稍后再试
 */
+ (NSString *)getVideoStatusDescription:(NSInteger)status;

@end

NS_ASSUME_NONNULL_END
