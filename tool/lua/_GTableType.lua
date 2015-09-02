local GTableType = { 

--GTableType table:Drop
Drop = {
 id = {
  index=1,
  name="id",
  type=0,
  type_name="int",
  comment="作者:1~99999通用掉落首位1- 关卡卡牌掉落2- 关卡装备掉落3- 道具掉落 4- 卡牌熔铸5- 转盘掉落6- PVP掉落7- 宝箱掉落（奖励类型2）8- 活动副本掉落9- 摇钱树2~3位等级/类4~6位序列",
  table="Drop",
},
 drop_type = {
  index=2,
  name="drop_type",
  type=0,
  type_name="int",
  comment="作者:1 整组奖励中随机1个2 整组奖励",
  table="Drop",
},
 min_level = {
  index=3,
  name="min_level",
  type=0,
  type_name="int",
  comment="吴凡:掉落最低等级",
  table="Drop",
},
 max_level = {
  index=4,
  name="max_level",
  type=0,
  type_name="int",
  comment="吴凡:掉落最大等级",
  table="Drop",
},
 rate = {
  index=5,
  name="rate",
  type=0,
  type_name="int",
  comment="作者:掉率",
  table="Drop",
},
 drop_count = {
  index=6,
  name="drop_count",
  type=0,
  type_name="int",
  comment="",
  table="Drop",
},
 drop_data = {
  index=7,
  name="drop_data",
  type=3,
  type_name="group",
  comment="作者:掉落具体数据，单挑掉落数据为：掉落类型 ，配置ID，掉率，数量",
  table="Drop",
},
},

--GTableType table:ItemBase
ItemBase = {
 itemid = {
  index=1,
  name="itemid",
  type=0,
  type_name="int",
  comment="吴凡:id",
  table="ItemBase",
},
 name = {
  index=2,
  name="name",
  type=1,
  type_name="string",
  comment="吴凡:名字",
  table="ItemBase",
},
 sell = {
  index=4,
  name="sell",
  type=2,
  type_name="array",
  comment="吴凡:base 测试",
  table="ItemBase",
},
 show = {
  index=5,
  name="show",
  type=3,
  type_name="group",
  comment="吴凡:cell 测试",
  table="ItemBase",
},
},

--GTableType table:ItemSell
ItemSell = {
 sell_id = {
  index=1,
  name="sell_id",
  type=0,
  type_name="int",
  comment="吴凡:id",
  table="ItemSell",
},
},

--GTableType table:ItemShow
ItemShow = {
 show_id = {
  index=1,
  name="show_id",
  type=0,
  type_name="int",
  comment="吴凡:id",
  table="ItemShow",
},
},

--GTableType table:Monster
Monster = {
 monsterid = {
  index=1,
  name="monsterid",
  type=0,
  type_name="int",
  comment="吴凡:怪物ID",
  table="Monster",
},
 name = {
  index=2,
  name="name",
  type=1,
  type_name="string",
  comment="作者:怪物名字",
  table="Monster",
},
 type = {
  index=3,
  name="type",
  type=5,
  type_name="Monster.MONSTERTYPE",
  comment="作者:怪物类型。测试自定义枚举",
  table="Monster",
},
 position = {
  index=4,
  name="position",
  type=2,
  type_name="array",
  comment="作者:怪物位置。测试数组",
  table="Monster",
},
 groupposition = {
  index=5,
  name="groupposition",
  type=3,
  type_name="group",
  comment="作者:随便定义的测试用，测试多维数组",
  table="Monster",
},
},

--GTableType table:Monster_Other
Monster_Other = {
 id = {
  index=1,
  name="id",
  type=0,
  type_name="int",
  comment="作者:ID",
  table="Monster_Other",
},
 name = {
  index=2,
  name="name",
  type=1,
  type_name="string",
  comment="作者:名字",
  table="Monster_Other",
},
 imageid = {
  index=3,
  name="imageid",
  type=0,
  type_name="int",
  comment="作者:数值",
  table="Monster_Other",
},
 showformat = {
  index=4,
  name="showformat",
  type=1,
  type_name="string",
  comment="作者:显示的序列化字符串",
  table="Monster_Other",
},
 showformat1 = {
  index=5,
  name="showformat1",
  type=1,
  type_name="string",
  comment="作者:显示的序列化字符串",
  table="Monster_Other",
},
 rate = {
  index=6,
  name="rate",
  type=0,
  type_name="int",
  comment="作者:概率",
  table="Monster_Other",
},
 desc = {
  index=7,
  name="desc",
  type=1,
  type_name="string",
  comment="作者:描述",
  table="Monster_Other",
},
},
}
 return GTableType 
