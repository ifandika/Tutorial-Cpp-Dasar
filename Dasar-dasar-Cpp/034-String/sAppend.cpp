#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // method ( .append )
  // menambahkam kata setelah kata input
  
  string inputString;
  
  cout << "masukan nama: ";
  getline(cin, inputString);
  
  // cara 1
  // inputString.append("@gmail.com");
  
  // cara 2
  cout << "email anda: " << inputString.append("@gmail.com") << endl;
  
  cin.get();
  return 0;
}