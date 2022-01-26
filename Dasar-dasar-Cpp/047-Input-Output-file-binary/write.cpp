#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Siswa{// Data siswa
  int NIS;
  string nama;
  string jurusan;
};

// fungsi write data
void writeData(fstream &data, Siswa &siswa){                
  data.write(reinterpret_cast<char*>(&siswa), sizeof(Siswa));
};
// fungsi ubah data Siswa
void updateData(fstream &data, int posisi, Siswa &siswa){
  data.seekg((posisi - 1)*sizeof(Siswa), ios::beg);
  data.write(reinterpret_cast<char*>(&siswa), sizeof(Siswa));
};

int main(){
  fstream myFile;
  Siswa siswa1, siswa2, siswa3;
  
  myFile.open("database.bin", ios::out | ios::binary);
  
  // data siswa1
  siswa1.NIS = 10;
  siswa1.nama = "Jupri";
  siswa1.jurusan = "TKj";
  
  // data siswa2
  siswa2.NIS = 11;
  siswa2.nama = "Kipli";
  siswa2.jurusan = "TM";
  
  // data siswa3
  siswa3.NIS = 12;
  siswa3.nama = "Sopo";
  siswa3.jurusan = "TL";
  
  writeData(myFile, siswa1);
  writeData(myFile, siswa2);
  writeData(myFile, siswa3);
  
  myFile.close();
  
  cin.get();
  return 0;
}