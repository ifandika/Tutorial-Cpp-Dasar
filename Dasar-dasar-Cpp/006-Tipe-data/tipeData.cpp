#include <iostream>

using namespace std;

int main(){
  
  // Tipe data 
  
  // Bilangan bulat ( 12386 )
  short nilaiShort = 12;// 16-bit
  int nilaiInt = 123;// 32-Bit
  long nilaiLong = 1234;// 64-Bit
  
  // Bilangan pecahan ( 1.90 )
  float nilaiFloat = 1.5;// Range pendek
  double nilaiDouble = 12.5;// Range panjang
  
  // Boolean ( 1 "True" / 0 "False ")
  bool nilaiBool = true;
  
  // Char ( 'a' / '@')
  char nilaiChar = 'A';
  
  cout << "nilaiShort  : " << nilaiShort << " size   : " << sizeof(short) << " byte\n";
  cout << "nilaiInt    : " << nilaiInt << " size  : " << sizeof(int) << " byte\n";
  cout << "nilaiLong   : " << nilaiLong << " size : " << sizeof(long) << " byte\n";
  cout << "nilaiFloat  : " << nilaiFloat << " size  : " << sizeof(float) << " byte\n";
  cout << "nilaiDouble : " << nilaiDouble << " size : " << sizeof(double) << " byte\n";
  cout << "nilaiBool   : " << nilaiBool << " size    : " << sizeof(bool) << " byte\n";
  cout << "nilaiChar   : " << nilaiChar << " size    : " << sizeof(char) << " byte\n";
  
  cout << "\nRange\n";
  cout << "max Short : " << numeric_limits<short>::max() << endl;
  cout << "min Short : " << numeric_limits<short>::min() << endl;
  cout << "max int   : " << numeric_limits<int>::max() << endl;
  cout << "min int   : " << numeric_limits<int>::min() << endl;
  cout << "max long  : " << numeric_limits<long>::max() << endl;
  cout << "min long  : " << numeric_limits<long>::min() << endl;
  cout << "max float : " << numeric_limits<float>::max() << endl;
  cout << "min float : " << numeric_limits<float>::min() << endl;
  
  cout << "\nUnsigned max()\n";
  cout << "unsigned short: " << numeric_limits<unsigned short>::max() << endl;
  cout << "unsigned int  : " << numeric_limits<unsigned int>::max() << endl;
  cout << "unsigned long : " << numeric_limits<unsigned long>::max() << endl;
  // cout << "unsigned float: " << numeric_limits<unsigned float>::max() << endl;
  // cout << "unsigned double: " << numeric_limits<unsigned double>::max() << endl;
  
  cin.get();
  return 0;
}