#include <iostream>
#include <string> // library string

using namespace std;

int main(){
  
  // string = Sekumpulan Char Array "Lambat"
  
  string val_string;
  
  // 2 cara deklarasi untuk memberikan val string
  string val_string2 = "ini contoh deklarasi string 1";
  string val_string3("ini contoh deklarasi string 2");
  
  cout << "string 1 : " << val_string2 << endl;
  cout << "string 2 : " << val_string3 << endl;
  cout << endl;
  
  // contoh dengan input
  // namun jika ada spasi maka kalimat setelah spasi tidak di eksekusi
  string input;
  
  cout << "masukan nama : ";
  cin >> input;
  
  cout << "nama anda : " << input << endl;
  
  cin.get();
  return 0;
}