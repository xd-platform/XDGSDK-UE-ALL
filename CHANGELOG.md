v6.5.1
```
Feature：
谷歌支付结算库billing升级到4.1.0。

BugFix
兼容 TapSDK 初始化时 regionType 参数因 XDSDK 编译导致 TapSDK 判断区域有误问题。
移除TapDB用的 oaid_1.0.23.aar (海外不需要用，国内游戏自行下载添加这个v25版本的)。 https://github.com/xd-platform/xd_sdk_resource/blob/master/Other/oaid_sdk_1.0.25.aar

TapSDK Dependencies
依赖 Tap插件 3.13.0

备注说明：
谷歌支付结算库billing升级到4.1.0后，UE引擎(4.27, 5.0.3)里有个叫Online的插件不兼容这个版本，游戏发布谷歌平台的话需要把这个插件禁用
```

v6.5.0
```
基于之前的6.4.3的升级
添加安卓端苹果登录
支持越南语
防账号裂开处理(同一个邮箱问题)
```
