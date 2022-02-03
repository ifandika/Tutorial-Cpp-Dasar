#include <iostream>
using namespace std;

int main(){
  
  // Break | Continue = Control Flow
  // Break = Berhenti
  
  // contoh dalam switch case
  int value = 20;
  
  switch (value){
    case 20:
      cout << "Nilai adalah 20" << endl;
      break;// Akan stop, dan kondisi di bawah tidak di exsekusi
    case 10:
      cout << "Nilai adalah 10" << endl;
    case 5:
      cout << "Nilai adalah 5" << endl;
    default: // Jika Kondisi di atas tidak ada yang terpenuhi
      cout << "Nilai bukan 20, 10 atau 5" << endl << endl;
  }
  
  // Contoh dalam loop
  for (int iLop = 0; iLop <= value; iLop++){
    if (iLop == 5){
      break;
    }
    cout << iLop << endl;
  }
  
  cin.get();
  return 0;
}