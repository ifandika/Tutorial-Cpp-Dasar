#include <iostream>
// standard library array
#include <array>
using namespace std;

int main(){
  
  // array, sebuah fungsi untuk menyimpan data dengan address berurutan
  // index / nomer pada array di mulai dari 0,
  // pada array jumlah data yang akan dimasukan harus diketahui
  
  // array tampa standard library
  int valArray[3];
  // mengisi data / nilai pada array jika array kosong
  valArray[0] = 10;
  valArray[1] = 20;
  valArray[2] = 15;
  
  cout << "Nilai array 0: " << valArray[0] << endl;
  cout << "Nilai array 1: " << valArray[1] << endl;
  cout << "Nilai array 2: " << valArray[2] << endl;
  cout << "Address 0: " << &valArray[0] << endl;
  cout << "Address 1: " << &valArray[1] << endl;
  cout << "Address 2: " << &valArray[2] << endl;
  
  cout << endl;
  
  //mengisi nilai / data array pada saat deklar array
  double nilaiArray[4] = {0,10,20,30};
  
  cout << "Nilai array 0: " << nilaiArray[0] << endl;
  cout << "Nilai array 1: " << nilaiArray[1] << endl;
  cout << "Nilai array 2: " << nilaiArray[2] << endl;
  cout << "Nilai array 3: " << nilaiArray[3] << endl;
  cout << "Address 0: " << &nilaiArray[0] << endl;
  cout << "Address 1: " << &nilaiArray[1] << endl;
  cout << "Address 2: " << &nilaiArray[2] << endl;
  cout << "Address 3: " << &nilaiArray[3] << endl;
  
  cout << endl;
  
  // array standard library
  array<int, 3> arrayStd;
  arrayStd[0] = 100;
  arrayStd[1] = 200;
  arrayStd[2] = 300;
  
  cout << "Nilai arrayStd 0: " << arrayStd[0] << endl;
  cout << "Nilai arrayStd 1: " << arrayStd[1] << endl;
  cout << "Nilai arrayStd 2: " << arrayStd[2] << endl;
  cout << "Address 0: " << &arrayStd[0] << endl;
  cout << "Address 0: " << &arrayStd[1] << endl;
  cout << "Address 0: " << &arrayStd[2] << endl;
  
  cout << endl;
  
  // array standard library dengan deklarasi
  array<double, 2> arrayStd2 = {150.50, 250.60};
  
  cout << "Nilai arrayStd2 0: " << arrayStd2[0] << endl;
  cout << "Nilai arrayStd2 1: " << arrayStd2[1] << endl;
  cout << "Address 0: " << &arrayStd2[0] << endl;
  cout << "Address 0: " << &arrayStd2[1] << endl;
  
  return 0;
}