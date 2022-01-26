#include <iostream>
// standard library bitwise
#include <bitset>
#include <string>
using namespace std;

// printData / printBit
void printBit(string data, unsigned short dataBit){
  cout << data << " = " << bitset<8>(dataBit) << endl;
}

int main(){
  
  // bitwise operator
  // menampilkan jumlah bit pada bilangan
  // sama seperti gerbang logika
  // cara print bit
  // bitset<jumlah bit>(nama data)
  
  // menggunakan unsigned agar + semua
  unsigned short A = 6;
  unsigned short B = 10;
  unsigned C;
  
  // AND ( & )
  cout << "& bitwise AND" << endl;
  C = A & B;
  printBit("A", A);
  printBit("B", B);
  printBit("C", C);
  cout << "C = " << C << endl;
  cout << endl;
  
  // OR ( | )
  cout << "| bitwise OR" << endl;
  C = A | B;
  printBit("A", A);
  printBit("B", B);
  printBit("C", C);
  cout << "C = " << C << endl;
  cout << endl;
  
  // XOR ( ^ )
  cout << "^ bitwise XOR" << endl;
  C = A ^ B;
  printBit("A", A);
  printBit("B", B);
  printBit("C", C);
  cout << "C = " << C << endl;
  cout << endl;
  
  // NOT ( ~ )
  cout << "~ bitwise NOT" << endl;
  C = ~A;
  printBit("A", A);
  printBit("C", C);
  cout << "C = " << C << endl;
  cout << endl;
  
  // SHL ( << )
  cout << "<< bitwise SHL" << endl;
  C = A << 2; // menggeser bit ke kiri 1 baris
  printBit("A", A);
  printBit("C", C);
  cout << "C = " << C << endl;
  cout << endl;
  
  // SHR ( >> )
  cout << ">> bitwise SHR" << endl;
  C = A >> 2;
  printBit("A", A);
  printBit("C", C);
  cout << "C = " << C << endl;
  
  // operator pada bitwise
  
  // &  = bitwise AND 
 // 0 0 = 0
 // 0 1 = 0
 // 1 0 = 0
 // 1 1 = 1
 
  // |  = bitwise OR ( Inclusif OR)
 // 0 0 = 0
 // 0 1 = 1
 // 1 0 = 1
 // 1 1 = 1
 
  // ^  = bitwise XOR ( Exsklusif OR)
 // 0 0 = 0
 // 0 1 = 1
 // 1 0 = 1
 // 1 1 = 
 
  // ~  = bitwise NOT
 //  0  = 1
 //  1  = 0
 
  // << = bitwise SHL (Shift Bits Left)
 // menggeser bit ke kiri
 
  // >> = bitwise SHR (shift Bits Right)
 // menggeser bit ke kanan
  
  cin.get();
  return 0;
}