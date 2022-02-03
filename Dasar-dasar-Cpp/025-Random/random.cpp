#include <iostream>
#include <cstdlib> // Library fungsi umum

using namespace std;

int main(){
  
  // Contoh membuat fungsi yang menampilkan data secara acak / random
  
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
      cout << "input tidak salah !!! " << endl;
    }
  }
  
  cin.get();
  return 0;
}