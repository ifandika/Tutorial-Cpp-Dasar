#include <iostream>

using namespace std;

// Ternary operator = ?
// (( kondisi ) ? hasil1 : hasil2 )
// kondisi = berupa logika, komparasi, true/false
// hasil1  = true
// hasil2  = false

int main(){
  
  // Ternary operator, seperti operasi if else
  
  int nilaiA = 10;
  int nilaiB = 20;
  
  //           kondisi         true  | false
  cout << ((nilaiA < nilaiB) ? nilaiA:nilaiB) << endl;
  
  int input;
  string outputA = "Nilai yang dimasukan lebih dari 10";
  string outputB = "Nilai yang dimasukan kurang dari 10";
  
  cout << "Masukan nilai : ";
  cin >> input;
  
  cout << ((input >= 10) ? outputA:outputB) << endl;
  
  cin.get();
  return 0;
}