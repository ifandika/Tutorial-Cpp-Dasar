#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // method ( .length() )
  
  string string1 = "Jamet";
  
  if (string1.length() > 3){
    cout << "kalimat lebih dari 3 kata" << endl;
  }
  else {
    cout << "kalimat kurang dari 2 kata" << endl;
  }
  cout << endl;
  
  // contoh input
  string nama;
  
  cout << "masukan nama: ";
  getline(cin, nama);
  
  if (nama.length() > 5){
    cout << "nama lebih dari 5 kata" << endl;
  }
  else {
    cout << "nama anda: " << nama << endl;
  }
  
  cin.get();
  return 0;
}