#include <iostream>
using namespace std;

int main(){
  
  // Operasi if else
  //  suatu operasi yang me outputkan nilai yang
  //  true maupun false, jika suatu kondisi benar
  //  maka kondisi yang di bawah tidak di exsekusi
  
  // Deklarasi
  int nilai = 10;
  
  if (nilai < 5){
    cout << "Nilai kurang dari 5" << endl;
  }
  else {
    cout << "Nilai lebih dari 5" << endl;
  }
  
  // else adalah ketika kondisi yang ada di 
  // atasnya tidak benar maka else yang akan 
  // di outputkan
  
  cout << endl;
  // selain if dan else, ada juga else if
  // contoh dengan inputan
  int input;
  
  cout << "Masukan nilai input : ";
  cin >> input;
  
  if (input < 5){
    cout << "Nilai input kurang dari 5" << endl;
  }
  else if (input == 10){
    cout << "Nilai input adalah 10" << endl;
  }
  else {
    cout << "Nilai input tidak kurang dari 5, atau sama dengan 10" << endl;
  }
  
  cin.get();
  return 0;
}