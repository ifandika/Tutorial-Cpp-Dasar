#include <iostream>

using namespace std;

void OutputFungsi(int *valPtr);
void OutputFungsiSegitiga(double *, double *, double *);

int main(){
  double valAlas, valAlasAtas, valTinggi;
  
  cout << "Address Dari valAlasAtas: " << &valAlas << endl;
  cout << "Address Dari valAtas    : " << &valAlasAtas << endl;
  cout << "Address Dari valTinggi  : " << &valTinggi << endl;
  
  cout << "Masukan Nilai Alas : ";
  cin >> valAlas;
  cout << "Masukan Nilai AlasAtas : ";
  cin >> valAlasAtas;
  cout << "Masukan Nilai Tinggi : ";
  cin >> valTinggi;
  
  // OutputFungsi(&Val);
  OutputFungsiSegitiga(&valAlas, &valAlasAtas, &valTinggi);
  
  cin.get(); 
  return 0;
}

void OutputFungsi(int *valPtr){
  *valPtr = (*valPtr) * (*valPtr);
  cout << "Address Dari valPtr: " << valPtr << endl;
  cout << "Nilai Dari valPtr  : " << *valPtr << endl;
}

void OutputFungsiSegitiga(double *ptrResult,double *ptrAlas,double *ptrTinggi){
  *ptrResult = (*ptrAlas + *ptrAlas) / 2 * (*ptrAlas);
  cout << "Address ptrResult : " << ptrResult << endl;
  cout << "Luas Trapesium     : " << *ptrResult << " cm²" << endl;
}