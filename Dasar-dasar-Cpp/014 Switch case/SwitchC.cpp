#include <iostream>
using namespace std;

int main(){
  
  // Operasi yang sama seperti if
  //  namun di Switch case, suatu kondisi
  //  harus pas tidak boleh ambigu, seperti
  //  tidak boleh kurang, atau lebih besar
  
  // Deklarasi
  int nilai = 20;
  
  // switch (nilai yang akan dimasukan){
  //   case kondisi:
  //     statment
  //   case kondisi:
  //     statment
  // }
  
  switch (nilai){
    case 15:
      cout << "Nilai adalah 15" << endl;
    case 20:
      cout << "Nilai adalah 20" << endl;
  }
  
  cout << endl;
  // namun ada masalah ketika kondisi yang paling
  // atas benar, maka kondisi yang di bawahnya akan 
  // exsekusi
  
  // contoh dengan inputan
  int masukan;
  
  cout << "Nilai yang dimasukan : ";
  cin >> masukan;
  
  switch (masukan){
    case 10:
      cout << "Nilai yang dimasukan 10" << endl;
    case 20:
      cout << "Nilai yang dimasukan 20" << endl;
    case 30:
      cout << "Nilai yang dimasukan 30" << endl;
    // Tambahan selain case ada juga default
    // jika kondisi pada case tidak ada yang benar
    // maka default akan di exsekusi, tapi jika kondisi
    // paling atas benar, default ikut di exsekusi
    default:
      cout << "Nilai yang dimasukan bukan 10, 20, 30" << endl;
  }
  
  
  return 0;
}