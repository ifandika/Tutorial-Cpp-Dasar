#include <iostream>
using namespace std;

int main(){
  
  // Pattern 3
  
  // Deklarasi
  int nilai;
  
  cout << "Masukan nilai input : ";
  cin >> nilai;
  
  // Pattern 1
    // Rumus : r = ( 2 * beda - 1 )
  //     * 
  //    ***
  //   *****
  //  *******
  // *********
  
  for (int begin = 1; begin <= nilai; begin++){
    for (int mid = nilai; mid >= begin; mid--){
      cout << " ";
    }
    for (int end = 0; end < (2 * begin - 1); end++){
      cout << "*";
    }
    cout << endl;
  }
  
  cout << endl;
  
  // Pattern 2
    // Rumus : r = ( 2 * lopAwal - nilaiInput )
  // *********
  //  *******
  //   *****
  //    ***
  //     *
  
  for (int awal = 1; awal <= nilai; awal++){
    for (int tengah = 0; tengah < awal; tengah++){
      cout << " ";
    }
    for (int akhir = nilai; akhir >= (2 * awal - nilai); akhir--){
      cout << "*";
    }
    cout << endl;
  }
  
  cin.get();
  return 0;
}