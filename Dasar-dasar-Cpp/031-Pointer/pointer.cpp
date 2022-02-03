#include <iostream>

using namespace std;

int main(){
  
  // pointer ( Petunjuk ) : address dari nilai, Menunjuk address dari variabel lain
  // atau ( Variabel yang menyimpan address Variabel lain )
  
  // *valPtr   => Deklarasi Variabel Pointer
  //  valPtr   => Melihat address yang ditunjuk oleh Pointer
  //  &valPtr  => Melihat address asli dari Variabel Pointer
  //  nullptr  => Address Pointer kosong / blank
  //  NULL     => Variabel Pointer Kosong
  
  // • address selalu berubah ubah
  // dereferencing : mengambil data sebuah pointer
  // jika nilai pointer di ubah, maka nilai yang address sama dengan nilai pointer akan berubah
  // • Mengambil nilai dari pointer ( * ) => *myPtr
  // • mengambil address dari pointer ( tidak * ) => myPtr
  
  int val_1 = 10;
  int val_2 = val_1;
  
  cout << "nilai val_1 : " << val_1 << endl;
  cout << "nilai val_2 : " << val_2 << endl;
  cout << "address val1: " << &val_1 << endl;
  cout << "address val2: " << &val_2 << endl;
  
  cout << endl;
  
  // dengan pointer
  // mendefinisikan nilai dengan address kosong / blank dengan ( null )
  int *val_Kosong = nullptr;// Deklarasi untuk address kosong
  
  int val_3 = 20;
  
  // * nilai val_Ptr akan sama dengan &(address) val_3
  // dan juga addressnya sama
  int *val_Ptr = &val_3;
  
  // merubah nilai val_Ptr dan val_3
  *val_Ptr = 200;
  
  cout << "address: " << val_Kosong << endl;
  cout << endl;
  
  cout << "nilai val_3   : " << val_3 << endl;
  cout << "nilai val_Ptr : " << *val_Ptr << endl;
  cout << "address val_3  : " << &val_3<< endl;
  cout << "address val_Ptr: " << val_Ptr << endl;
  
  cin.get();
  return 0;
}