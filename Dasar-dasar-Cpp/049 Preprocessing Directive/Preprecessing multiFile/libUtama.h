// menggunakan pragma once, agar segala suatu hanya di include sekali
//#include <string>

#define PESAN "Ini file libUtama.h"

#ifndef _LIBUTAMA
#define _LIBUTAMA
struct Siswa{
  int NIS;
  std::string dataStr;
};
#endif