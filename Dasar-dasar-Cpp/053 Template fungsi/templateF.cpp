#include <iostream>
using namespace std;

// void print(int data){ => jika kita memasukan char maka tidak sesuai,
//   cout << data << endl;  sehingga kita harus membuat fungsi untuk yang sama dengan parameter yang berbeda
// };

template<typename T> // => T akan otomatis menerima berbagai jenis data, untuk typename bisa lebih dari 1
void print(T data){
  cout << data << endl;
}

// setelah typename (Type) boleh bebas, hanya untuk deklarasi nama
template<typename Typ>
double printKuadrat(Typ data){
  return data*data;
}

// 2 parameter
template<typename Data1, typename Data2>
Data1 maX(Data1 X, Data2 Y){
  return ((X > Y) ? X:Y );
}

template<typename Type>
int output(Type data){
  return data;
}

int main(){
  
  // template = menerima bebagai tipe data, biasa digunakan di fungsi yang
  //            kelakuannya sama namun memerlukan parameter yang berbeda
  // fungsi bisa dipanggil bersamaan
  
  // method;
  // template<typename T>
  
  print(100);
  print("hello gaes welcomebeck");
  // memanggil 2 fungsi secara beraamaan
  print(printKuadrat(10));
  
  print(maX(150, 90));
  
  // cara konversi dari 1 tipe data ke tipe data lain
  // method: <namaTipedata>
  
  // => merubah double menjadi integer, namun biasanya akan warning
  cout << output<int>(10.9383) << endl;
  
  cout  << endl;
  return 0;
}
