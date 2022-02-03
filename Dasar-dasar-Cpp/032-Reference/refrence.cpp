#include <iostream>

using namespace std;

int main(){
  
  // refrence = mengakses sebuah variabel / data dengan address
  // simbol ampersand ( & )
  
  int nilai_1, nilai_2;
  nilai_1 = 10;
  nilai_2 = 20;
  
  cout << "nilai 1: " << nilai_1 << "\t";
  cout << "address: " << &nilai_1 << endl;
  
  cout << "nilai 2: " << nilai_2 << "\t";
  cout << "address: " << &nilai_2 << endl;
  
  cout << endl;
  
  int &nilaiR_1 = nilai_1;
  nilaiR_1 = 1;// jika nilai dirubah maka nilai_1 ikut berubah
  
  cout << "nilaiR 1: " << nilaiR_1 << endl;
  cout << "nilai 1 : " << nilai_1 << endl;
  cout << "address nilai_1  | " << &nilai_1 << endl;
  cout << "address nilaiR_1 | " << &nilaiR_1 << endl;
  
  cin.get();
  return 0;
}