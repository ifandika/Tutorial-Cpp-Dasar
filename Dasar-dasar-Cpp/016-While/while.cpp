#include <iostream>

using namespace std;

int main(){
  
  // Looping while
  
  // while (syarat){
  //   aksi
  // }
  
  bool nilaiBool = true;

  // Kekurangnya ketika true maka akan me looping terus tanpa henti
  // maka harus membuat suatu cara agar false, sehingga looping berhenti
  
  // Contoh 1
  while (nilaiBool){
    // Agar berhenti maka kita buat cara
    cout << "Hello bro" << endl;
    nilaiBool = false;
  }
  
  // Contoh 2
  int nilai = 10;
  
  while (nilai <= 30){
    cout << "Loop ke  " << nilai << endl;
    // Menggunakan assigment agar syarat dapat berhenti
    nilai += 2;
  }
  
  cin.get();
  return 0;
}