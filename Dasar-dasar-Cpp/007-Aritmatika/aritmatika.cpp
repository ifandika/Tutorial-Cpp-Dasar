#include <iostream>

using namespace std;

int main(){
  
  // Operator Aritmatika: + | - | * | / | %
  int a = 10;
  int b = 20;
  int hasil;
  
  // Penjumlahan ( + )
  hasil = a + b;
  cout << "Penjumlahan : " << hasil << endl;
  
  // Pengurangan ( - )
  hasil = b - a;
  cout << "Pengurangan : " << hasil << endl;
  
  // Perkalian ( * )
  hasil = a * b;
  cout << "Perkalian : " << hasil << endl;
  
  // Pembagian ( / )
  hasil = b / a;
  cout << "Pembagian : " << hasil << endl;
  
  // Modulus ( % )
  hasil = b % a;
  cout << "Modulus : " << hasil << endl;
  
  cin.get();
  return 0;
}