#include <iostream>
#include <array>
// Standard Library Untuk Sorting, Search dll
#include <algorithm>
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
  
  // mencari data pada.
  // ketika search data array, harus di urutkan dulu data nya, denga sort
  // jika tidak maka program tidak berjalan semetinya.
  // dengan method,
  // binary_search(array.begin(), array.end(), data_cari);
  
  array<int, sizeArray> nilai = {0,9,5,7,6,2,3,1,8,4};
  int search;
  bool result;
  
  // sorting / mengurutkan terlebih dahulu data array
  sort(nilai.begin(), nilai.end());
  print_Data(nilai);
  
  cout << endl;
  cout << "search nilai pada array di atas: ";                          
  cin >> search;
  
  // menggunakan boolean untuk hasil search array
  result = binary_search(nilai.begin(), nilai.end(), search);
  
  if (result){// True
    cout << "data ditemukan" << endl;
  }
  else {// False
    cout << "data tidak ditemukan" << endl;
  }
  
  return 0;
}