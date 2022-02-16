#include <iostream>

using namespace std;

// faktorial dengan loop biasa
int faktorialBiasa(int nilai){
  int hasil = 1;
  if (nilai <= 1){
    cout << nilai;
    return nilai;
  }
  for (int iLop = nilai; iLop >= 1; iLop--){
    hasil *= iLop;
    cout << iLop << " * ";
  }
  cout << " = ";
  return hasil;
}

// fungsi rekursif
int faktorial(int nilai){
  if (nilai <= 1){
    cout << nilai << " = ";
    return nilai;
  }
  else {
    cout << nilai << " * ";
    return nilai * faktorial(nilai - 1);
  }
}

int main(){
  
  // Faktorial
  // contoh faktorial:
  // 5! = 5 * 4 * 3 * 2 * 1 = 120
  int inputNilai, hasil;
  cout << "masukan nilai faktorial: ";
  cin >> inputNilai;
  
  cout << "nilai faktorial: ";
  hasil = faktorial(inputNilai);
  cout << hasil << endl;
  cout << "\nhasil faktorialBiasa\n";
  int hasil1 = faktorialBiasa(inputNilai);
  cout << hasil1 << endl;
  
  cin.get();
  return 0;
}