#include <iostream>
#include <string>
#include <fstream>
#include "function.h"

int main(){
  std::fstream Data;
  
  fctn::check_Database(Data);
  
  int select = fctn::main_Menu();
  char isContinue;
  
  enum Alias{CREATE = 1, READ, UPDATE, DELETE, FINISH};
  
  while (select != FINISH){
    switch (select){
      case CREATE:
        std::cout << ">>> CREATE NEW PESERTA <<<" << std::endl;
        break;
      case READ:
        std::cout << ">>> DISPLAY PESERTA <<<" << std::endl;
        break;
      case UPDATE:
        std::cout << ">>> UPDATE PESERTA <<<" << std::endl;
        break;
      case DELETE:
        std::cout << ">>> DELETE PESERTA <<<" << std::endl;
        break;
      default:
        std::cout << "!!! Input Not Foud !!!\n";
    }
    label:
    
    std::cout << "Continue to menu Y/n : ";
    std::cin >> isContinue;
    
    if ((isContinue == 'y') | (isContinue == 'Y')){
      select = fctn::main_Menu();
    }
    else if ((isContinue == 'n') | (isContinue == 'N')){
      break;
    }
    else {
      goto label;
    }
  }
  
  std::cout << ">> PROGRAM END <<" << std::endl;
  return 0;
}