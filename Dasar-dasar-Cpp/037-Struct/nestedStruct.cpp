#include <iostream>
#include <string>

using namespace std;

struct data_pemilik{
  string nama;
  string asal;
};

struct data_mobil{
  string nama;
  int tahun_produksi;
  string merek;
  // Memgambil struct data_pemilik
  data_pemilik pemilik1;
  data_pemilik pemilik2;
};

int main(){
  
  // nested / nesting struct = memanggil struct di dalam struct
  
  data_pemilik Pemilik1, Pemilik2;
  data_mobil mobil1, mobil2;
  
  Pemilik1.nama = "Ragil rahmawan";
  Pemilik1.asal = "Prancis";
  
  Pemilik2.nama = "Kipli Fundation";
  Pemilik2.asal = "Jepang";
  
  // Mobil 1
  mobil1.nama = "Mobil 1";
  mobil1.tahun_produksi = 1950;
  mobil1.merek = "Perari";
  mobil1.pemilik1 = Pemilik1;
  mobil1.pemilik2 = Pemilik2;
  
  // Mobil 2
  mobil2.nama = "mobil 2";
  mobil2.tahun_produksi = 1999;
  mobil2.merek = "Galardo";
  mobil2.pemilik1 = Pemilik2;
  
  cout << "nama        : " << mobil1.nama << endl;
  cout << "thn produksi: " << mobil1.tahun_produksi << endl;
  cout << "merek       : " << mobil1.merek<< endl;
  cout << "Pemilik     : " << mobil1.pemilik1.nama << endl;
  cout << "asal        : " << mobil1.pemilik1.asal << endl << endl;
  
  cout << "nama        : " << mobil2.nama << endl;
  cout << "thn produksi: " << mobil2.tahun_produksi << endl;
  cout << "merek       : " << mobil2.merek << endl;
  cout << "Pemilik     : " << mobil2.pemilik1.nama << endl;
  cout << "asal        : " << mobil2.pemilik1.asal << endl;
  
  cin.get();
  return 0;
}