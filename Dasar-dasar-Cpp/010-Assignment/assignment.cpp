#include <iostream>

using namespace std;

int main(){
  
  // Operator Assigment:
  
  // += ( Penjumlahan )
  // -= ( Pengurangan )
  // /= ( Pembagian )
  // *= ( Perkalian )
  // %= ( Modulus )
  
  // variabel. operatorAssignment. expresi
  //    10           +=              3
  
  int nilai1 = 10;
  
  // Penjumlahan
  nilai1 += 3;
  cout << "Penjumlahan: " << nilai1 << endl;
  
  // Pengurangan
  nilai1 -= 3;
  cout << "Pengurangan: " << nilai1 << endl;
  
  // Pembagian
  nilai1 /= 3;
  cout << "Pembagian  : " << nilai1 << endl;
  
  // Perkalian
  nilai1 *= 3;
  cout << "Perkalian  : " << nilai1 << endl;
  
  // Modulus
  nilai1 %= 2;
  cout << "Modulus    : " << nilai1 << endl;
  
  cin.get();
  return 0;
}