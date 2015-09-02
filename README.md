# excelToProtobuf
excel data pack to protobuf
通过读取excel，生成对应的LUA文件。然后使用lua生成对应的proto文件。通pbc再次把对应的数据打包进proto。
只是数据类型 int， string  array 以及二维数组group以及对应的自定义枚举。
packTool工程生成工具packtool从excel读取数据，并且生成对应的lua 数据。
tool是打包工具工作目录。其中property目录的config.xls定义从excel读取目录的一些配置。
config.xls第一个sheet默认是用户自定义枚举配置。每行第一列定义枚举所在的文件。第二列定义枚举定义所在的sheet
例如  _enumDefine1.xls	enum_a
      _enumDefine1.xls	enum_b
      _enumDefine2.xls	enum  代表用户自定义枚举在_enumDefine1.xls的名字为enum_a和enum_b的sheet。以及_enumDefine2.xls名字为enum的sheet。

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







