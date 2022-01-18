#include <iostream>
using namespace std;

// Prototipe kuadrat
double kuadrat(double data);
// Prototipe hitungLuasLayang
void hitungLuasLayang();

int main(){
  
  // Prototipe, meletakan sebuah fungsi return, void di bawah body / int main
  // jika menaruh fungsi di bawah body, tanpa Prototipe maka akan eror
  
  int hasil1 = kuadrat(20);
  cout << "Kuadrat " << hasil1 << endl;
  
  cout << endl;
  
  // Fungsi hitungLuasLayang
  hitungLuasLayang();
  
  return 0;
}
// Fungsi return kuadrat
double kuadrat(double data){
  return data*data;
}
// Fungsi void 
void hitungLuasLayang(){
  int d1, d2, hasil;
  cout << "Masukan nilai diagonal 1: ";
  cin >> d1;
  cout << "Masukan nilai diagonal 2: ";
  cin >> d2;
  cout << endl;
  cout << "Nilai diagonal 1: " << d1 << endl;
  cout << "Nilai diagonal 2: " << d2 << endl;
  hasil = d1 * d2 / 2;
  cout << "Luas layang layang : " << hasil << " cm²" << endl;
}