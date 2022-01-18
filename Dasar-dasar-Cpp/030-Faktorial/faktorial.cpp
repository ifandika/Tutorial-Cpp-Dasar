#include <iostream>
using namespace std;

// fungsi faktorial
int faktorial(int data){
  if (data <= 1){
    cout << data << " = ";
    return data;
  }
  else {
    cout << data << " * ";
    return data * faktorial(data - 1);
  }
}

int main(){
  
  // menghitung faktorial dari nilai, sama seperti rekursif
  // memanggil fungsi nya sendiri juga
  // contoh faktorial
  // 5! = 5 * 4 * 3 * 2 * 1
  int input;
  cout << "masukan nilai faktorial: ";
  cin >> input;
  
  cout << "nilai faktorial: " << faktorial(input) << endl;
  
  return 0;
}