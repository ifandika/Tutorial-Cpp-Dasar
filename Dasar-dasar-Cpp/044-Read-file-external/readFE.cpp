#include <iostream>
#include <fstream> // library file stream
// gabungan dari = <ofstream> + <ifstream> menjadi satu <fstream>
#include <string>

using namespace std;

int main(){
  
  ifstream myFile;
  string output, nama;
  bool isData = true;
  int no, jumlahData = 0;
  
  // ifstream = input file stream
  // menggunakan simbol >> 
  
  // ios::in = default,  membaca data file dan me inputkan ke consolo
  // ios::ate = membaca file dari belakang 
  
  myFile.open("data.txt", ios::in);
  
  while(isData){
    getline(myFile, output);
    if (output == "data"){
      isData = false;
    }
    cout << output << endl;
  }
  
  getline(myFile,output);
  cout << output << endl;
  while(!myFile.eof()){
    myFile >> no;
    myFile >> nama;
    
    cout << no << "   " << nama << endl;
    jumlahData++;
  }
  cout << "jumlah data: " << jumlahData << endl;
  
  cin.get();
  return 0;
}