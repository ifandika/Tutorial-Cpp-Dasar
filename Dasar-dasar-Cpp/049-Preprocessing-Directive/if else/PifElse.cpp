#include <iostream>
// if else di preprocessing
#define ID 1

// awal if
#if ID == 1
  #define LANG "KakPunKa"// kondisi 1
#else
  #define LANG "Milisyi"// jika kondisi 1 tidak true
// akhir if
#endif

#define NILAI 110

#if NILAI <= 100
  #define OUTPUT "Nilai kurang dari 100"
#else
  #define OUTPUT "Nilai lebih dari 100"
#endif

using namespace std;

int main(){
  
  cout << "Language: " << LANG << endl;
  cout << endl;
  cout << "OUTPUT   : " << OUTPUT << endl;
  
  return 0;
}