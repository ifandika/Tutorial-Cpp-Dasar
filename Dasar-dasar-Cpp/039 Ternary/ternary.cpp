#include <iostream>
using namespace std;

int main(){
  
  // Ternary operator, seperti operasi if else
  
  int nilaiA = 10;
  int nilaiB = 20;
  
  //           kondisi         true  | false
  cout << ((nilaiA < nilaiB) ? nilaiA:nilaiB) << endl;
  
  // contoh dengan input
  int input;
  string outputA = "Nilai yang dimasukan lebih dari 10";
  string outputB = "Nilai yang dimasukan kurang dari 10";
  
  cout << "Masukan nilai : ";
  cin >> input;
  
  cout << ((input >= 10) ? outputA:outputB) << endl;
  
  return 0;
}