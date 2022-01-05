#include <iostream>
#include <string>
#include "library1.h"
#include "library2.h"
#include "libUtama.h"


using namespace std;
int main(){
  
  cout << "Pesan: " << PESAN << endl;
  
  Siswa siswa1, siswa2;
  
  siswa1.NIS = 123;
  siswa1.dataStr = "Jupri";
  
  siswa2.NIS = 124;
  siswa2.dataStr = "Jamet";
  
  cout << "NIS siswa1: " << siswa1.NIS << endl;
  cout << "Nama siswa1: " << siswa1.dataStr << endl;
  cout << endl;
  cout << "NIS siswa2: " << siswa2.NIS << endl;
  cout << "Nama siswa2: " << siswa2.dataStr << endl;
  
  return 0;
}