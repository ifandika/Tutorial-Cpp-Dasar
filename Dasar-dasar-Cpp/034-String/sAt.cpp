#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // method ( .at() )
  // mengambil kata dengan char dengan parameter index
  
  string string1;
  char kata1;
  
  string1 = "Kipli";
  
  kata1 = string1.at(0);
  
  cout << "string1: " << kata1 << endl;
  cout << endl;
  
  // contoh dengan input
  string begin, middle, end;
  
  cout << "masukan nama awal: ";
  getline(cin, begin);
  cout << "masukan nama tengah: ";
  getline(cin, middle);
  cout << "masukan nama akhir: ";
  getline(cin, end);
  
  char charBegin = begin.at(0);
  char charMiddle = middle.at(0);
  char charEnd = end.at(0);
  
  cout << "kata 1: " << charBegin << endl;
  cout << "kata 2: " << charMiddle << endl;
  cout << "kata 2: " << charEnd << endl;
  
  cin.get();
  return 0;
}