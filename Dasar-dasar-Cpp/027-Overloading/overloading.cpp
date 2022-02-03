#include <iostream>

using namespace std;

// Fungsi 1
double hitungLuas(double panjang, double lebar){
  return panjang * lebar;
}

// Fungsi 2
int hitungLuas(int sisi){
  return sisi * sisi;
}

int main(){
  
  // overloading = penimpaan sebuah fungsi
  // nama fungsi harus sama, tipe data boleh beda
  
  // Akan Mengambil Fungsi No 1
  double luasPpanjang = hitungLuas(35.50, 25.60);
  cout << "hitung luas persegi panjang : " << luasPpanjang << " cm²" << endl;
  
  cout << endl;
  
  // Akan Mengambil Fungsi No 2
  int luasPersegi = hitungLuas(25);
  cout << "hitung luas persegi : " << luasPersegi << " cm²" << endl;
  
  cin.get();
  return 0;
}