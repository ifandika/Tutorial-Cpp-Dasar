#include <iostream>
#include <array>
// standard library untuk sorting, searching dll
#include <algorithm>
using namespace std;

const size_t sizeArray = 10;
// fungsi display integer, nilai
void printArray(array<int, sizeArray> &data){
  cout << "nilai array int  : ";
  for (int &loop : data){
    cout << loop << " ";
  }
  cout << endl;
}
// fungsi display char, karakter
void printArray(array<char, sizeArray> &data){
  cout << "nilai array char : ";
  for (char &loop : data){
    cout << loop << " ";
  }
  cout << endl;
}

int main(){
  
  array<int, sizeArray> nilai = {0,9,5,7,6,2,3,1,8,4};
  array<char, sizeArray> huruf = {'A','D','B','C','F','E','H','G','J','I'};
  
  printArray(nilai);
  printArray(huruf);
  
  cout << endl;
  
  // method sorting library algorithm
  // sort(address_awal(), address_akhir());
  // contoh:
  // sort(data.begin(), data.end());
  
  sort(nilai.begin(), nilai.end());
  printArray(nilai);
  
  sort(huruf.begin(), huruf.end());
  printArray(huruf);
  
  return 0;
}