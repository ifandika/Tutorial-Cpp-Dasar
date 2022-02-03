#include <iostream>

using namespace std;

void printVoid(int data){
  cout << data << endl;
}

void hitungLuas(){
  int alas, tinggi, hasil;
  cout << "Masukan nilai alas : ";
  cin >> alas;
  cout << "Masukan nilai tinggi : ";
  cin >> tinggi;
  
  cout << "Nilai alas : " << alas << endl;
  cout << "Nilai tinggi : " << tinggi << endl;
  hasil = alas*tinggi / 2;
  cout << "Luas segitiga adalah : " << hasil << " cm²" << endl;
}

int main(){
  
  // Void = Fungsi Tanpa Kembalian / worker
  // Void sebuah fungsi tampa kembalian, void tidak menggunakan return
  
  printVoid(100);
  
  cout << endl;
  
  // Mengambil fungsi dari void hitungLuas()
  hitungLuas();
  
  cin.get();
  return 0;
}