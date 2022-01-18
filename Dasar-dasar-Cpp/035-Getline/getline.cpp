#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // agar spasi bisa di eksekusi
  // contoh lain untuk fungsi dalam input string
  
  // cin.ignore();
  // untuk numeric_limits... harus #include <limits>
  // cin.ignore(numeric_limits<streamsise>::max(), '\n');
  
  string val_input;
  
  cout << "masukan nama anda : ";
  getline(cin, val_input);
  
  cout << "nama anda : " << val_input << endl;
  
  return 0;
}