#include <iostream>

using namespace std;

int main(){
  
  // Method continue
  // continue = lanjut
  
  for (int indx = 0; indx <= 10; indx++){
    if (indx == 5){
      cout << "Index 5 ";
      continue; // Akan Men Skip cout << indx(5) di bawah
      // dan output indx 5 akan di ganti "Index 5"
    }
    cout << indx << " ";
  }
  
  cin.get();
  return 0;
}