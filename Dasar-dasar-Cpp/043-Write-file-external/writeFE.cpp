#include <iostream>
#include <fstream> // library file stream
// gabungan dari = <ofstream> + <ifstream> menjadi satu <fstream>
#include <string>

using namespace std;

int main(){
  
  // menggunakan simbol ( << )
  // ofstream = output file stream
  
  // ios::app = menuliska  data pada baris baru
  // ios::trunc = default,  membuat file baru, jika ada tetap di buat dan file lama akan dihapus
  // ios::out = default,  memberikan output ke file, menuliskan data ke file
  
  // jika method lebih dari 1, gunakan simbol ( | )
  
  // .open()  = membuka file
  // .close() = menutup file
  
  // deklarasi untuk write file external
  ofstream myFile;
  
  myFile.open("data1.txt");// open
  myFile << "menuliskan data ke file external" << endl;
  myFile << "menuliskan dengan ofstream" << endl;
  myFile.close();// close
  
  myFile.open("data2.txt", ios::out | ios::trunc);
  myFile << "menuliskan data ke file external dengan method truc" << endl;
  myFile << "ini data 2" << endl;
  myFile.close();
  
  myFile.open("data3.txt", ios::out | ios::app);
  myFile << "menuliskan data dengan method ios::app" << endl;
  myFile << "menuliskan data ke file data3.txt" << endl;
  myFile << "menambahkan baris baru" << endl;
  myFile.close();
  
  // menuliskan integer ke dalam file
  int nilai = 1455368;
  myFile.open("data4.txt", ios::out);
  myFile << "menuliskan nilai integer ke file\n";
  myFile << nilai << endl;
  myFile.close();
  
  cin.get();
  return 0;
}