#include <iostream>
using namespace std;

int main(){
  
  // Operator Assigment ( Biasanya digunakan dalam Loop )
  
  // += ( Penjumlahan )
  // -= ( Pengurangan )
  // /= ( Pembagian )
  // *= ( Perkalian )
  // %= ( Modulus )
  
  
  // Contoh:
  // Tanpa Assigment
  // = n(0) + n(1) = n(1)
  // Dengan Assigment
  // = n(0) = n(0) + n(1)
  
  // Deklarasi tipe data
  int nilai1 = 10;
  int nilai2 = 20;
  int nilai3 = 15;
  int nilai4 = 4;
  int nilai5 = 10;
  
  // Penjumlahan
  nilai1 += 5;
  cout << "Penjumlahan " << nilai1 << endl;
  
  // Pengurangan
  nilai2 -= 5;
  cout << "Pengurangan " << nilai2 << endl;
  
  // Pembagian
  nilai3 /= 2;
  cout << "Pembagian " << nilai3 << endl;
  
  // Perkalian
  nilai4 *= 3;
  cout << "Perkalian " << nilai4 << endl;
  
  // Modulus
  nilai5 %= 3;
  cout << "Modulus " << nilai5 << endl;
  
  cin.get();
  return 0;
}