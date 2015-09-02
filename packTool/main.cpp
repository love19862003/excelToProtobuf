/********************************************************************

  Filename:   main

  Description:main

  Version:  1.0
  Created:  15:4:2015   16:11
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "LoadExcelData.h"
#include <iostream>


int main(int argc, char* argv[]) {
  
    std::string  tt = "test.xls";
    if (argc > 1){
      std::cout << argv[1] << std::endl;
      tt = argv[1];
    }
    ToolSpace::TableManager m(tt.c_str());
    if(!m.run()) { ; }
    return 0;
}