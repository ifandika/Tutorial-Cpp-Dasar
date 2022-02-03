#include <iostream>

using namespace std;

// tipeData namaFungsi ( parameter ){
//   statment / keluaran / output
//   return data / mengembalikan data
// }

int print(int data){
  // akan mengembalika data ke dalam int fungsi
  return data;
}

double kuadrat(double data){
  return data*data;
}

// Fungsi return hitung luas segitiga
int luasSegitiga(int alas, int tinggi){
  int luas;
  luas = alas*tinggi / 2;
  return luas;
}

int main(){
  
  // Return = Fungsi Dengan Kembalian / reporter
  // Contoh: string, int, double, boolean, dll
  
  // return kembalian / mengembalikan sebuah data
  
  cout << print(10) << endl;
  
  cout << endl;
  
  cout << kuadrat(5) << endl;
  
  cout << endl;
  
  int luasSegi;
  luasSegi = luasSegitiga(10, 20);
  cout << luasSegi << endl;
  
  cin.get();
  return 0;
}