#include <iostream>

using namespace std;

void print_Data(int &data){
  cout << data << endl;
}

int main(){
  
  // operator comma
  
  int val_1;
  int val_2;
  int hasil;
  
  // jika tidak menggunakan comma operator
  val_1 = 5;
  val_2 = 10;
  hasil = val_1 + val_2;
  cout << hasil << endl << endl;
  
  // menggunakan comma operator
  hasil = (val_1 = 5 , val_2 = 10 , (val_1+val_2));                                            
  
  cout << hasil << endl;
  cout << endl;
  
  // mamanggil fungsi di comma operator
  hasil = (val_1 = 5 , print_Data(val_1) , val_2 = 10 , print_Data(val_2) , (val_1+val_2));
  cout << "hasil " << hasil << endl;
  
  cin.get();
  return 0;
}