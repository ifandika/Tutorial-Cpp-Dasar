#include <iostream>

using namespace std;

// macro = segala sesuatu yang kita jabarkan / deklarasikan di awal
// hanya mengganti nama PI dengan angka 1.383828838
// konstanta = nilai yang tetap 
#define PI 1.383828838
#define BAHASA "Indonesia"
// segala fungsi bisa kita jabarkan di #define yang hanya inline
// contoh: ternary
#define TERNARY(X, Y) (( X > Y) ? X:Y)

int main(){
  
  // Preprocessing Directive #define , #undef
  
  cout << "nilai PI: " << PI << endl;
  cout << "bahasa  : " << BAHASA << endl;
  
  // undef BAHASA
  #undef BAHASA
  // mengganti bahasa
  #define BAHASA "Inggris"
  
  cout << "new bahasa: " << BAHASA << endl;
  cout << "TERNARY: " << TERNARY(10, 9) << endl;
  
  cin.get();
  return 0;
}