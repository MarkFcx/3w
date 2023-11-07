# 3w

''' 数据库：'''
用户表（Users）：
    用户ID（UserID）- 主键
    用户名（Username）
    密码（Password）


项目表（Projects）：
    项目ID（ProjectID）- 主键
    用户ID（UserID）- 外键，关联到用户表中的用户ID
    项目名称（ProjectName）


扬声器表（Loudspeakers）：
    扬声器ID（LoudspeakerID）- 主键
    项目ID（ProjectID）- 外键，关联到项目表中的项目ID
    扬声器名称（LoudspeakerName）
    水平角（HorizontalAngle）
    俯仰角（ElevationAngle）