#include <iostream>
#include <string>
// library untuk mengetahui nama tipe data
#include <typeinfo>
using namespace std;

// => jika kita memasukan double maka hasilnya int
// int printData(int data){
//   return data;
// }

// fungsi dengan auto, dan template. auto juga bisa digunakan pada parameter
template<typename T>
auto printData(T data){
  cout << data << "\tTipe data: " << typeid(data).name() << endl;
}

// pada fungsi max tipe data paling besar akan menjadi hasil output
// menggunakan parametef auto = C++17
template<typename TypA, typename TypB>
auto maX(TypA data1, TypB data2){
  return (data1 >= data2) ? data1:data2;
}

int main(){
  
  // auto = method yang bisa menerima berbagai data
  // auto umumnya digunakan dalam membuat fungsi
  
  int A = 282;
  auto B = 281.8282;// Akan otomatis menjadi double
  auto C = 'C';
  auto D = "Ewewewe";
  auto hasil = maX(A, B);
  
  cout << "nilai A: " << A << "\t\tTipe data: " << typeid(A).name() << endl;
  cout << "nilai B: " << B << "\tTipe data: " << typeid(B).name() << endl;
  cout << "nilai C: " << C << "\t\tTipe data: " << typeid(C).name() << endl;
  printData(D);
  cout << "nilai maX: " << hasil << "\t\tTipe data: " << typeid(hasil).name() << endl;// int vS double = double
  
  cin.get();
  return 0;
}