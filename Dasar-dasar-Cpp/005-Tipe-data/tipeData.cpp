#include <iostream>

using namespace std;

int main(){
  
  // Tipe data 
  
  // Bilangan bulat ( 12386 )
  short nilaiShort = 123;// Range pendek
  int nilaiInt = 12345;// Range sedang
  long nilaiLong = 1234567;// Range panjang
  
  // Bilangan pecahan ( 1.90 )
  float nilaiFloat = 12.5;// Range pendek
  double nilaiDouble = 123.5;// Range panjang
  
  // Boolean ( 1 "True" / 0 "False ")
  bool nilaiBool = true;
  
  // Char ( 'a' / '@')
  char nilaiChar = 'A';
  
  cout << "nilaiShort  : " << nilaiShort << endl;
  cout << "nilaiInt    : " << nilaiInt << endl;
  cout << "nilaiLong   : " << nilaiLong << endl;
  cout << "nilaiFloat  : " << nilaiFloat << endl;
  cout << "nilaiDouble : " << nilaiDouble << endl;
  cout << "nilaiBool   : " << nilaiBool << endl;
  cout << "nilaiChar   : " << nilaiChar << endl;
  
  cin.get();
  return 0;
}