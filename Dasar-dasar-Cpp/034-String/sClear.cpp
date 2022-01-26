#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // method ( .clear() )
  // menghapus input
  
  string bahasa = "English";
  
  cout << "bahasa: " << bahasa << endl;
  bahasa.clear();
  cout << "bahasa: " << bahasa << endl;
  
  cin.get();
  return 0;
}