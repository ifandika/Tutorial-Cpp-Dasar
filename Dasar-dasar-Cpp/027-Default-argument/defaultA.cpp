#include <iostream>
using namespace std;

// hitung volume
double hitungVolume(double P = 35, double L = 25, double T = 20);

int main(){
  
  // default argument, nilai default jika input tidak dimasukan                    
  
  cout << "volume default(0)       = " << hitungVolume(40, 35, 30) << " cm³" << endl;
  cout << "volume default(T)       = " << hitungVolume(40, 35) << " cm³" << endl;
  cout << "volume default(L, T)    = " << hitungVolume(40) << " cm³" << endl;
  cout << "volume default(P, L, T) = " << hitungVolume() << " cm³" << endl;
  
  
  return 0;
}
// fungsi hitung volume
double hitungVolume(double P, double L, double T){
  return P * L * T;
}