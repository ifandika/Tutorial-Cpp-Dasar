#include <iostream>
#include <string>

using namespace std;

int main(){
  
  // keyword = .substr(index, panjang)
  // mengambil kata
  
  string kata1 = "Indonesia";
  
  cout << "kata1: " << kata1.substr(0,3) << endl;
  cout << endl;
  
  // contoh dengan input
  string inputNama;
  
  cout << "masukan nama anda: ";
  getline(cin, inputNama);
  
  cout << "nama anda: " << inputNama.substr(0,4) << endl;
  
  cin.get();
  return 0;
}