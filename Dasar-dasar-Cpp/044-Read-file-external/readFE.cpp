#include <iostream>
// fstream = ofstream + ifstream
#include <fstream>
#include <string>
using namespace std;

int main(){
  ifstream myFile;
  string output, nama, buffer;
  int no, data;
  
  // ifstream = input file stream
  // menggunakan simbol 
  // method:
  // ios::in | default ( membaca data file extern )
  // ios::ate ( membaca file dari belakang )
  // ios::binary ( membaca file biner )
  
  myFile.open("data.txt", ios::in);
  
  getline(myFile, output);
  cout << output << endl;
  getline(myFile, output);
  cout << output << endl;
  
  getline(myFile, buffer);
  while (!myFile.eof()){
    myFile >> no;
    myFile >> nama;
    cout << no << " " << nama << endl;
    data++;
  }
  cout << "Jumlah data: " << data << endl;
  
  cin.get();
  return 0;
}