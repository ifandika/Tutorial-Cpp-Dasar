#include <iostream>

using namespace std;

int main(){
  
  // const / konstanta ( Sesuatu yang tetap )
  // Sesuatu yang di deklar menjadi tetap entah nilai, address dll
  
  // int val_1 = 10; => Variabel
  // val_1 = 20; => dapat di ubah, nilai awal 10 di ubah mjd 20
  
  // const nilai ( tidak bisa di ubah nilai, kecuali menggunakan cara tententu )
  const int val_2 = 20; // Nilai tetap
  
  cout << "nilai const 2: " << val_2 << "\n\n";
  
  // const address ( tidak bisa di manipulasi address nya, kecuali menggunakan cara tertentu )
  int const val_3 = 30;
  
  cout << "nilai const 3: " << val_3 << endl;
  cout << "addrs const 3: " << &val_3 << endl;
  
  // 
  return 0;
}