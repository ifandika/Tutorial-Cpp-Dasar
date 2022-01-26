#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // method ( .empty() )
  // empty = kosong
  
  string string1;
  
  if (string1.empty()){
    cout << "string1 kosong" << endl;
  }
  else {
    cout << "string1 tidak kosong" << endl;
  }
  cout << endl;
  
  // contoh dengan input
  string inputS;
  
  cout << "masukan apapun: ";
  getline(cin, inputS);
  
  if (inputS.empty()){
    cout << "anda tidak memasukan apapun" << endl;
  }
  else {
    cout << "input anda: " << inputS << endl;
  }
  
  cin.get();
  return 0;
}