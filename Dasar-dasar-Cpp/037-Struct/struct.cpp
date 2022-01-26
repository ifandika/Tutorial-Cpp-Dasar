#include <iostream>
using namespace std;

// Scope global
struct database{
  int nomer;
  string mapel;
  double nilai;
};// di akhiri dengan titik koma

int main(){
  
  // struct, sebuah function yang menyimpan berbagai data
  database Siswa1, Siswa2;
  
  Siswa1.nomer = 1;
  Siswa1.mapel = "Mtk";
  Siswa1.nilai = 75.50;
  
  Siswa2.nomer = 2;
  Siswa2.mapel = "Ipa";
  Siswa2.nilai = 89.50;
  
  cout << "Nomer siswa 1 : " << Siswa1.nomer << endl;
  cout << "Mapel siswa 1 : " << Siswa1.mapel << endl;
  cout << "Nilai siswa 1 : " << Siswa1.nilai << endl;
  
  cout << endl;
  
  cout << "Nomer siswa 2 : " << Siswa2.nomer << endl;
  cout << "Mapel siswa 2 : " << Siswa2.mapel << endl;
  cout << "Nilai siswa 2 : " << Siswa2.nilai << endl;
  
  cin.get();
  return 0;
}