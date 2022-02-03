#include <iostream>

using namespace std;

int main(){
  
  // Pattern 3
  
  int nInput;
  
  cout << "Masukan nilai input : ";
  cin >> nInput;
  
  cout << "Pattern 5\n";
  // Rumus : r = ( 2 * i - 1)
  // 2 = beda nilai
  // i = nilai loop pertama
  // 1 = agar pola benar
  
  // 2 | i       | 1
  // 2 * 1 = (2) - 1 = 1      *
  // 2 * 2 = (4) - 1 = 3     ***
  // 2 * 3 = (6) - 1 = 5    *****
  // 2 * 4 = (8) - 1 = 7   *******
  // 2 * 5 = (10) - 1 = 9 *********
  
  //     * 
  //    ***
  //   *****
  //  *******
  // *********
  
  for (int nLop = 1; nLop <= nInput; nLop++){
    for (int nLop1 = nInput; nLop1 >= nLop; nLop1--){
      cout << " ";
    }
    for (int nLop2 = 0; nLop2 < (2 * nLop - 1); nLop2++){
      cout << "*";
    }
    cout << endl;
  }
  
  cout << "\nPattern 6\n";
  // Rumus : r = ( 2 * i - n)
  // 2 = beda nilai. contoh 2 => 4 beda nilai 2
  // i = nilai loop
  // n = nilai input
  
  // 2 | i       | n
  // 2 * 1 = (2) - 5  = -3 
  // 2 * 2 = (4) - 5  = -1
  // 2 * 3 = (6) - 5  = 1
  // 2 * 4 = (8) - 5  = 3
  // 2 * 5 = (10) - 5 = 5
  
  // *********
  //  *******
  //   *****
  //    ***
  //     *
  
  for (int nLop = 1; nLop <= nInput; nLop++){
    for (int nLop1 = 0; nLop1 < nLop; nLop1++){
      cout << " ";
    }
    for (int nLop2 = nInput; nLop2 >= (2 * nLop - nInput); nLop2--){
      cout << "*";
    }
    cout << endl;
  }
  
  cout << "\nPattern 7\n";
  /*
      *
     ***
    *****
   *******
  *********
   *******
    *****
     ***
      *
  */
  for (int nLop = 1; nLop <= nInput; nLop++){
    for (int nLop1 = nInput; nLop1 >= nLop; nLop1--){
      cout << " ";
    }
    for (int nLop2 = 0; nLop2 < (2 * nLop - 1); nLop2++){
      cout << "*";
    }
    cout << endl;
  }
  for (int nLop = 2; nLop <= nInput; nLop++){
    for (int nLop1 = 1; nLop1 <= nLop; nLop1++){
      cout << " ";
    }
    for (int nLop2 = nInput; nLop2 >= (2 * nLop - nInput); nLop2--){
      cout << "*";
    }
    cout << endl;
  }
  
  cin.get();
  return 0;
}