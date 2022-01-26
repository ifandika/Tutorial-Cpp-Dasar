#include <iostream>

#define ID
// ifdef ( if define )
// ( mengecek deklarasi apakah sudah ada apa belum )
#ifdef ID
  #define OUTPUT "ID sudah ada"
#else
  #define OUTPUT "ID belum ada"
#endif


#define LANG "Bahasa lama"
// ifndef ( if not define )
// ( mengecek deklarasi namun menggunakan not / kebalikan )
#ifndef LANG
  #define LANG "Bahasa baru"
#endif


// pragma once



using namespace std;
int main(){
  
  cout << "ifdef : " << OUTPUT << endl;
  cout << "ifndef: " << LANG << endl;
  
  cin.get();
  return 0;
}