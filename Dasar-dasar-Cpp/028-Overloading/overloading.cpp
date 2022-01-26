#include <iostream>
using namespace std;

double hitungLuas(double panjang, double lebar){
  return panjang * lebar;
}

// Menimpa fungsi dari hitung luas di atas
// sehingga jika fungsi di ambil dan input yang dimasukan 2
// maka akan mengambil fungsi di atas, jika input dimasukan 1
// maka akan mengambil fungsi di bawah
int hitungLuas(int sisi){
  return sisi * sisi;
}

int main(){
  
  // overloading = penimpaan sebuah fungsi
  // nama fungsi harus sama, tipe data boleh beda
  
  double luasPpanjang = hitungLuas(35.50, 25.60);
  cout << "hitung luas persegi panjang : " << luasPpanjang << " cm²" << endl;
  
  cout << endl;
  
  int luasPersegi = hitungLuas(25);
  cout << "hitung luas persegi : " << luasPersegi << " cm²" << endl;
  
  cin.get();
  return 0;
}