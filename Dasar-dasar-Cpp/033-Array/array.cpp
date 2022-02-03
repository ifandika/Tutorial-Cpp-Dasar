#include <iostream>
#include <array> // Library Array

using namespace std;

int main(){
  
  // array = Sekumpulan data bertipe sama dengan address yang berurutan
  // index / nomer pada array di mulai dari 0,
  
  // array tanpa standard library
  // cara mengisi nilai array:
  // cara 1
  int valArray[3];
  valArray[0] = 10;
  valArray[1] = 20;
  valArray[2] = 15;
  
  // memanipulasi array dengan Pointer
  int *nilaiPtr = valArray;
  *(nilaiPtr + 2) = 1234; // akan merubah nilai array pada index 2
  
  cout << "Nilai array 0: " << valArray[0] << endl;
  cout << "Nilai array 1: " << valArray[1] << endl;
  cout << "Nilai array 2: " << valArray[2] << endl;
  cout << "Address 0: " << &valArray[0] << endl;
  cout << "Address 1: " << &valArray[1] << endl;
  cout << "Address 2: " << &valArray[2] << endl;
  
  cout << endl;
  
  // cara 2
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
  
  cout << "size arrayStd   : " << arrayStd.size() << endl;
  cout << "address awal    : " << arrayStd.begin() << endl;
  cout << "address akhir   : " << arrayStd.end() << endl;
  cout << "nilai array no 2: " << arrayStd.at(1) << endl;
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
  
  cin.get();
  return 0;
}