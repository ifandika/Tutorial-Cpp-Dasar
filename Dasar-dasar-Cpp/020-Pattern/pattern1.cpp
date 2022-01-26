#include <iostream>
using namespace std;

int main(){
  
  // Membuat pattern / segitiga menggunakan lopping
  // Menggunakan forlop
  
  // Deklarasi
  int input;
  
  cout << "Masukan nilai input : ";
  cin >> input;
  
  // pattern 1
     // ++
  // *
  // **
  // ***
  // ****
  // *****
  
  for (int lopBegin = 0; lopBegin <= input; lopBegin++){
    for (int lopEnd = 1; lopEnd <= lopBegin; lopEnd++){
      cout << "*";
    }
    cout << endl;
  }
  
  
  cout << endl;
  
  // pattern 2
     // --
  // *****
  // ****
  // ***
  // **
  // *
  
  for (int lopAwal = 0; lopAwal <= input; lopAwal++){
    for (int lopAkhir = input; lopAkhir >= lopAwal; lopAkhir--){
      cout << "*";
    }
    cout << endl;
  }
  
  cin.get();
  return 0;
}