#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // method ( .erase() )
  // erase = hapus
  
  string string1("kipli");
  
  
  cout << "string1: " << string1.erase(0,2) << endl;
  cout << endl;
  
  string nomer;
  
  cout << "masukan nomer: ";
  getline(cin, nomer);
  
  nomer.erase(0,3);
  cout << "nomer anda: " << nomer << endl;
  
  return 0;
}