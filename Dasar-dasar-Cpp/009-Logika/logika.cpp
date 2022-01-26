#include <iostream>
using namespace std;

int main(){
  
  // Logika pada pemrograman
  
  // Deklarasi
  int a = 20;
  int b = 10;
  bool hasil;
  
  // not ( ! ) 
  // kebalikan dari nilai hasil, jika hasil 1 maka akan menjadi 0
  cout << "Operasi Not\n";
  hasil = !(a == b);
  cout << "Hasil : " << hasil << endl;
  
  // And ( and / && ) 
  // Menghasilkan True jika semua input true, dan sebaliknya
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
  // Menghasilkan True jika salah satu input True, dan sebaliknya
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