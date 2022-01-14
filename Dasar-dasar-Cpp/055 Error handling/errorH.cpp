#include <iostream>
#include <array>
// library untuk runtime error atau exception
#include <exception>
using namespace std;

// macam² error

// 1. Syntak Eror
// 2. Lingking Error
// 3. Non-Error
// 4. Runtime Error


int main(){
  
  // error handling
  
  // Syntak Error = Suatu error yang berupa Syntak program yang kurang, salah penulisan
  //                dan langsung diberitahu
  // contoh > ( Int ) seharusnya int "Tipe data Integer", kurang titik koma dll.
  
  // Lingking Error = Suatu error yang berupa fungsi yang belum dibuat namun sudah di panggil, dll.
  //                  biasanya diberitahu lewat terminal/cmd/consolo
  // contoh > kita membuat prototipe ( int print(); ), namun belum membuat fungsinya
  
  // Non-Error = Suatu error berupa error dari program yang kita buat, atau software yang kita buat
  // contoh > kita membuat fungsi mencari luas(P, L), kita memasukan P(10) L(-5), secara program tidak masalah
  //          namum secara logika tidak ada lebar -5 sehingga menjadi Non-Error
  
  // Runtime Error = 
  
  // contoh > Floating poin exception, saat pembagaian ( 5 dibagi 0), saat mengambil nilai array di luas scope array
  // array[5] kita mengambil nilai di luar index 4 (index array dimulai dari 0)
  
  // method untuk exception
  
  // try{
  //   coba / check apakah ada error, jika ada maka akan di tangkap oleh catch()
  // }catch(){
  //   output error yang akan diberikan kepada pengguna
  // }
  
  // contoh dengan array
  array<int, 4> valRay = {0,1,2,3};
  
  // cout << valRay.at(5) << endl; > akan error array_out_ofRange
  
  // cara 1 namun akan sama
  // try{
  //   cout << valRay.at(5) << endl;
  // }catch(const char &output){
  //   cout << output << endl;
  // }
  
  // cara 2 pada parameter catch( menggunakan exception ) + .what()
  
  try{
    cout << valRay.at(5) << endl;
  }catch(exception &output){
    cout << output.what() << endl;
  }
  cout << endl;
  
  // method untuk memberikan output error yang kita inginkan 
  // = throw "Pesan";
  
  cout << "Akhir dari program" << endl;
  return 0;
}