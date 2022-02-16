#include <iostream>
#include <fstream>

using namespace std;

int main(){
  
  // membaca file biner
  fstream readFile;
  
  int output;
  
  readFile.open("data.bin", ios::in | ios::binary);
  
  // method membaca file biner
  // contoh
  // readFile.read(reinterpret_cast<char*>(&output), sizeof(int));
  // cout << output << endl;
  
  readFile.read(reinterpret_cast<char*>(&output), sizeof(int));
  cout << output << endl;
  readFile.read(reinterpret_cast<char*>(&output), sizeof(int));
  cout << output << endl;
  readFile.read(reinterpret_cast<char*>(&output), sizeof(int));
  cout << output << endl;
  
  readFile.close();
  
  cin.get();
  return 0;
}