#include <iostream>

using namespace std;

int main(){
  
  // If Else Statment
  // If = Jika kondisi benar maka statment akan di jalankan
  // Else If = Kondisi lain dari if
  // Else = Jika Kondisi pada if tidak terpenuhi / false maka else yang akan dijalankan
  
  int nilai = 10;
  
  if (nilai < 5){
    cout << "Nilai kurang dari 5" << endl;
  }
  else {
    cout << "Nilai lebih dari 5" << endl;
  }
  
  
  cout << endl;
  int input;
  
  cout << "Masukan nilai input : ";
  cin >> input;
  
  if (input < 5){ // Jika Input == 5 maka if akan di jalankan
    cout << "Nilai input kurang dari 5" << endl;
  }
  else if (input == 10){ // Jika Input == 10 maka else if akan di jalankan
    cout << "Nilai input adalah 10" << endl;
  }
  else { // Jika kondisi pada if, else if tidak terpeneuhi maka else akan di jalankan
    cout << "Nilai input tidak kurang dari 5, atau sama dengan 10" << endl;
  }
  
  cin.get();
  return 0;
}