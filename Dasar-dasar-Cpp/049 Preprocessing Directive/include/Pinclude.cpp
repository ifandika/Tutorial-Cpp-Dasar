#include <iostream>
// #include = mengCopykan file yang ada di luar
// jika membuat header file maka extensinya = .h 
#include "library.h"

using namespace std;

int main(){
  // namun ada masalah ketika kita mendefinisikan fungsi dua kali,
  // di header file ada dan di main program ada

  // mengambil data dari library.h
  cout << dataString << endl;
  cout << "Kuadrat: " << KUADRAT(10) << endl;
  cout << "Max: " << MAX(10, 9) << endl;
  cout << "Lang: " << LANG << endl;
  
  return 0;
}