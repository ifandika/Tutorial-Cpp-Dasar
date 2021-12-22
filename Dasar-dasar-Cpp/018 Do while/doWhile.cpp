#include <iostream>
using namespace std;

int main(){
  
  // Looping yang sama seperti while, namun 
  // memungkinkan untuk melakukan 1 tindakan
  // 
  // do {
  //   tindakan/ berupa output
  // }
  // while (kondisi);
  
  // Contoh 1
  bool valBool = true;
  
  do {
    cout << "Looping do while" << endl;
    break;
  }
  while (valBool);
  
  cout << endl;
  // Contoh 2
  int valBool2 = 0;
  
  do {
    cout << "Looping do while 2" << endl;
    valBool2++;
  }
  while (valBool2 <= 20);
  
  return 0;
}