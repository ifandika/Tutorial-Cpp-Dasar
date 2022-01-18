#include <iostream>
using namespace std;

union _database_ {
  int val_int;
  char val_char[3];
};

int main(){
  
  // unions, fungsi yang menyimpan data dengan satu
  // buah block data, dengan satu address namun jika salah 
  // satu data berubah maka data yang lain akan berubah
  
  _database_ siswa;
  
  siswa.val_int = 1000;
  siswa.val_char[0] = 'A';
  siswa.val_char[1] = 'B';
  siswa.val_char[2] = 'C';
  
  cout << "val int  " << siswa.val_int << endl;
  cout << "val char " << siswa.val_char << endl;
  
  // merubah data int
  siswa.val_int = 20000;
  
  cout << "val int  " << siswa.val_int << endl;
  cout << "val char " << siswa.val_char << endl;
  
  return 0;
}