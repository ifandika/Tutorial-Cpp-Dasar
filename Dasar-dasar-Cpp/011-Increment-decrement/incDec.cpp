#include <iostream>

using namespace std;

int main(){
  
  // Increment(Menambah), Decrement(Mengurangi)
  // dibagi menjadi 2:
  // Pre  -> SEBELUM -> ++Nilai -> operasi dilakukan lalu di print datanya
  // Post -> SESUDAH -> Nilai++ -> di print datanya dulu lalu dilakukan operasinya
  
  int nilai1 = 5;
  int nilai2 = 5;
  
  // Increment -> ( ++ ) -> Nilai = Nilai + expresi
  cout << "Post Increment\n";
  cout << "Sebelum : " << nilai1 << endl;
  cout << "Post    : " << nilai1++ << endl;
  cout << "Sesudah : " << nilai1 << endl;
  
  cout << "Pre Increment\n";
  cout << "Sebelum : " << nilai2 << endl;
  cout << "Pre     : " << ++nilai2 << endl;
  cout << "Sesudah : " << nilai2 << "\n\n";
  
  // Decrement -> ( -- ) -> Nilai = Nilai - expresi
  cout << "Post Decrement\n";
  cout << "Sebelum : " << nilai1 << endl;
  cout << "Post    : " << nilai1-- << endl;
  cout << "Sesudah : " << nilai1 << endl;
  
  cout << "Pre Decrement\n";
  cout << "Sebelum : " << nilai2 << endl;
  cout << "Pre     : " << --nilai2 << endl;
  cout << "Sesudah : " << nilai2 << endl;
  
  cin.get();
  return 0;
}