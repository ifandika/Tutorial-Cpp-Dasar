#include <iostream>
#include <string>
#include <fstream>
#include "function.h"

// Menu Program
int fctn::main_Menu(){
  int input;
  std::cout << "[ PROJECT CRUD MULTIFILE ]" << std::endl;
  std::cout << "> Program Peserta Lomba\n";
  std::cout << "[1] Create New Peserta\n";
  std::cout << "[2] Read Peserta\n";
  std::cout << "[3] Update Peserta\n";
  std::cout << "[4] Delete Peserta\n";
  std::cout << "[5] Finish\n\n";
  
  std::cout << "Enter number menu [1-5]: ";
  std::cin >> input;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  
  return input;
}

// Check Database
void fctn::check_Database(std::fstream &data){
  data.open("database.bin", std::ios::out | std::ios::in | std::ios::binary);
  
  if (data.is_open()){
    std::cout << "database Found\n";
  }
  else {
    data.close();
    std::cout << "database not found, Create database...\n";
    data.open("database.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
  }
}

