#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // getline = membaca spasi pada kalimat yang di masukan
  
  // cin.ignore();
  // untuk numeric_limits... harus #include <limits>
  // cin.ignore(numeric_limits<streamsise>::max(), '\n');
  
  string val_input;
  
  cout << "masukan nama anda : ";
  getline(cin, val_input);
  
  cout << "nama anda : " << val_input << endl;
  
  // Membaca jumlah kalimat
  int index = 0;
  int jumlahKalimat = 0;
  
  while (true){
    index = val_input.find(" ", index + 1);
    jumlahKalimat++;
    if (index < 0){
      break;
    }
  }
  
  cout << "Jumlah kalimat : " << jumlahKalimat << endl;
  
  cin.get();
  return 0;
}