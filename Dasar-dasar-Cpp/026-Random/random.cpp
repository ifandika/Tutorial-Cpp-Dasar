#include <iostream>
// library untuk fungsi random / acak
#include <cstdlib>
using namespace std;

int main(){
  
  // random, libary untuk membuat fungsi random / acak
  char getOpsi;
  
  while (true){
    cout << "Main dadu acak (y/n)  ";
    cin >> getOpsi;
    
    if ((getOpsi == 'y') || (getOpsi == 'Y')){
      cout << "hasil dadu acak : " << (2 + rand() % 100) << endl; 
    }
    else if ((getOpsi == 'n') || (getOpsi == 'N')){
      cout << "Akhir dari program" << endl;
      break;
    }
    else {
      cout << "input tidak ditemukan " << endl;
    }
  }
  
  return 0;
}