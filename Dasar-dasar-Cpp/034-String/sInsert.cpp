#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // method ( .insert() )
  // menambahkan sesuatu
  
  string nama = "Jupri";
  
  cout << "nama anda: " << nama.insert(0,"@") << endl;
  cout << endl;
  
  // contoh dengan input
  string negara;
  
  cout << "masukan nama negara: ";
  getline(cin, negara);
  
  cout << "input " << negara.insert(0,"COUNTRY: ") << endl;
  
  return 0;
}