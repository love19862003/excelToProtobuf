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
默认可以支持数据格式。 int  string enum array group
Monster.MonsterType 是自定义枚举，需要在上面枚举上定义。 group对应数据结构为二维数组。对应proto的数据结构文件
第一行是定义字段名字（可以加上注释打进proto文件），第二行为定义的类型。

_check.xls定义数据的检测
ItemBase.sell	              table=ItemSell.sell_id;int=-1
代表检测表ItemBase的sell字段。  检测的结果是ItemBase.sell的所有值必须在表ItemSell.sell_id中存在或者数值=-1都合法
ItemBase.show 
enum=itemBase.Item_Type.ITEM_TYPE_1,ItemBase.itemId;enum=itemBase.Item_Type.ITEM_TYPE_2,ItemBase.itemId;int=3,0;int=4,?
ItemBase.show 字段是类型group，检测条件是group的单个array 符合 {itemBase.Item_Type.ITEM_TYPE_1， ItemBase.itemId} 
{itemBase.Item_Type.ITEM_TYPE_2， ItemBase.itemId} {3， ?}, {4, ?}中任意一条就合法。
具体的测试可以查看tool目录。
执行run.bat即可打包 。

tool/cpps 生成所有cpp文件
tool/data 生成二进制数据以及lua需要的文件
tool/excel 需要打包的表
tool/lua 读取工具生成的lua文件
tool/property 打包的配置
tool/proto 生成打包的proto 以及pb文件






