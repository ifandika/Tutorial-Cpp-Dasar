#include <iostream>
using namespace std;

// pangkat iterasi
int pangkat_iterasi(int &beg, int &end){
  int hasil = beg;
  for (int loop = 1; loop < end; loop++){
    hasil = hasil * beg;
  }
  return hasil;
}

// pangkat rekursif
int pangkat_rekursif(int beg, int end){
  if (end <= 1){
    return beg;
  }
  else {
    return beg * pangkat_rekursif(beg, (end-1));
  }
  // penjelasan
  // contoh = (beg)3 pangkat (end)3
  
  // maka hasil 27 akan di return ke dalam fungsi, dan menjadi hasil       
  
  // • return 3 * fungsi(3, (3-1) = 2)   -> 3 * hasil bawah(9) = (27)^
  //   • return 3 * fungsi(3, (2-1) = 1)   -> 3 * return beg(3) = (9)^
 
  // karena nilai end == 1, maka return beg
}

int main(){
  
  // rekursif ( Recursive ), recursion = perulangan
  // sebuah fungsi yang memanggil fungsinya SENDIRI
  
  // int main(){ -> tidak boleh karena true terus                
  //   main()        maka harus membuah ( finit rekursif )
  //   return 0;     fungsi rekursif terbatas
  // }
  
  int input_beg;
  int input_end;
  
  cout << "masukan angka: ";
  cin >> input_beg;
  cout << "masukan pangkat: ";
  cin >> input_end;
  
  cout << "hasil pangkat iterasi : ";
  cout << pangkat_iterasi(input_beg, input_end) << endl;
  cout << "hasil pangkat rekursif: ";
  cout << pangkat_rekursif(input_beg, input_end);
  
  cin.get();
  return 0;
}