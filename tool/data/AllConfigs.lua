--Filename:AllConfigs.lua
--Version:  1.0
--Created time: 09/02/15 16:58:35
local configs={}
local function registerPb(path)
	local addr = io.open(path,"rb")
	local buffer = addr:read "*a"
	addr:close()
	protobuf.register(buffer)
end
configs.init = function(folder,data_file)
	registerPb(string.format("%s/proto/ConfigTypeGroup.pb",folder))
	registerPb(string.format("%s/proto/MonsterConfig.pb",folder))
	registerPb(string.format("%s/proto/ItemBaseConfig.pb",folder))
	registerPb(string.format("%s/proto/DropConfig.pb",folder))
	registerPb(string.format("%s/proto/Monster_OtherConfig.pb",folder))
	registerPb(string.format("%s/proto/ItemShowConfig.pb",folder))
	registerPb(string.format("%s/proto/ItemSellConfig.pb",folder))
	registerPb(string.format("%s/proto/ProManagerConfig.pb",folder))
	local path = string.format("%s/%s",folder,data_file)
	local in_data = assert(io.open(path,"rb"))
	local buffer = in_data:read "*a"
	local data=protobuf.decode("ProConfigSpace.ProManagerConfig", buffer)
	--table Drop
	configs.drop={}
	for k, v in pairs(data.drop) do
		configs.drop[v.id]=v
	end
	--table ItemBase
	configs.itembase={}
	for k, v in pairs(data.itembase) do
		configs.itembase[v.itemid]=v
	end
	--table ItemSell
	configs.itemsell={}
	for k, v in pairs(data.itemsell) do
		configs.itemsell[v.sell_id]=v
	end
	--table ItemShow
	configs.itemshow={}
	for k, v in pairs(data.itemshow) do
		configs.itemshow[v.show_id]=v
	end
	--table Monster
	configs.monster={}
	for k, v in pairs(data.monster) do
		configs.monster[v.monsterid]=v
	end
	--table Monster_Other
	configs.monster_other={}
	for k, v in pairs(data.monster_other) do
		configs.monster_other[v.id]=v
	end
	configs["data_version"]=data.version
	in_data:close()
	return configs
end
return configs
