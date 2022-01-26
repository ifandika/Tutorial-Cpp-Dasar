#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Siswa{// Data Siswa
  int NIS;
  string nama;
  string jurusan;
};

// Function read data in database
void readData(fstream &data, int poisis, Siswa &dataSiswa){
  data.seekp((poisis - 1)*sizeof(Siswa), ios::beg);
  data.read(reinterpret_cast<char*>(&dataSiswa), sizeof(Siswa));
  
  cout << "NIS    : " << dataSiswa.NIS << endl;
  cout << "Nama   : " << dataSiswa.nama << endl;
  cout << "Jurusan: " << dataSiswa.jurusan << endl;
};

int main(){
  
  // read data and display data in consolo
  fstream myFile;
  Siswa siswa1, siswa2, siswa3;
  
  myFile.open("database.bin", ios::in | ios::out | ios::binary);
  
  readData(myFile, 1, siswa1);
  cout << endl;
  readData(myFile, 2, siswa2);
  cout << endl;
  readData(myFile, 3, siswa3);
  
  myFile.close();
  
  cin.get();
  return 0;
}