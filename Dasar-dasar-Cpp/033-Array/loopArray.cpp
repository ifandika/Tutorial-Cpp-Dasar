#include <iostream>
#include <array>
using namespace std;

int main(){
  // Loop array
  
  // menampilkan nilai, address array dengan looping
  int loopArray[10] = {0,1,2,3,4,5,6,7,8,9};
  // jika tidak menggunakan library, maka kita kita harus tau batas akhir array
  
  for (int loop = 0; loop <= 10; loop++){
    cout << "nilai array: " << loopArray[loop] << "\t";
    cout << "address loop: " << &loop << endl;
  }
  cout << endl;
  
  // memanipulasi address array
  for (int &loopRef = loopArray[10]; loopRef <= 10; loopRef++){
    cout << "nilai array: " << loopArray[loopRef] << "\t";
    cout << "address loop: " << &loopRef << endl;
  }
  
  cout << endl;
  cout << endl;
  
  // dengan library array
  // digunakan C++ 11 ke atas
  
  array<double, 10> valArray = {0,1,2,3,4,5,6,7,8,9};
  
  for (int data : valArray){
    cout << "Nilai array: " << data << "\t";
    cout << "Address: " << &data << endl;
  }
  cout << endl;
  
  // mengambil address sebenarnya dari nilai array
  for (double &loop : valArray){
    cout << "Nilai array: " << loop << "\t";
    cout << "Address: " << &loop << endl;
  }
  cout << endl;
  
  // mengubah nilai array dengan looping
  for (double &index : valArray){
    index *= 2;
    cout << "Nilai array: " << index << "\t";
    cout << "Address: " << &index << endl;
  }
  cout << endl;
  
  // mengambil nilai array yang telah di ubah
  for (double &valLop : valArray){
    cout << "Nilai menjadi: " << valLop << "\t";
    cout << "Address: " << &valLop << endl;
  }
  
  cin.get();
  return 0;
}