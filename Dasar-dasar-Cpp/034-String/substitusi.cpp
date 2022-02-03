#include <iostream>
#include <string>

using namespace std;

int main(){
  
  // operasi substitusi pada string
  string kata_1("rasanya seperti ironmen");
  string kata_2("rasanya anying banget");
  
  cout << kata_1 << endl;
  cout << kata_2 << endl;
  cout << endl;
  
  // swap string / mengganti letak kalimat
  // .swap(variabel)
  kata_1.swap(kata_2);
  cout << "swap string" << endl;
  cout << "1: " << kata_1 << endl;
  cout << "2: " << kata_2 << endl;
  cout << endl;
  
  // replace string / mengganti kata pada string
  // .replace(index,panjang,kata baru)
  kata_2.replace(16,7,"superman");
  kata_1.replace(kata_1.find("anying"),6,"enak");
  cout << "replace string" << endl;
  cout << "1: " << kata_2 << endl;
  cout << "2: " << kata_1 << endl;
  cout << endl;
  
  // insert string / menambah kata
  // .insert(index,kata baru)
  kata_2.insert(16,"menjadi ");
  cout << "insert string" << endl;
  cout << "1: " << kata_2<< endl;
  cout << "2: " << kata_1 << endl;
  
  cin.get();
  return 0;
}