#include <iostream>
#include <exception>
using namespace std;

int fungsiBagi(int &nilai, int &dibagi){
  if (dibagi == 0){
    
    // jika pembagi 0, maka akan melempar throw, skip return
    // memberikan clas/objek pada throw contoh ( overflow_error )
    throw overflow_error("Error: Pembagi 0");
  }
  return nilai / dibagi;
}


int main(){
  
  // contoh error exception pada program pembagian
  // 5 / 0 = error exception
  int nilai;
  int dibagi;
  int hasil;
  char isLanjut;
  
  while(true){
    cout << "masukan nilai: ";
    cin >> nilai;
    cout << "masukan dibagi: ";
    cin >> dibagi;
    
    try{
      hasil = fungsiBagi(nilai, dibagi);
      cout << "hasil: " << hasil << endl;
      // parameter = (const char *hasil)
      // parameter exception = (exception &hasil) + hasil.what()
      // jika menggunakan overflow_error maka tidak perlu menngunakan (const char *hasil)
      // cukup gunakan ( exception &hasil )
    }catch(exception &output){
      cout << output.what() << endl;
    }
    cout << "lanjut Y/n : ";
    cin >> isLanjut;
    if (isLanjut == 'n' | isLanjut == 'N'){
      break;
    }
  }
  
  cout << "Akhir dari program" << endl;
  return 0;
}