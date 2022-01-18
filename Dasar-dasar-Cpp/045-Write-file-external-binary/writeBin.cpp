#include <iostream>
#include <fstream>
using namespace std;

int main(){
  
  // menuliskan data ke dalam file biner
  fstream writeFile;
  
  int nilai1 = 100;
  int nilai2 = 200;
  int nilai3 = nilai1 + nilai2;
  
  writeFile.open("data.bin", ios::out | ios::binary);
  
  // method menuliskan data ke dalam bentuk file biner
  // contoh::
  // writeFile.write(reinterpret_cast<char*>(&nilai1), sizeof(int));  
  writeFile.write(reinterpret_cast<char*>(&nilai1), sizeof(int));
  writeFile.write(reinterpret_cast<char*>(&nilai2), sizeof(int));
  writeFile.write(reinterpret_cast<char*>(&nilai3), sizeof(int));
  
  writeFile.close();
  
  return 0;
}