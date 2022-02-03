#include <iostream>

using namespace std;

// cukup di tulis &, tidak perlu &sisi
double printLuas(int &);
void printKuadrat(int &);

int main(){
  // membuat fungsi dengan reference
  
  int input, hasil;
  
  cout << "masukan nilai sisi: ";
  cin >> input;
  
  hasil = printLuas(input);
  
  cout << "luas sisi: " << hasil << " cm²" << endl;
  
  cout << endl;
  
  cout << "address input: " << &input << endl;
  printKuadrat(input);
  
  cin.get();
  return 0;
}
// hitung sisi
double printLuas(int &sisi){
  int hasil;
  hasil = sisi*sisi;
  return hasil;
}
// kuadrat
void printKuadrat(int &input){
  int hasil = input*input;
  cout << "address fungsi " << &input << endl;
  cout << "kuadrat dari " << input << " : " << hasil << endl;
}