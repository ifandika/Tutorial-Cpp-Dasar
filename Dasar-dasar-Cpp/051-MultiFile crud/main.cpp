#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include "crud.h"

// Latihan MultiFile CRUD dengan Header File
// Jika File Cpp lebih dari 1 maka proses compile harus bersamaan kecuali menggunakan IDE

int main(){
  std::fstream Data;// Data Primary
  
  crud::get_CheckDatabase(Data);
  
  int input = crud::getMenu();
  char isContinue;
  
  enum Alias{CREATE = 1, READ, UPDATE, DELETE, FINISH};
  
  while (input != FINISH){
    // Bisa juga menggunakan if else
    switch (input){
      case CREATE:
        std::cout << ">> Create New Student <<" << std::endl;
        crud::get_AddSiswa(Data);
        break;
      case READ:
        std::cout << ">> Display Student <<" << std::endl;
        crud::get_DisplayData(Data);
        break;
      case UPDATE:
        std::cout << ">> Update Student <<" << std::endl;
        crud::get_DisplayData(Data);
        crud::get_UpdateData(Data);
        break;
      case DELETE:
        std::cout << ">> Delete Student <<" << std::endl;
        crud::get_DisplayData(Data);
        std::cout << std::endl;
        crud::get_DeleteData(Data);
        std::cout << std::endl;
        std::cout << ">>> Delete Success <<<\n\n";
        break;
      default:
        std::cout << ">> Input Not Found ? <<" << std::endl;
    }
    
    // label
    labelReturn:
    
    std::cout << "Continue in menu program (y/n): ";                
    std::cin >> isContinue;
    
    if ((isContinue == 'y') | (isContinue == 'Y')){
      input = crud::getMenu();
    }
    else if ((isContinue == 'n') | (isContinue == 'N')){
      break;
    }
    else {
      goto labelReturn;
    }
  }
  
  std::cout << "<<< Program Finished >>>" << std::endl;
  Data.close();
  
  cin.get();
  return 0;
}