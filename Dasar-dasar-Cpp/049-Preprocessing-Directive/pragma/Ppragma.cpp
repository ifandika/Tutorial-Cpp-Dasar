#include <iostream>
// file utama sudah me include file1.h dan ada struct Siswa nya
#include "file1.h"
// file2.h me include file1.h, namun si data struct Siswa suda di include oleh file utama
// sehingga file2.h tidak usah me include lagi file1.h
#include "file2.h"

// kita sudah men define FOO di file1.h dan file2.h
// namu kadang² compiler ada yang error dan ada yang tidak

using namespace std;
int main(){
  
  // pragma once
  // sama seperti ifdef dan ifndef
  // #pragma once = segala sesuatu hanya ingin di include sekali dan tidak ada duplikatnya
  Siswa siswa;
  siswa.NIS = 13683;
  
  cout << "NIS siswa: " << siswa.NIS << endl;
  cout << "FOO: " << FOO << endl;
  
  return 0;
}