#include <iostream>
#include <array>

using namespace std;

int main(){
  
  int loopArray[10] = {0,1,2,3,4,5,6,7,8,9};
  // jika tidak menggunakan library, maka kita kita harus tau batas akhir array
  
  cout << "Loop array biasa\n\n";
  for (int loop = 0; loop <= 10; loop++){
    cout << "nilai array: " << loopArray[loop] << "\t";
    cout << "address loop: " << &loop << endl; // mengambil address dari int loop
  }
  cout << endl;
  
  for (int &loopRef = loopArray[10]; loopRef <= 10; loopRef++){
    cout << "nilai array: " << loopArray[loopRef] << "\t";
    cout << "address loop: " << &loopRef << endl;
  }
  
  // dengan library array
  cout << "\nLoop array dengan library\n\n";
  array<double, 10> valArray = {0,1,2,3,4,5,6,7,8,9};
  
  // loop array C++ ke atas
  for (int data : valArray){
    cout << "Nilai array: " << data << "\t";
    cout << "Address: " << &data << endl;
  }
  cout << endl;
  
  // mengambil address sebenarnya dari nilai array jika menggunakan refrence ( & )
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