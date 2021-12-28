#include <iostream>
using namespace std;
// menggunakan void
void fungsiVoid(int *ptrArray, int baris, int kolom){
  int index = 0;
  for (int lop = 0; lop < baris; lop++){
    for (int lop2 = 0; lop2 < kolom; lop2++){
         cout << " ";
         cout << *(ptrArray + index);
         index++;
     }
  cout << endl;
  }
}
int main(){
  // multidimensi array dengan fungsi void (tampa kembalian)
  int arrayMul[2][2]= {0,1,2,3};
  // tampilkan dengan void
  fungsiVoid(*arrayMul, 2, 2);
  
  cin.get();
  return 0;
}