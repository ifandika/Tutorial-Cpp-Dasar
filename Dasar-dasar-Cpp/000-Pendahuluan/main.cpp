#include <iostream>

// C++ Creator = Bjarne Stroustrup
// Version C++
// >> C++ Standard <<

// [ Year ][      C++ Standard      ][ Versi ]
//  1998  | ISO/IEC 14882:1998[30] 	| C++98
//  2003  | ISO/IEC 14882:2003[31]  | C++03
//  2011  | ISO/IEC 14882:2011[32]	| C++11
//  2014  | ISO/IEC 14882:2014[33]  | C++14
//  2017  | ISO/IEC 14882:2017[34]  | C++17
//  2020  | ISO/IEC 14882:2020[13]	| C++20

/* Proses File C++ */

// File.cpp => Preprocessing => Compile => Lingking => Finish

/* File.cpp = berupa file cpp kita */

// Preprocessing = Memproses file cpp kita, jika file cpp kita me include file lain
//                 contoh seperti me include iostream, iostream adalah sebuah file / library untuk memprogram cpp
//                 maka Preprocessing akan mengambil file iostream lalu menggabungkan ke dalam file cpp kita yang
//                 selanjutnya akan di compile ( Extensi File Preprocessing = .p )

// Compile = hasil file Preprocessing lalu di compile dan menjadi objek file ( obj file ), atau mesin code agar bisa dibaca
//           atau dijalankan oleh komputer / system komputer, yang selanjutnya ke tahap lingker / lingking

// lingking = Hasil file Compile yang selanjutnya akan di proses jika file kita me include file header / file cpp lain.
//            lalu lingker / lingking akan memproses semua file menjadi 1 buah file output yang akan di jalankan 
//            windows ( .exe ) | mac os / linux ( .out )

/* Perintah compile => ( Compiler mingw ) */

// g++ namaFile | g++ main.cpp = me COMPILE file cpp
// g++ namaFile.o | g++ main.o = langsung menjadi objek ( obj ) file cpp ( .o ), atau mesin code
// g++ -E namaFile -o namaFileOutput | g++ -E main.cpp -o main = memproses file cpp kita menjadi file Preprocessing ( .p )
// g++ namaFile -o namaFileOutput | g++ main.cpp -o main = compile file cpp
// g++ -c namaFile | g++ -c main.cpp = memproses file kita menjadi mesin code / assembly => openfile ( objdump -d namaFile.o )
// g++ namaFile namaFile -o namaFileOutput | g++ main.cpp header.h -o main = Compile beberapa file Cpp

// Run hasil compile Cpp = windows ( namaFile ) / mac os | linux ( ./namaFile )
int main(){
  
  std::cout << "Selamat datang" << std::end;
  
  std::cin.get(); // Memberikan enter untuk mengakhiri program
  return 0;
}