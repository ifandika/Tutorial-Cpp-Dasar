#include <iostream>
#include <array>

using namespace std;

int main(){
  
  // latihan grafik nilai dengan array
  
  array<int, 10> valArray;
  
  cout << "###########################################" << endl;
  cout << "# Program Grafik Nilai Siswa Dengan Array #\n";
  cout << "###########################################" << endl;
  cout << endl;
  
  // method untuk size array = namaArray.size()
  for (int loop = 0; loop <= valArray.size(); loop++){
    cout << "siswa dengan nilai ";
    if (loop == 0){
      cout << "[0-9]   : ";
    }
    else if (loop == 10){
      cout << "[100]    : ";
    }
    else {
      cout << "[" << loop*10 << "-" << (loop*10)+9 << "] : ";
    }
    cin >> valArray[loop];
  }
  
  cout << endl;
  
  cout << "############################" << endl;
  cout << "# Hasil Grafik Nilai Siswa #" << endl;
  cout << "############################" << endl;
  cout << endl;
  
  // menampilkan hasil input dengan loop dengan grafik
  for (int loop2 = 0;loop2 <= valArray.size(); loop2++){
    cout << "nilai siswa ";
    if (loop2 == 0){
      cout << "[0-9]   : ";
    }
    else if (loop2 == 10){
      cout << "[100]   : ";
    }
    else {
      cout << "[" << loop2*10 << "-" << (loop2*10)+9 << "] : ";
    }
    for (int grafik = 0;grafik <= valArray[loop2]; grafik++){
      cout << "*";
    }
    cout << endl;
  }
  
  return 0;
}