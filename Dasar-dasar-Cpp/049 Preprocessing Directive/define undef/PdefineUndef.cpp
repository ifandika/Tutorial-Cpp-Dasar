#include <iostream>
using namespace std;

// hanya mengganti nama PI dengan angka 1.383828838
// konstanta = nilai yang tetap 
#define PI 1.383828838
#define BAHASA "Indonesia"
// segala fungsi bisa kita jabarkan di #define yang hanya inline
// contoh: ternary
#define TERNARY(X, Y) (( X > Y) ? X:Y)

int main(){
  
  // Preprocessing Directive #define , #undef
  // macro = segala sesuatu yang kita deklarasi di awal, atau jabarkan saat program belum di compile 
  
  cout << "nilai PI: " << PI << endl;
  cout << "bahasa  : " << BAHASA << endl;
  
  // mengambil nama BAHASA
  #undef BAHASA
  // mdngganti bahasa
  #define BAHASA "Inggris"
  
  cout << "new bahasa: " << BAHASA << endl;
  cout << "TERNARY: " << TERNARY(10, 9) << endl;
  
  return 0;
}