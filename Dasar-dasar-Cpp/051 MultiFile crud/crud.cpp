#include <iostream>
#include <string>
#include <fstream>
#include "function.h"

// Menu Program 
int func::main_Menu(){
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
void func::check_Database(std::fstream &data){
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

// Check Size 1 Buah data Peserta
int func::check_SizeDataPeserta(std::fstream &data){
  int begin, end;
  data.seekg(0, std::ios::beg);
  begin = data.tellg();
  data.seekg(0, std::ios::end);
  end = data.tellg();
  
  return (end - begin)/sizeof(func::Peserta);
}

// Write data
void func::write_DataPeserta(std::fstream &data, int index, func::Peserta &dataPeserta){
  data.seekp((index - 1)*sizeof(func::Peserta), std::ios::beg);
  data.write(reinterpret_cast<char*>(&dataPeserta), sizeof(func::Peserta));
}

// Read data Peserta in database
func::Peserta read_DataPeserta(std::fstream &data, int posisi){
  func::Peserta readPeserta;
  data.seekg((posisi - 1)*sizeof(func::Peserta), std::ios::beg);
  data.read(reinterpret_cast<char*>(&readPeserta), sizeof(func::Peserta));
  
  return readPeserta;
}

// Add peserta
void func::main_AddPeserta(std::fstream &data){
  int size = func::check_SizeDataPeserta(data);
  std::cout << "Size data: " << size << "\n\n";
  
  func::Peserta inputPeserta, pkPeserta;
  
  if (size == 0){
    inputPeserta.PK = 0;
    std::cout << "PK: " << inputPeserta.PK << std::endl;
  }
  else {
    pkPeserta = func::read_DataPeserta(data, size);
    std::cout << "PK: " << pkPeserta.PK << std::endl;
    inputPeserta.PK = pkPeserta.PK + 1;
  }
  
  std::cout << "Enter Nomer lari: ";
  std::getline(std::cin, inputPeserta.No);
  std::cout << "Enter name: ";
  std::getline(std::cin, inputPeserta.Nama);
  std::cout << "Enter your age: ";
  std::getline(std::cin, inputPeserta.Umur);
  
  func::write_DataPeserta(data, size + 1, inputPeserta);
}

// Read / Display data Peserta
void func::main_ReadPeserta(std::fstream &data){
  int size = func::check_SizeDataPeserta(data);
  func::Peserta displayPeserta;
  
  std::cout << "No. \tPK. \tNo Lari  \tNama.  \tUmur. " << std::endl;
  for (int iLoop = 1; iLoop <= size; iLoop++){
    displayPeserta = func::read_DataPeserta(data, iLoop);
    
    std::cout << iLoop << " \t";
    std::cout << displayPeserta.PK << " \t";
    std::cout << displayPeserta.No << "  \t";
    std::cout << displayPeserta.Nama << "  \t";
    std::cout << displayPeserta.Umur << std::endl;
  }
}