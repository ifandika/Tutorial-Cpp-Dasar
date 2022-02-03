#include <iostream>
#include <array>
#include <algorithm> // library untuk sorting, search dll

using namespace std;

const size_t sizeArray = 10;

// print data array
void print_Data(array<int, sizeArray> &data){
  cout << "data array nilai: ";
  for (int &loop : data){
    cout << loop << " ";
  }
  cout << endl;
}

int main(){
  
  // sebelum search data array, harus di urutkan dulu jika data belum urut
  // binary_search(array.begin(), array.end(), data / variabel);
  
  array<int, sizeArray> nilai = {0,9,5,7,6,2,3,1,8,4};
  int search;
  bool result;
  
  // sorting / mengurutkan terlebih dahulu data array
  sort(nilai.begin(), nilai.end());
  print_Data(nilai);
  
  cout << endl;
  cout << "cari nilai pada array di atas: ";                          
  cin >> search;
  
  // menggunakan boolean untuk hasil search array
  result = binary_search(nilai.begin(), nilai.end(), search);
  
  if (result){ // True
    cout << "data ditemukan" << endl;
  }
  else { // False
    cout << "data tidak ditemukan" << endl;
  }
  
  cin.get();
  return 0;
}