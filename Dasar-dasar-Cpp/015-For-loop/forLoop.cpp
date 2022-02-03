#include <iostream>

using namespace std;

int main(){
  
  // for lop = Perulangan, mengulang
  
  // for (inisialisasi; kondisi; ekpresi){
  //   statment
  // }
  
  cout << "Contoh Loop 1\n";
  int nilai1 = 20;
  for (int loop = 0; loop <= nilai1; loop++){
    cout << "loop " << loop;
    cout << "\t\tNilai " << nilai1 << endl;
  }
  
  cout << "\nContoh Loop 2\n";
  int nilai2 = 10;
  for (nilai2; nilai2 <= 20; nilai2++){
    cout << nilai2 << endl;
  }
  
  cout << "\nContoh Loop 3\n";
  int nilai3 = 10, hasil = 0;      // Ekpresi bisa lebih dari 1
  for (int iLop = 1; iLop <= nilai3; iLop++, hasil += iLop){
    cout << iLop << " | " << hasil << endl;
  }
  
  cin.get();
  return 0;
}