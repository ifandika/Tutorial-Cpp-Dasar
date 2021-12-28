#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // method ( .find() )
  // method mencari kata dari belakang
  // ( .rfind() )
  
  string nama = "Kudasi";
  
  int posisi = nama.find('d');
  cout << "posisi kata pada nomer: " << posisi << endl;
  cout << endl;
  
  // contoh input
  string nama1, searchNama;
  
  cout << "masukan nama: ";
  getline(cin, nama);
  
  cout << "cari posisi kata: ";
  getline(cin, searchNama);
  
  int index = nama.find(searchNama);
  
  cout << "posisi kata pada nomer: " << index << endl;
  
  return 0;
}