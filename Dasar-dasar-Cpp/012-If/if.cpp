#include <iostream>
using namespace std;

int main(){
  
  // Operasi if 
  //  suatu operasi yang menentukan jika 
  //  suatu kondisi true/benar maka akan 
  //  me outputkan sesuatu 
  
  // if ( kondisi ){
  //  statment
  // }
  
  // contoh
  int nilai = 10;
  
  // Jika nilai kurang dari 20
  if (nilai < 20){
    // Maka true, dan me outputkan yang ada di statment
    cout << "Nilai kurang dari 20" << endl;
  }
  
  cout << endl;
  // contoh dengan inputan
  int input;
  
  cout << "Masukan nilai input : ";
  cin >> input;
  
  if (input < 50){
    cout << "Nilai yang dimasukan kurang dari 50" << endl;
  }
  
  cin.get();
  return 0;
}