// #ifndef FOO
// #define FOO "Ini FOO di file1.h"
// #endif

// bisa menggunakan ifndef namun terlalu bayak
// kita bisa menggunakan pragma once

// jika tidak ada FOO di header file yang lain, maka kita pakai FOO di file1.h
// jika sudah ada maka kita pakai FOO di header file tersebut
#pragma once
#define FOO "Memakai FOO di file1.h"

struct Siswa{
  int NIS;
};
