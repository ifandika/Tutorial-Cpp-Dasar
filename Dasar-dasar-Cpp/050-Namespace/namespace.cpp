#include <iostream>
#include "coba.h"
// menggunakan using namespace std;
// scope / jangkauan
// jika menggunakan using namespace std;, maka kita menghilangkan std::
// sehingga kita bisa membuat namespace sendiri agar program tidak ambigu
void function(){
  std::cout << "Ini fungsi di namespace.cpp" << std::endl;
}

int main(){
  
  std::cout << "Mencoba namespace" << std::endl;
  function();// fungsi di namespace.cpp
  coba::function();// fungsi di coba.h
  coba::kuadrat(10);
  coba::cout(10393);
  
  return 0;
}