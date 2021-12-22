#include <iostream>
using namespace std;

int main(){
  
  // for loop
  // Melooping data / memutar data
  
  // for (deklarasi; kondisi; increment/decrement){
  //   statment/hasil yang akan di tampilkan
  // }
  
  // Contoh 1
  int nilai1 = 20;
  for (int loop = 0; loop <= nilai1; loop++){
    cout << "loop " << loop;
    cout << "\t\tNilai " << nilai1 << endl;
  }
  
  // Contoh 2
  int nilai2 = 10;
  
  for (nilai2; nilai2 <= 20; nilai2++){
    cout << nilai2 << endl;
  }
  
  return 0;
}