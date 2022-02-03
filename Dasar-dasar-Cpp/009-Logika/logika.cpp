#include <iostream>

using namespace std;

int main(){
  
  // Logika pada pemrograman
  
  // true  = 1
  // false = 0 
  
  // Not = kebalikan, jika hasil true maka dibalik menjadi false
  // and = Semua input true, untuk menghasilkan true
  // or  = Salah satu input true, untuk menghasilkan true
  
  int a = 20;
  int b = 10;
  bool hasil;
  
  // not ( ! ) 
  cout << "Operasi Not\n";
  hasil = !(a == b);
  cout << "Hasil : " << hasil << endl;
  
  // And ( and / && ) 
  cout << "Operasi and\n";
  hasil = ((a == 20) and (b == 10));
  cout << "input 1 | 1 = " << hasil << endl;
  hasil = ((a == 20) and (b == 5));
  cout << "input 1 | 0 = " << hasil << endl;
  hasil = ((a == 7) && (b == 10));
  cout << "input 0 | 1 = " << hasil << endl;
  hasil = ((a == 9) && (b == 2));
  cout << "input 0 | 0 = " << hasil << endl;
  
  // or ( or / || )
  cout << "Operasi or\n";
  hasil = ((a == 20) or (b == 10));
  cout << "input 1 | 1 = " << hasil << endl;
  hasil = ((a == 20) or (b == 5));
  cout << "input 1 | 0 = " << hasil << endl;
  hasil = ((a == 7) || (b == 10));
  cout << "input 0 | 1 = " << hasil << endl;
  hasil = ((a == 9) || (b == 2));
  cout << "input 0 | 0 = " << hasil << endl;
  
  // Logika pun bisa di gabung 
  // contoh : notOr ( not + or )
  //          NAND ( not + and )
  
  cin.get();
  return 0;
}