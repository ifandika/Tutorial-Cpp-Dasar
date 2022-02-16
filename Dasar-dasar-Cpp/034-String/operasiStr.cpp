#include <iostream>
#include <string>

using namespace std;

int main(){
  
  // operasi pada string
  
  string kata1 = "ayo";
  cout << kata1 << endl;
  
  // mengambil kata dengan index
  cout << "kata index 0: " << kata1[0] << endl;
  cout << "kata index 1: " << kata1[1] << endl;
  
  // merubah kata dengan index
  kata1[2] = 'e';
  cout << kata1 << endl;
  
  // menggabungkan string
  string kata2 = kata1 + " bree";
  cout << kata2 << endl;
  
  string kata3 = "mathefaka";
  kata2.append(" " + kata3);
  cout << kata2 << endl;
  
  cin.get();
  return 0;
}