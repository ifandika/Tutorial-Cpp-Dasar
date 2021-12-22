#include <iostream>
using namespace std;

int main(){
  
  // Fibonaci
  // looping deret, mejumlahkan deret di depan nya
  // rumus = fibo_begin = fibo_mid + fibo_end
  int input;
  int fibo_end = 1;
  int fibo_mid = 0;
  int fibo_begin = fibo_begin;
  
  cout << "Masukan nilai input : ";
  cin >> input;
  
  for (int loop = 1; loop <= input; loop++){
    fibo_begin = fibo_mid + fibo_end;
    fibo_mid = fibo_end;
    fibo_end = fibo_begin;
    cout << fibo_begin << " ";
  }
  
  return 0;
}