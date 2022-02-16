#include <iostream>

using namespace std;

union database{
  int val_int;
  char val_char[3];
};

int main(){
  
  // unions = fungsi yang menyimpan berbagai data namun
  // menyimpan di sebuah block data, dengan satu address namun jika salah 
  // satu data berubah maka data yang lain akan berubah
  
  database siswa;
  
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
  
  cin.get();
  return 0;
}