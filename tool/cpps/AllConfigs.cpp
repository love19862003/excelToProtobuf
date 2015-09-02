/********************************************************************
Filename:AllConfigs.cpp

Description:AllConfigs

Version:  1.0
Created : 09/02/15 16:58:35
Revison:  none
Compiler: gcc vc

Author:   wufan, love19862003@163.com

Organization:
*********************************************************************/
#include "AllConfigs.h"
#include <fstream>  
#include <iostream>  
namespace ProConfigSpace{

	class AllConfigs::Impl{
		public:
			Impl(){;}
			~Impl(){;}
			const std::string& version() const { return m_configs.version();}
			bool init(const std::string& path){
				using namespace std;
				fstream dataput(path.c_str(), ios::in | ios::binary );
				if(!m_configs.ParseFromIstream(&dataput)){
					cerr << "Failed to parse from file" << path << endl;
					return false;
				}
				setupMapping();
				return true;
			}
			//table MonsterConfig interface
			const MonsterConfig&  monster(const int monsterid) const {
				return *(m_monsterMap.at(monsterid));
			}
			bool  has_monster(const int monsterid) const {
				return m_monsterMap.count(monsterid) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<MonsterConfig>& monster() const{
				return m_configs.monster();
			}
			//::google::protobuf::RepeatedPtrField<MonsterConfig>* mutable_monster(){

				//return m_configs.mutable_monster();
			//}
			//table ItemBaseConfig interface
			const ItemBaseConfig&  itembase(const int itemid) const {
				return *(m_itembaseMap.at(itemid));
			}
			bool  has_itembase(const int itemid) const {
				return m_itembaseMap.count(itemid) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ItemBaseConfig>& itembase() const{
				return m_configs.itembase();
			}
			//::google::protobuf::RepeatedPtrField<ItemBaseConfig>* mutable_itembase(){

				//return m_configs.mutable_itembase();
			//}
			//table DropConfig interface
			const DropConfig&  drop(const int id) const {
				return *(m_dropMap.at(id));
			}
			bool  has_drop(const int id) const {
				return m_dropMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<DropConfig>& drop() const{
				return m_configs.drop();
			}
			//::google::protobuf::RepeatedPtrField<DropConfig>* mutable_drop(){

				//return m_configs.mutable_drop();
			//}
			//table Monster_OtherConfig interface
			const Monster_OtherConfig&  monster_other(const int id) const {
				return *(m_monster_otherMap.at(id));
			}
			bool  has_monster_other(const int id) const {
				return m_monster_otherMap.count(id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<Monster_OtherConfig>& monster_other() const{
				return m_configs.monster_other();
			}
			//::google::protobuf::RepeatedPtrField<Monster_OtherConfig>* mutable_monster_other(){

				//return m_configs.mutable_monster_other();
			//}
			//table ItemShowConfig interface
			const ItemShowConfig&  itemshow(const int show_id) const {
				return *(m_itemshowMap.at(show_id));
			}
			bool  has_itemshow(const int show_id) const {
				return m_itemshowMap.count(show_id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ItemShowConfig>& itemshow() const{
				return m_configs.itemshow();
			}
			//::google::protobuf::RepeatedPtrField<ItemShowConfig>* mutable_itemshow(){

				//return m_configs.mutable_itemshow();
			//}
			//table ItemSellConfig interface
			const ItemSellConfig&  itemsell(const int sell_id) const {
				return *(m_itemsellMap.at(sell_id));
			}
			bool  has_itemsell(const int sell_id) const {
				return m_itemsellMap.count(sell_id) > 0;
			}
			const ::google::protobuf::RepeatedPtrField<ItemSellConfig>& itemsell() const{
				return m_configs.itemsell();
			}
			//::google::protobuf::RepeatedPtrField<ItemSellConfig>* mutable_itemsell(){

				//return m_configs.mutable_itemsell();
			//}
		private:
			void setupMapping(){
				//setup table monster to  Map
				if(true){
					m_monsterMap.clear();
					const ::google::protobuf::RepeatedPtrField<MonsterConfig>& _monster = monster();
					for(::google::protobuf::RepeatedPtrField<MonsterConfig>::const_iterator it = _monster.begin(); it != _monster.end(); ++it){
						m_monsterMap.insert(std::make_pair(it->monsterid(), &(*it)));
					}
				}
				//setup table itembase to  Map
				if(true){
					m_itembaseMap.clear();
					const ::google::protobuf::RepeatedPtrField<ItemBaseConfig>& _itembase = itembase();
					for(::google::protobuf::RepeatedPtrField<ItemBaseConfig>::const_iterator it = _itembase.begin(); it != _itembase.end(); ++it){
						m_itembaseMap.insert(std::make_pair(it->itemid(), &(*it)));
					}
				}
				//setup table drop to  Map
				if(true){
					m_dropMap.clear();
					const ::google::protobuf::RepeatedPtrField<DropConfig>& _drop = drop();
					for(::google::protobuf::RepeatedPtrField<DropConfig>::const_iterator it = _drop.begin(); it != _drop.end(); ++it){
						m_dropMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table monster_other to  Map
				if(true){
					m_monster_otherMap.clear();
					const ::google::protobuf::RepeatedPtrField<Monster_OtherConfig>& _monster_other = monster_other();
					for(::google::protobuf::RepeatedPtrField<Monster_OtherConfig>::const_iterator it = _monster_other.begin(); it != _monster_other.end(); ++it){
						m_monster_otherMap.insert(std::make_pair(it->id(), &(*it)));
					}
				}
				//setup table itemshow to  Map
				if(true){
					m_itemshowMap.clear();
					const ::google::protobuf::RepeatedPtrField<ItemShowConfig>& _itemshow = itemshow();
					for(::google::protobuf::RepeatedPtrField<ItemShowConfig>::const_iterator it = _itemshow.begin(); it != _itemshow.end(); ++it){
						m_itemshowMap.insert(std::make_pair(it->show_id(), &(*it)));
					}
				}
				//setup table itemsell to  Map
				if(true){
					m_itemsellMap.clear();
					const ::google::protobuf::RepeatedPtrField<ItemSellConfig>& _itemsell = itemsell();
					for(::google::protobuf::RepeatedPtrField<ItemSellConfig>::const_iterator it = _itemsell.begin(); it != _itemsell.end(); ++it){
						m_itemsellMap.insert(std::make_pair(it->sell_id(), &(*it)));
					}
				}
			}
		private:
			ProManagerConfig m_configs;
			std::map<int, const MonsterConfig*> m_monsterMap;
			std::map<int, const ItemBaseConfig*> m_itembaseMap;
			std::map<int, const DropConfig*> m_dropMap;
			std::map<int, const Monster_OtherConfig*> m_monster_otherMap;
			std::map<int, const ItemShowConfig*> m_itemshowMap;
			std::map<int, const ItemSellConfig*> m_itemsellMap;
	};
	// add interface
	AllConfigs::AllConfigs():m_impl(new Impl){
	}
	AllConfigs::~AllConfigs(){
		m_impl.reset();
	}
	const std::string& AllConfigs::version() const { return m_impl->version();}
	bool AllConfigs::init(const std::string& path, const std::string& ) { return m_impl->init(path);}

	//table MonsterConfig
	const MonsterConfig&  AllConfigs::monster(const int monsterid) const {
		return m_impl->monster(monsterid);
	}
	bool  AllConfigs::has_monster(const int monsterid) const {
		return m_impl->has_monster(monsterid);
	}
	const ::google::protobuf::RepeatedPtrField<MonsterConfig>& AllConfigs::monster() const{
		return m_impl->monster();
	}
	//::google::protobuf::RepeatedPtrField<MonsterConfig>* AllConfigs::mutable_monster(){
		//return m_impl->mutable_monster();
	//}

	//table ItemBaseConfig
	const ItemBaseConfig&  AllConfigs::itembase(const int itemid) const {
		return m_impl->itembase(itemid);
	}
	bool  AllConfigs::has_itembase(const int itemid) const {
		return m_impl->has_itembase(itemid);
	}
	const ::google::protobuf::RepeatedPtrField<ItemBaseConfig>& AllConfigs::itembase() const{
		return m_impl->itembase();
	}
	//::google::protobuf::RepeatedPtrField<ItemBaseConfig>* AllConfigs::mutable_itembase(){
		//return m_impl->mutable_itembase();
	//}

	//table DropConfig
	const DropConfig&  AllConfigs::drop(const int id) const {
		return m_impl->drop(id);
	}
	bool  AllConfigs::has_drop(const int id) const {
		return m_impl->has_drop(id);
	}
	const ::google::protobuf::RepeatedPtrField<DropConfig>& AllConfigs::drop() const{
		return m_impl->drop();
	}
	//::google::protobuf::RepeatedPtrField<DropConfig>* AllConfigs::mutable_drop(){
		//return m_impl->mutable_drop();
	//}

	//table Monster_OtherConfig
	const Monster_OtherConfig&  AllConfigs::monster_other(const int id) const {
		return m_impl->monster_other(id);
	}
	bool  AllConfigs::has_monster_other(const int id) const {
		return m_impl->has_monster_other(id);
	}
	const ::google::protobuf::RepeatedPtrField<Monster_OtherConfig>& AllConfigs::monster_other() const{
		return m_impl->monster_other();
	}
	//::google::protobuf::RepeatedPtrField<Monster_OtherConfig>* AllConfigs::mutable_monster_other(){
		//return m_impl->mutable_monster_other();
	//}

	//table ItemShowConfig
	const ItemShowConfig&  AllConfigs::itemshow(const int show_id) const {
		return m_impl->itemshow(show_id);
	}
	bool  AllConfigs::has_itemshow(const int show_id) const {
		return m_impl->has_itemshow(show_id);
	}
	const ::google::protobuf::RepeatedPtrField<ItemShowConfig>& AllConfigs::itemshow() const{
		return m_impl->itemshow();
	}
	//::google::protobuf::RepeatedPtrField<ItemShowConfig>* AllConfigs::mutable_itemshow(){
		//return m_impl->mutable_itemshow();
	//}

	//table ItemSellConfig
	const ItemSellConfig&  AllConfigs::itemsell(const int sell_id) const {
		return m_impl->itemsell(sell_id);
	}
	bool  AllConfigs::has_itemsell(const int sell_id) const {
		return m_impl->has_itemsell(sell_id);
	}
	const ::google::protobuf::RepeatedPtrField<ItemSellConfig>& AllConfigs::itemsell() const{
		return m_impl->itemsell();
	}
	//::google::protobuf::RepeatedPtrField<ItemSellConfig>* AllConfigs::mutable_itemsell(){
		//return m_impl->mutable_itemsell();
	//}
}
