#include <iostream>

using namespace std;

// pangkat iterasi
int pangkatIterasi(int &nilai, int &pangkat){
  int hasil = nilai;
  for (int iLop = 1; iLop < pangkat; iLop++){
    hasil = hasil * nilai;
  }
  return hasil;
}

// pangkat rekursif
int pangkatRekursif(int nilai, int pangkat){
  if (pangkat <= 1){
    cout << nilai << " = ";
    return nilai;
  }
  else {
    cout << nilai << " * ";
    return nilai * pangkatRekursif(nilai, (pangkat - 1));
    // contoh nilai(2), pangkat(4):
    // -> pangkatRekursif( (nilai)2, (pangkat)4 ) hasilnya adalah (16)
    
    //    -> 2 * pangkatRekursif(2, 3)  >> 2 * (8) = 16 return (16) ke fungsi
    //       -> 2 * pangkatRekursif(2, 2)  >> 2 * (4) = 8 return (8)
    //          -> 2 * pangkatRekursif(2, 1)  >> 2 * (2) = 4 return (4)
    //             -> if( pangkat(1) <= 1 ) return nilai(2) "batas akhir rekursif"
  }
}

int main(){
  
  // Rekursif / Recursion = Pengulangan / Mengulang
  // atau dalam pemrograman = Suatu fungsi yang memanggil dirinya sendiri
  
  int inputNilai, inputPangkat;
  
  cout << "masukan angka: ";
  cin >> inputNilai;
  cout << "masukan pangkat: ";
  cin >> inputPangkat;
  
  cout << "hasil pangkat iterasi : ";
  cout << pangkatIterasi(inputNilai, inputPangkat) << endl;
  cout << "hasil pangkat rekursif: ";
  cout << pangkatRekursif(inputNilai, inputPangkat) << endl;
  
  cin.get();
  return 0;
}