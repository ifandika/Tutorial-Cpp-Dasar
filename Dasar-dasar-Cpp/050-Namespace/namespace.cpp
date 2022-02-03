#include <iostream>
#include <string>
#include "coba.h"

namespace kipli{
  std::string nama = "ini data string namespace kipli\n";
}

void function(){
  std::cout << "Ini fungsi di namespace.cpp" << std::endl;
}

std::string nama = "ini data string namespace std\n";

int main(){
  
  // namespace = scope / jangkuan
  
  std::cout << "Mencoba namespace" << std::endl;
  
  std::cout << kipli::nama; // punyanya namespace kipli
  std::cout << nama; // punyanya namespace std
  
  function();// fungsi di namespace.cpp
  coba::function();// fungsi di coba.h
  coba::kuadrat(10);
  coba::cout(10393);
  
  std::cin.get();
  return 0;
}