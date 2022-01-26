#include <iostream>
using namespace std;

int main(){
  
  // Looping while
  // while (data yang eksekusi, biasanya berupa true / false){
  //   statment
  // }
  
  // Deklarasi
  bool nilaiBool = true;

  // Kekurangnya ketika true maka akan me looping terus tanpa henti
  // maka harus membuat suatu cara agar false, sehingga looping berhenti
  
  // Contoh 1
  while (nilaiBool){
    // Agar berhenti maka kita buat cara
    cout << "Hello bro" << endl;
    break;
  }
  
  // Contoh 2
  int begin = 10;
  
  while (begin <= 30){
    cout << "Begin = " << begin << endl;
    // Menggunakan assigment agar berhenti
    begin += 5;
  }
  
  cin.get();
  return 0;
}