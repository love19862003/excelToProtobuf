# excelToProtobuf
excel data pack to protobuf
通过读取excel，生成对应的LUA文件。然后使用lua生成对应的proto文件。通pbc再次把对应的数据打包进proto。
只是数据类型 int， string  array 以及二维数组group以及对应的自定义枚举。
packTool工程生成工具packtool从excel读取数据，并且生成对应的lua 数据。
tool是打包工具工作目录。其中property目录的config.xls定义从excel读取目录的一些配置。
config.xls第一个sheet默认是用户自定义枚举配置。每行第一列定义枚举所在的文件。第二列定义枚举定义所在的sheet
例如 
_enumDefine1.xls	enum_a
_enumDefine1.xls	enum_b
_enumDefine2.xls	enum  

代表用户自定义枚举在_enumDefine1.xls的名字为enum_a和enum_b的sheet。以及_enumDefine2.xls名字为enum的sheet。

config.xls第二个sheet 默认是需要打包的表。
monster.xls	Monster

monster.xls	Drop

monster.xls	Monster_Other

Item.xls	ItemBase

Item.xls	ItemSell

Item.xls	ItemShow

第一列是文件名。 第二列是sheet名。 sheet名字对应打包出来的结构名字。

config.xls第三个sheet 是打包生成出来的配置
ProConfigSpace	包名。Package 对应proto的package
ProManager	    打包的数据结构名字（ 用于产生管理类的数据。）
Config	        打包的类的后缀名 例如Item.xls	ItemBase 生成出来的proto为ItemBaseConfig.proto
AllConfigs	    输出的管理类和文件名字
.//	            打包输出目录
.//excel//	     excel目录

config.xls第四个sheet定义的是打包时候的数据检测的文件。
_check.xls	check

_enumDefine1.xls文件enum_a sheet

Monster.MonsterType
enum	  
MONSTER_TYPE_1=1	    

MONSTER_TYPE_2=2	    

MONSTER_TYPE_3=3

MONSTER_TYPE_4=4	

MONSTER_TYPE_5=5	

MONSTER_TYPE_6=6	

MONSTER_TYPE_7=7	

MONSTER_TYPE_8=8	

MONSTER_TYPE_9=9	

MONSTER_TYPE_10=10	

MONSTER_TYPE_11=11	

MONSTER_TYPE_12=12	

MONSTER_TYPE_13=13

每行第一列是自定义枚举Monster.MonsterType 代表Monster表定义一个MonsterType枚举。MONSTER_TYPE_1=1代表枚举值。 枚举注释也可以打进文件。

monster.xls 名字为monster的sheet定义
MonsterId	Name	Type	                  Position	                        GroupPosition
int	string	Monster.MonsterType	  array	                              group
1	monster1	MONSTER_TYPE_1	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
2	monster2	MONSTER_TYPE_2	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
3	monster3	MONSTER_TYPE_3	      1,2,3	1,2,3;11,22,                 33;33,44,55,66,77,88,99;00
4	monster4	MONSTER_TYPE_4	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
5	monster5	MONSTER_TYPE_5	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
6	monster6	MONSTER_TYPE_6	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
7	monster7	MONSTER_TYPE_7	      0	                             1,2,3;11,22,33;33,44,55,66,77,88,99;00
8	monster8	MONSTER_TYPE_8	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
9	monster9	MONSTER_TYPE_9	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
10	monster10	MONSTER_TYPE_10	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
11	monster11	MONSTER_TYPE_11	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
12	monster12	MONSTER_TYPE_12	      1,2,3,4,5,6,7,8,9	                 1,2,3;11,22,33;33,44,55,66,77,88,99;00
13	monster13	MONSTER_TYPE_13	      	

默认可以支持数据格式。 int  string enum array group
Monster.MonsterType 是自定义枚举，需要在上面枚举上定义。 group对应数据结构为二维数组。对应proto的数据结构文件
第一行是定义字段名字（可以加上注释打进proto文件），第二行定义的类型。





