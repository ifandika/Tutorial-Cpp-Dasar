#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

// scope nilai array global
const size_t raySize = 5;

// output fungsi menampilkan dan mengurutkan
void printArray(array<int, raySize> &nilai); // output int
void printArray(array<char, raySize> &nilai); // output char

int main(){
  
  // deklarasi 
  array<int, raySize> rayInt; // array int
  array<char, raySize> rayChar; // array char
  // output address
  cout << "address rayInt " << &rayInt << endl;
  cout << "address rayChar " << &rayChar << endl;
  string pilihan;
  char Lanjutkan;
  
  // judul program
  cout << "Program mengurutkan nilai int dan char\n\n";
  
  while (true){
     // input menu pilihan
    cout << "pilih program mengurutkan [int/char] : ";
    getline(cin,pilihan);
  
    // menu pilihan integer / int
    if ((pilihan == "int") || (pilihan == "INT") || (pilihan == "Int")){
      for (int loop = 0; loop < rayInt.size(); loop++){
        cout << "masukan nilai ";
        if (loop == 0){
          cout << "0 : ";
        }
        else {
          cout << loop << " : ";
        }
        cin >> rayInt[loop];
      } 
      cout << endl;
      // hasil inputan
      printArray(rayInt);
      // sorting array 
      sort(rayInt.begin(), rayInt.end());
      // output sorting
      printArray(rayInt);
    }
    // menu pilihan charakter / char
    if ((pilihan == "char") || (pilihan == "CHAR") || (pilihan == "Char")){
      for (int loop2 = 0; loop2 < raySize; loop2++){
        cout << "masukan char ";
        if (loop2 == 0){
          cout << "0 : ";
        }
        else {
          cout << loop2 << " : ";
        }
        cin >> rayChar[loop2];
      }  
      cout << endl;
      // hasil inputan char
      printArray(rayChar);
      // sorting char
      sort(rayChar.begin(), rayChar.end());
      // output sorting
      printArray(rayChar);
    }
    else {
      cout << "Pilihan yang anda masukan salah" << endl;
      cout << "   Periksa kembali pilihan     " << endl;
    }
  }
  
  cin.get(); 
  return 0;
}

// fungsi menampilkan int
void printArray(array<int, raySize> &nilai){
  cout << "nilai array int : " << endl;
  for (int &loop : nilai){
    cout << "nilai " << loop;
    cout << " address " << &nilai << endl;
  }
  cout << endl;
}
// fungsi menampilkan char
void printArray(array<char, raySize> &nilai){
  cout << "nilai array char : " << endl;
  for (char &loop : nilai){
    cout << "char " << loop << " ";
    cout << " address " << &nilai << endl;
  }
  cout << endl;
}