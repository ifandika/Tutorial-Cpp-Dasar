#include <iostream>

using namespace std;

int main(){
  
  // Pattern 2
  
  int nilaiInput;
  
  cout << "Masukan nilai input : ";
  cin >> nilaiInput;
  
  cout << "Pattern 3\n";
  // yang kosong di isi dengan spasi
  //     *
  //    **
  //   ***
  //  ****
  // *****
  
  for (int lopBegin = 0; lopBegin <= nilaiInput; lopBegin++){
    for (int lopMid = nilaiInput; lopMid > lopBegin; lopMid--){
      cout << " ";
    }
    for (int lopEnd = 0; lopEnd < lopBegin; lopEnd++){
      cout << "*";
    }
    cout << endl;
  }
  
  cout << endl;
  
  cout << "\nPattern 4\n";
  // yang kosong di isi dengan spasi
  // *****
  //  ****
  //   ***
  //    **
  //     *
  
  for (int lopAwal = 0; lopAwal <= nilaiInput; lopAwal++){
    for (int lopTengah = 1; lopTengah <= lopAwal; lopTengah++){
      cout << " ";
    }
    for (int lopAkhir = nilaiInput; lopAkhir > lopAwal; lopAkhir--){
      cout << "*";
    }
    cout << endl;
  }
  
  cin.get();
  return 0;
}