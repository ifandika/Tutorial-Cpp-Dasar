#include <iostream>

using namespace std;

int main(){
  
  // Loping do while
  
  // do {
  //   aksi
  // } while (syarat);
  
  bool valBool = true;
  
  do {
    cout << "Looping do while 1" << endl;
    valBool = false;
  }
  while (valBool);
  
  cout << endl;
  
  int valBool2 = 0;
  
  do {
    cout << "Looping do while 2" << endl;
    valBool2++;
  }
  while (valBool2 <= 20);
  
  cin.get();
  return 0;
}