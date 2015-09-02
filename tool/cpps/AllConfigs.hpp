/********************************************************************
Filename:AllConfigs.h

Description:AllConfigs

Version:  1.0
Created time: 09/02/15 17:13:59
Revison:  none
Compiler: gcc vc

Author:   wufan, love19862003@163.com

Organization:
*********************************************************************/
#ifndef __ALLCONFIGS_H__
#define __ALLCONFIGS_H__
#include "ProManagerConfig.pb.h"
#include <memory>
namespace ProConfigSpace{

	class AllConfigs{
		private:
			class Impl;
			std::shared_ptr<Impl> m_impl;
		public:
			const std::string& version() const;
			AllConfigs();
			virtual ~AllConfigs();
			bool init(const std::string& path, const std::string&);
			//table MonsterConfig interface
			const MonsterConfig&  monster(const int monsterid) const ;
			bool  has_monster(const int monsterid) const ;
			const ::google::protobuf::RepeatedPtrField<MonsterConfig>& monster() const;
			//::google::protobuf::RepeatedPtrField<MonsterConfig>* mutable_monster();

			//table ItemBaseConfig interface
			const ItemBaseConfig&  itembase(const int itemid) const ;
			bool  has_itembase(const int itemid) const ;
			const ::google::protobuf::RepeatedPtrField<ItemBaseConfig>& itembase() const;
			//::google::protobuf::RepeatedPtrField<ItemBaseConfig>* mutable_itembase();

			//table DropConfig interface
			const DropConfig&  drop(const int id) const ;
			bool  has_drop(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<DropConfig>& drop() const;
			//::google::protobuf::RepeatedPtrField<DropConfig>* mutable_drop();

			//table Monster_OtherConfig interface
			const Monster_OtherConfig&  monster_other(const int id) const ;
			bool  has_monster_other(const int id) const ;
			const ::google::protobuf::RepeatedPtrField<Monster_OtherConfig>& monster_other() const;
			//::google::protobuf::RepeatedPtrField<Monster_OtherConfig>* mutable_monster_other();

			//table ItemShowConfig interface
			const ItemShowConfig&  itemshow(const int show_id) const ;
			bool  has_itemshow(const int show_id) const ;
			const ::google::protobuf::RepeatedPtrField<ItemShowConfig>& itemshow() const;
			//::google::protobuf::RepeatedPtrField<ItemShowConfig>* mutable_itemshow();

			//table ItemSellConfig interface
			const ItemSellConfig&  itemsell(const int sell_id) const ;
			bool  has_itemsell(const int sell_id) const ;
			const ::google::protobuf::RepeatedPtrField<ItemSellConfig>& itemsell() const;
			//::google::protobuf::RepeatedPtrField<ItemSellConfig>* mutable_itemsell();

	};
}
#endif
