#include <iostream>
#include <string>

using namespace std;

int main(){
  
  // keyword = .clear()
  // membersihkan data, sehingga data menjadi kosong
  
  string bahasa = "English";
  
  cout << "bahasa: " << bahasa << endl;
  bahasa.clear();
  cout << "bahasa: " << bahasa << endl;
  
  cin.get();
  return 0;
}