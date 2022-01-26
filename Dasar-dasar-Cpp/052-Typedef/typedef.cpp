#include <iostream>
using namespace std;

int main(){
  
  // typedef = memberikan alias untuk tipe data
  
  int nilaiA = 100;
  cout << "nilaiA: " << nilaiA << endl;
  
  // scope typedef xxx
  typedef int I;// menyingkat int mjd = I
  // scope typedef ✓✓✓
  typedef int Iarray5D[5];
  
  I nilaiB = 10;
  cout << "nilaiB: " << nilaiB << endl;
  
  Iarray5D nilaiC = {0,1,2,3,4};
  cout << "nilaiC: ";
  cout << nilaiC[0] << " ";
  cout << nilaiC[1] << " ";
  cout << nilaiC[2] << " ";
  cout << nilaiC[3] << " ";
  cout << nilaiC[4] << endl;
  
  // method  = using
  using valDo = double;
  
  valDo nilaiD = 8.83873;
  cout << "nilaiD: " << nilaiD << endl;
  
  typedef unsigned long Ulong;
  
  Ulong nilaiE = 82727299282;
  cout << "nilaiE: " << nilaiE << endl;
  
  typedef string Sray[];
  
  Sray valStr = {"budi", "Jupri", "Jamet", "Kipli"};
  
  cout << "valStr1: " << valStr[0] << endl;
  cout << "valStr2: " << valStr[1] << endl;
  cout << "valStr3: " << valStr[2] << endl;
  cout << "valStr4: " << valStr[3] << endl;
  
  cin.get();
  return 0;
}