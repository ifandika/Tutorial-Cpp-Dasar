#include <iostream>
using namespace std;

int main(){
  
  // Ternary operator, alias untuk nilai
  
  // cukup mendeklarasikan Index yang pertama, dan yang seterusnya akan mengikuti
  enum Keyword{A = 1, B, C, D, E};
  
  cout << "Nomer enum A: " << A << endl;
  cout << "Nomer enum B: " << B << endl;
  cout << "Nomer enum C: " << C << endl;
  cout << "Nomer enum D: " << D << endl;
  cout << "Nomer enum E: " << E << endl;
  
  cout << endl;
  
  //                1          2      3     akan berubah karena di ubah menjadi 7, dan finish menjadi 8
  enum contohEnum{CREATE = 1, READ, UPDATE, DELETED = 7, FINISH};
  
  cout << "Nomer CREATE : " << CREATE << endl;
  cout << "Nomer READ   : " << READ << endl;
  cout << "Nomer UPDATE : " << UPDATE << endl;
  cout << "Nomer DELETED: " << DELETED << endl;
  cout << "Nomer FINISH : " << FINISH << endl;
  
  return 0;
}