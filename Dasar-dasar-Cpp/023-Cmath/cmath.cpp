#include <iostream>
#include <cmath> // Library Matematika C++

using namespace std;

int main(){
  
  // contoh fungsi² di cmath:
  // ceil(x)   <- pembulatan ke atas
  // cos(x)    <- cosinus
  // exp(x)    <- exponen
  // fabs(x)   <- nilai absolut dalam float 
  // floor(x)  <- pembulatan ke bawah
  // fmod(x)   <- modulus dalam float
  // log(x)    <- logaritma dalam basis biasa
  // log10(x)  <- logaritma dalam basis 10
  // pow(x, y) <- x pangkat y 
  // sin(x)    <- sinus
  // sqrt(x)   <- akar kuadrat
  // tan(x)    <- tangen
  
  // contoh menghitung dengan akar kuadrat
  int nilai;
  int akar;
  
  cout << "masukan nilai: ";
  cin >> nilai;
  
  akar = sqrt(nilai);
  
  cout << "akar dari nilai " << nilai;
  cout << " adalah: " << akar << endl;
  
  cin.get();
  return 0;
}