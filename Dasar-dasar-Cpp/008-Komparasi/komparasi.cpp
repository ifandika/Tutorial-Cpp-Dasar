#include <iostream>
using namespace std;

int main(){
  
  // Komparasi / perbandingan
  
  // Deklarasi
  int a = 10;
  int b = 20;
  bool hasil;
  // 1 = True
  // 0 = False
  
  // Tidak sebanding ( != )
  hasil = (a != b);
  cout << "Tidak sebanding : " << hasil << endl;
  
  // Sebanding ( == )
  hasil = (a == b);
  cout << "Sebanding : " << hasil << endl;
  
  // Kurang dari ( < )
  hasil = (a < b);
  cout << "Kurang dari : " << hasil << endl;
  
  // Lebih dari ( > )
  hasil = (b > a);
  cout << "Lebih dari : " << hasil << endl;
  
  // Kurang dari sama dengan ( <= )
  hasil = (a <= b);
  cout << "Kurang dari sama dengan : " << hasil << endl;
  
  // Lebih dari sama dengan ( >= )
  hasil = (b >= a);
  cout << "Lebih dari sama dengan : " << hasil << endl;
  
  cin.get();
  return 0;
}