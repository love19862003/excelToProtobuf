/********************************************************************

  Filename:   LoadExcelData

  Description:LoadExcelData

  Version:  1.0
  Created:  15:4:2015   10:10
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __LoadExcelData_H__
#define __LoadExcelData_H__
#include <string>
#include <list>
#include <map>
#include <set>
#include <vector>
#include "MapTemplate.h"
namespace ToolSpace {

  enum TypeEnum{
    TYPE_INT = 0,             //int 类型
    TYPE_STRING = 1,          //字符串类型
    TYPE_ARRAY = 2,           //数组类型
    TYPE_GROUP = 3,           //多维数组类型
    TYPE_ENUM = 4,            //枚举类型
    TYPE_SELF = 5,            //自定义类型枚举(具体的枚举类型)
    TYPE_NODERIVE = 6,        //注释
    TYPE_MAX,
  };

  enum {
    row_name = 0,   //字段名
    row_type = 1,   //字段类型
    col_id = 0,     //ID
    col_file = 0,
    col_name = 1,
    col_becheck = 0,
    col_check_condition = 1,
  };

  //枚举定义
  struct stEnumValue {
    std::string name;       //枚举值名字       
    int value;              //枚举定义的值
    std::string comment;    //注释
  };
  struct stEnum {
    std::string fullName;   //枚举全名字   table.name
    std::string table;      //表名字       table
    std::string name;       //枚举名字      name
    std::map<std::string, stEnumValue>  values; //枚举定义值

    bool operator < (const stEnum& l) const{
     return fullName < l.fullName;
    }
  };
 
  //数据头定义
  struct stField {
    std::string name;     //字段名字
    TypeEnum type;        //字段类型
    int index;            //字段下标
    std::string type_name;//类型名字
    std::string comment;  //注释
    std::string table;    //所属表
  };

  //数据记录
  struct stValue {
    int index;
    std::string value;
  };
  //表的一条记录
  struct  stRecord {
    int id;                           //记录ID
    ObjectMap<int, stValue> record;   //详细的记录数据
  };

  //数据检测
  struct stCheckParam {
    enum CCType {
      _NONE_ = 0,       //不需要检测
      _ENUM_ = 1,       //检测是否在枚举范围
      _HEAD_ = 2,       //检测在表里是否有数据
      _INT_= 3,         //int值
    };
    std::shared_ptr<stField> head;     //需要检测的定义
    std::shared_ptr<stEnum> en;       //需要检测的枚举
    stEnumValue env;      //枚举数值
    CCType type;          //类型
    int index;            //第几个参数
  };
  
  typedef  std::vector<stCheckParam> VParams;
  struct stCheckField {
    int index;                     //检测的字段的ID
    std::vector<VParams> check_in; //检测的条件
  };
  //单个表的检测
  struct stTableCheck {
    std::string table;
    std::map < std::string, stCheckField> checks;
  };
  class Table
  {
  public:
    typedef ObjPtrMap<int, stRecord> RecordMap;
    typedef RecordMap::value_type ReacordPtr;
    typedef ObjPtrMap<int, stField> FieldMap;
    typedef FieldMap::value_type FieldPtr;

    explicit Table(const char* name);
    ~Table();
    const std::string&  tableName() const;              //表名字
    
    bool addField(std::shared_ptr<stField>  head);        //增加一个表字段
    bool addRecord(int index, std::shared_ptr<stRecord> record);

    const RecordMap& recordMap() const;
    const FieldMap& fieldMap() const;

    const FieldPtr& getField(int index) const { return m_heads.getData(index); }
    const FieldPtr& getField(const std::string& name) const;

    const ReacordPtr& getRecord(int id) const { return m_records.getData(id); }
  protected:
    Table& operator = (const Table&) = delete;
    Table(const Table&) = delete;
  private:
    FieldMap m_heads;      //类型数据定义
    RecordMap m_records;  //具体数据
    std::string m_name;   //表明
  };


  class TableManager
  {
  public:
    explicit TableManager( const char* file);
    ~TableManager();
    bool run();

    struct stPackMapping {
      std::string file;
      std::set<std::string> list;
    };
  private:
    typedef ObjPtrMap<std::string, Table> TableMap;
    typedef TableMap::value_type TablePtr;
    typedef ObjPtrMap<std::string, stPackMapping> PackMap;
    typedef PackMap::value_type PackMappingPtr;
    typedef ObjPtrMap<std::string, stEnum>EnumMap;
    typedef EnumMap::value_type EnumPtr;
    typedef ObjPtrMap<std::string, stTableCheck> CheckMap;
    typedef CheckMap::value_type CheckPtr;
  protected:
    TableManager& operator = (const TableManager&) = delete;
    TableManager(const TableManager&) = delete;

    bool loadEnumFile(PackMappingPtr ptr);    //加载枚举定义文件
    bool loadRecordFile(PackMappingPtr ptr);  //加载要打包的表的文件
    bool loadCheckFile(PackMappingPtr ptr);   //加载检测的表的文件

    bool isXLSX(const std::string&  str) const;     //是否是excel2007

    stCheckParam getCheckParam(const std::string& str, int index);   //创建检测参数

    TypeEnum getType(const std::string& t) const;   //获取定义的类型

    void log(const std::string& error) const;       //log error
    bool check() const;                       //做一些简单的检测, 例如玩家定义的枚举值是否存在. 字段是否存在
    void commonDefine(const std::string&);    //common.proto
    void exportToLua();                       //导出到lua文件
  private:
    //读取全局配置的枚举定义
    enum {
      NAME_SPACE_INDEX = 0,                             //命名空间的col
      ALL_CONFIG_NAME = 1,                              //输出管理类名字的col
      CONFIG_TAIL_NAME = 2,                             //输出的proto的追加尾部名字定义col
      OUT_MANAGER_FILE_NAME = 3,                        //输出名字的Col
      OUT_DIR = 4,                                      //输出目录Col
      EXCEL_DIR = 5,                                    //excel输出目录Col
    };

     
    enum {
      ENUM_DEFINE_INDEX = 0,                            //枚举定义文件的sheet index
      EXCEL_TO_PACK_INDEX = 1,                          //需要打包的文件的sheet index
      OUT_SET_INDEX = 2,                                //输出文件的sheet index
      CHECK_SET_INDEX = 3,                              //检测文件的sheet index
    };
    TableMap m_tables;                                      //所有记录
    PackMap m_packRecordMap;                                //打包文件名字映射
    PackMap m_packEnumMap;                                  //枚举文件映射
    PackMap m_packCheckMap;                                 //数据检测文件映射
    std::string m_fileName;                                 //打开文件名字
    ObjPtrMap<std::string,stEnum> m_ens;                    //枚举列表
    CheckMap m_checks;                                      //数值检测的定义
    std::string m_nameSpace;                                //命名空间
    std::string m_allConfigName;                            //所有配置名字
    std::string m_configTailName;                           //生成尾部名字
    std::string m_outDir;                                   //输出目录
    std::string m_excelDir;                                 //excel输出目录
    std::string m_outFileName = "AllConfig";                //输出的管理类的名字
    std::string m_commonDefineName = "ConfigTypeGroup";     //group的子定义名字

    mutable std::fstream* m_logStream;
  };
}

#endif