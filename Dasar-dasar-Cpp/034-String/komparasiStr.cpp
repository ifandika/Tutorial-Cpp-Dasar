#include <iostream>
#include <string>

using namespace std;

int main(){
  
  // komparasi / perbandingan pada string
  string kata("otong");
  
  if (kata == "otong"){
    cout << "berhasil" << endl;
  }
  // program perbandingan 
  bool operasi = true;
  string nama;
  string nama_rahasia("jamet");
  
  while (operasi){
    cout << "masukan nama rahasia; ";
    cin >> nama;
    cout << "nama yang dimasukan: ";
    cout << nama << endl;
    
    if (nama == nama_rahasia){
      cout << "anda benar!!!" << endl;
      break;
    }
    cout << "nama yang dimasukan salah!!!!" << endl;
  }
  cout << "perogram selesai" << endl;
  
  cin.get();
  return 0;
}