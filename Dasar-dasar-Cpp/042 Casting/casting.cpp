#include <iostream>
using namespace std;

int main(){
  
  // operator casting, merubah tipe data ke tipe data lain
  // int menjadi double, int menjadi char dll
  
  int nilai_i = 5;
  float nilai_f = 2.50f;
  char nilai_c = 'A';
  
  // akan merubah int menjadi float, sehingga hasilnya float
  cout << nilai_i + nilai_f << endl;
  cout << endl;
  // menggunakan casting
  cout << nilai_i + (int)nilai_f << endl;
  cout << endl;
  
  cout << nilai_c << endl;
  // merubah char menjadi int
  cout << nilai_c + nilai_i << endl;
  // A + 5 = A ( B C D E F ) 5
  cout << (char)(nilai_c + nilai_i) << endl;
  
  return 0;
}