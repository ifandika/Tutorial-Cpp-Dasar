#include <iostream>

using namespace std;

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
  
  cin.get();
  return 0;
}