#include <iostream>

using namespace std;

// hitung volume
double hitungVolume(double P = 1, double L = 1, double T = 1);

int main(){
  
  // default argument = nilai default jika input yang dimasukan tidak sesuai 
  // inisialisasi nilai default pada prototipe fungsi
  
  // input 3, tidak menggunakan nilai default
  cout << "volume default(3)  = " << hitungVolume(40, 35, 30) << " cm³" << endl;
  // input 2, nila ke 3 kosong maka nilai ke 3 menggunakan nilai default pada fungsi
  cout << "volume default(2)  = " << hitungVolume(40, 35) << " cm³" << endl;
  // input 1, nilai 2 dan 3 kosong maka menggunakan nilai default dari fungsi
  cout << "volume default(1)  = " << hitungVolume(40) << " cm³" << endl;
  // input 0, maka semua nilai menggunakan nilai default dari fumgsi
  cout << "volume default(0)  = " << hitungVolume() << " cm³" << endl;
  
  cin.get();
  return 0;
}
// fungsi hitung volume
double hitungVolume(double P, double L, double T){
  return P * L * T;
}