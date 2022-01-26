#include <iostream>
using namespace std;

// tipeData namaFungsi ( parameter ){
//   statment / keluaran / output
//   return data / mengembalikan data
// }

// Fungsi return
int print(int data){
  // akan mengembalika data dari input ke dalam print
  return data;
}

// Fungsi return
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