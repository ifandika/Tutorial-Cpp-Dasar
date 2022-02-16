#include <iostream>

using namespace std;

//  # = setiap tanda hash adalah Preprocessing Directive
//      Preprocessing Directive tidak masuk ke dalam compile
//      namun akan masuk ke dalam Preprocessing untuk di proses
//  > | File.cpp | -> | Preprocessing | -> | Compile | -> | Lingking | END

// macro
// Preprocessing Directive tidak memakai memory
#define PI 3.749293718

double pi = 3.749293718;

int main(){
  
  // Preprocessing Directive
  
  cout << "nilai pi : " << pi << endl;
  cout << "nilai PI : " << PI << endl;
  cout << "address pi: " << &pi << endl;
  // error, karena Preprocessing D tidak mempunyai memory
  // cout << "address PI: " << &PI << endl;
  
  cin.get();
  return 0;
}