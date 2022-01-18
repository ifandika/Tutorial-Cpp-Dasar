#include <iostream>
#include <fstream>
#include <limits>
#include <string>

// int getMenu();// Menu Program
// void get_CheckDatabase(std::fstream &);// Check database
// int get_CheckSize(std::fstream &);// Check size data struct
// Siswa get_ReadDataSiswa(std::fstream &, int posisi);// Read data Siswa in database
// void get_WriteData(std::fstream &, int nomer);// Write data Siswa in database
// void get_AddSiswa(std::fstream &);// Add Siswa
// void get_DisplayData(std::fstream &);// Display data Siswa in consolo
// void get_UpdateData(std::fstream &);// Update data Student
// void get_DeleteData(std::fstream &);// Delete data Student

/* Data Siswa */
struct Siswa{
  int PK;
  std::string nama;
  std::string jurusan;
  std::string NIS;
};

namespace crud{
  
  int getMenu(){
    int getInput;
    // Refresh menu
    // system("cls")   = windows   
    system("clear");// = macOS, linux etc
    std::cout << "Project CRUD Multi File\n";
    std::cout << "Program CRUD Student\n";
    std::cout << "Menu Program: \n";
    std::cout << "[ 1 ] Create New Data Student\n";
    std::cout << "[ 2 ] Read Data Student\n";
    std::cout << "[ 3 ] Update Data Student\n";
    std::cout << "[ 4 ] Delete Data Student\n";
    std::cout << "[ 5 ] Finish\n";
    std::cout << std::endl;
  
    std::cout << "Enter your menu program [1-5]: ";
    std::cin >> getInput;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  
    return getInput;
  }
    // Step² Menu Create

    // • Check database
    // • Check Size 1 buah data struct
    // • Read data untuk menentukan pk
    // • Add dat.a siswa
    // • Write data in database

    // Check database
  void get_CheckDatabase(std::fstream &data){
    data.open("database.bin", std::ios::out | std::ios::in | std::ios::binary);
  
    if (data.is_open()){
      std::cout << "<< Database found >>\n";
    }
    else {
      std::cout << "<< Database not found >>\n";
      data.close();
      data.open("database.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    }
  }

  // Check size data struct
  int get_CheckSize(std::fstream &data){
    int begin, end;
    data.seekg(0, std::ios::beg);
    begin = data.tellg();
    data.seekg(0, std::ios::end);
    end = data.tellg();
  
    return (end - begin)/sizeof(Siswa);
  }

  // Read data Siswa in database
  Siswa get_ReadDataSiswa(std::fstream &data, int posisi){
    Siswa getReadSiswa;
    data.seekg((posisi - 1)*sizeof(Siswa), std::ios::beg);
    data.read(reinterpret_cast<char*>(&getReadSiswa), sizeof(Siswa));
  
    return getReadSiswa;
  }

  // Write data in database
  void get_WriteData(std::fstream &data, int nomer, Siswa &dataSiswa){
    data.seekp((nomer - 1)*sizeof(Siswa), std::ios::beg);
    data.write(reinterpret_cast<char*>(&dataSiswa), sizeof(Siswa));
  }

  // Add Siswa
  void get_AddSiswa(std::fstream &data){
    Siswa inputSiswa, getPkSiswa;
  
    int index = get_CheckSize(data);
    std::cout << "Size data: " << index << std::endl;
  
    if (index == 0){
      inputSiswa.PK = 0;
      std::cout << "PK: " << inputSiswa.PK << std::endl;
    }
    else {
      getPkSiswa = get_ReadDataSiswa(data, index);
      std::cout << "PK: " << getPkSiswa.PK << std::endl;
      inputSiswa.PK = getPkSiswa.PK + 1;
    }
  
    std::cout << "Enter your NIS: ";
    getline(std::cin, inputSiswa.NIS);
    std::cout << "Enter your name: ";
    getline(std::cin, inputSiswa.nama);
    std::cout << "Enter your jurusan: ";
    getline(std::cin, inputSiswa.jurusan);
  
    get_WriteData(data, index + 1, inputSiswa);
  }

  // Step² Display / Read data in consolo

  // • Read data in database
  // • Display data in consolo

  void get_DisplayData(std::fstream &data){
    Siswa displaySiswa;
    int size = get_CheckSize(data);
  
    std::cout << "No: \t| PK: \t| NIS: \t| Nama: \t| Jurusan: " << std::endl;
    std::cout << std::endl;
    
    for (int index = 1; index <= size; index++){
      displaySiswa = get_ReadDataSiswa(data, index);
    
      std::cout << index << " \t|";
      std::cout << displaySiswa.PK << " \t| ";
      std::cout << displaySiswa.NIS << " \t| ";
      std::cout << displaySiswa.nama << "  \t| ";
      std::cout << displaySiswa.jurusan << std::endl;
    }
  }

  // Update data
  void get_UpdateData(std::fstream &data){
    int nomer;
    Siswa updateSiswa;
  
    std::cout << "Enter number data: ";
    std::cin >> nomer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  
    updateSiswa = get_ReadDataSiswa(data, nomer);
  
    std::cout << ">>> Data di pilih <<<" << std::endl;
    std::cout << "NIS    : " << updateSiswa.NIS << std::endl;
    std::cout << "Nama   : " << updateSiswa.nama << std::endl;
    std::cout << "Jurusan: " << updateSiswa.jurusan << std::endl;
    std::cout << std::endl;
  
    std::cout << ">>> Update Data Student <<<\n";
    std::cout << "Update NIS    : ";
    getline(std::cin, updateSiswa.NIS);
    std::cout << "Update nama   : ";
    getline(std::cin, updateSiswa.nama);
    std::cout << "Update Jurusan: ";
    getline(std::cin, updateSiswa.jurusan);
  
    get_WriteData(data, nomer, updateSiswa);
  }

  // Delete data Student
  void get_DeleteData(std::fstream &data){
    int nomerData, size, offset;
    Siswa blankSiswa, tempSiswa;
    std::fstream dataSementara;
  
    size = get_CheckSize(data);
    // 1. Pilih nomer data
    std::cout << "Enter number data with delete: ";
    std::cin >> nomerData;
  
    // 2. Tulis data yang akan di hapus ke dalam blankSiswa
    get_WriteData(data, nomerData, blankSiswa);
  
    // 3. Check data kosong di database.bin, jika ada maka
    //    maka kita pindahkan semua data database.bin ke dataSementara
    dataSementara.open("data.dat", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
  
    offset = 0;
  
    for (int iLoop = 1; iLoop <= size; iLoop++){
  
      tempSiswa = get_ReadDataSiswa(data, iLoop);
    
      if (!tempSiswa.nama.empty()){
        get_WriteData(dataSementara, iLoop - offset, tempSiswa);
      }
      else {
        offset++;
        std::cout << "Delete Item ...." << std::endl;
      }
    }
  
    // 4. Pindahkan data dari dataSementara ke database.bin
    size = get_CheckSize(dataSementara);
  
    data.close();
    data.open("database.bin", std::ios::trunc | std::ios::out | std::ios::binary);
    data.close();
    data.open("database.bin", std::ios::out | std::ios::in | std::ios::binary);
  
    for (int iLoop = 1; iLoop <= size; iLoop++){
      tempSiswa = get_ReadDataSiswa(dataSementara, iLoop);
      get_WriteData(data, iLoop, tempSiswa);
    }
  }
}