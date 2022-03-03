#include <iostream>
#include <string>
#include <fstream>
#include <limits>
using namespace std;

struct Siswa{// Data Siswa
  int PK;
  string nama;
  string jurusan;
  string NIS;
};

// Prototipe Function
int getMenu();// Menu Program
void get_CheckDatabase(fstream &);// Check database
int get_CheckSize(fstream &);// Check size data struct
Siswa get_ReadDataSiswa(fstream &, int posisi);// Read data Siswa in database
void get_WriteData(fstream &, int nomer, Siswa &dataSiswa);// Write data Siswa in database
void get_AddSiswa(fstream &);// Add Siswa
void get_DisplayData(fstream &);// Display data Siswa in consolo
void get_UpdateData(fstream &);// Update data Student

// Body
int main(){
  fstream Data;
  
  get_CheckDatabase(Data);
  cout << endl;
  
  int input = getMenu();
  char isContinue;
  
  enum Alias{CREATE = 1, READ, UPDATE, DELETE, FINISH};
  
  while (input != FINISH){
    // Bisa juga menggunakan if else
    switch (input){
      case CREATE:
        cout << ">> Create New Student <<" << endl;
        get_AddSiswa(Data);
        break;
      case READ:
        cout << ">> Display Student <<" << endl;
        get_DisplayData(Data);
        break;
      case UPDATE:
        cout << ">> Update Student <<" << endl;
        get_DisplayData(Data);
        get_UpdateData(Data);
        break;
      case DELETE:
        cout << ">> Delete Student <<" << endl;
        break;
      default:
        cout << ">> Input Not Found <<" << endl;
    }
    
    // label
    labelReturn:
    
    cout << "Continue in menu program (y/n): ";                
    cin >> isContinue;
    
    if ((isContinue == 'y') | (isContinue == 'Y')){
      input = getMenu();
    }
    else if ((isContinue == 'n') | (isContinue == 'N')){
      break;
    }
    else {
      goto labelReturn;
    }
  }
  
  cout << "Program Finished" << endl;
  Data.close();
  
  cin.get();
  return 0;
}
// Function

// Menu Program
int getMenu(){
  int getInput;
  // Refresh menu
  system("clear");
  cout << "Program CRUD Student" << endl;
  cout << "Menu Program: " << endl;
  cout << "1. Create New Data Student" << endl;
  cout << "2. Read Data Student" << endl;
  cout << "3. Update Data Student" << endl;
  cout << "4. Delete Data Student" << endl;
  cout << "5. Finish" << endl;
  cout << endl;
  
  cout << "Enter your menu program [1-5]: ";
  cin >> getInput;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  return getInput;
};
// Step² Menu Create

// • Check database
// • Check Size 1 buah data struct
// • Read data untuk menentukan pk
// • Add data siswa
// • Write data in database

// Check database
void get_CheckDatabase(fstream &data){
  data.open("database.bin", ios::out | ios::in | ios::binary);
  
  if (data.is_open()){
    cout << "Database found" << endl;
  }
  else {
    cout << "Database not found" << endl;
    data.close();
    data.open("database.bin", ios::trunc | ios::out | ios::in | ios::binary);
  }
};

// Check size data struct
int get_CheckSize(fstream &data){
  int begin, end;
  data.seekg(0, ios::beg);
  begin = data.tellg();
  data.seekg(0, ios::end);
  end = data.tellg();
  
  return (end - begin)/sizeof(Siswa);
};

// Read data Siswa in database
Siswa get_ReadDataSiswa(fstream &data, int posisi){
  Siswa getReadSiswa;
  data.seekg((posisi - 1)*sizeof(Siswa), ios::beg);
  data.read(reinterpret_cast<char*>(&getReadSiswa), sizeof(Siswa));
  
  return getReadSiswa;
};

// Write data in database
void get_WriteData(fstream &data, int nomer, Siswa &dataSiswa){
  data.seekp((nomer - 1)*sizeof(Siswa), ios::beg);
  data.write(reinterpret_cast<char*>(&dataSiswa), sizeof(Siswa));
};

// Add Siswa
void get_AddSiswa(fstream &data){
  Siswa inputSiswa, getPkSiswa;
  
  int index = get_CheckSize(data);
  cout << "Size data: " << index << endl;
  
  if (index == 0){
    inputSiswa.PK = 0;
    cout << "PK: " << inputSiswa.PK << endl;
  }
  else {
    getPkSiswa = get_ReadDataSiswa(data, index);
    cout << "PK: " << getPkSiswa.PK << endl;
    inputSiswa.PK = getPkSiswa.PK + 1;
  }
  
  cout << "Enter your NIS: ";
  getline(cin, inputSiswa.NIS);
  cout << "Enter your name: ";
  getline(cin, inputSiswa.nama);
  cout << "Enter your jurusan: ";
  getline(cin, inputSiswa.jurusan);
  
  get_WriteData(data, index + 1, inputSiswa);
};

// Step² Display / Read data in consolo

// • Read data in database
// • Display data in consolo

void get_DisplayData(fstream &data){
  Siswa displaySiswa;
  int size = get_CheckSize(data);
  
  cout << "No: \t| PK: \t| NIS: \t| Nama: \t| Jurusan: " << endl;
  for (int index = 1; index <= size; index++){
    displaySiswa = get_ReadDataSiswa(data, index);
    
    cout << index << " \t|";
    cout << displaySiswa.PK << " \t| ";
    cout << displaySiswa.NIS << " \t| ";
    cout << displaySiswa.nama << "  \t| ";
    cout << displaySiswa.jurusan << endl;
  }
}

// Update data
void get_UpdateData(fstream &data){
  int nomer;
  Siswa updateSiswa;
  
  cout << "Enter number data: ";
  cin >> nomer;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  updateSiswa = get_ReadDataSiswa(data, nomer);
  
  cout << ">>> Data di pilih <<<" << endl;
  cout << "NIS    : " << updateSiswa.NIS << endl;
  cout << "Nama   : " << updateSiswa.nama << endl;
  cout << "Jurusan: " << updateSiswa.jurusan << endl;
  cout << endl;
  
  cout << ">>> Update Data Student <<<" << endl;
  cout << "Update NIS    : ";
  getline(cin, updateSiswa.NIS);
  cout << "Update nama   : ";
  getline(cin, updateSiswa.nama);
  cout << "Update Jurusan: ";
  getline(cin, updateSiswa.jurusan);
  
  get_WriteData(data, nomer, updateSiswa);
}
