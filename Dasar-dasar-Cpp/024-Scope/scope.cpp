#include <iostream>

using namespace std;

// Global scope
int Global = 1000;
double global = 17.7890;

// Mengambil global scope
int ambilGlobalScope(){
  return Global;
}

int main(){
  
  // Scope = jangkauan sebuah data / variabel
  // local scope | global scope | block scope
  // Cara untuk mengambil scope terjauh bisa
  // juga menggunakan tanda ( :: ) = operator unery
  
  // Local scope yang ada di body, hanya bisa di ambil
  // di dalam body saja
  int Local = 100;
  
  cout << "Global scope : " << Global << endl;
  cout << "Local scope di body : " << Local << endl;
  
  cout << "Ambil scope terjauh menggunakan tanda petik : ";
  cout << ::Global << endl;
  // Block scope
  {
    int Block = 1234;
    cout << "Block scope : " << Block << endl;
  }
  
  cout << "Ambil scope global : " << ::global << endl;
  
  cin.get();
  return 0;
}