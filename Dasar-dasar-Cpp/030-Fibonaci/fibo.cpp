#include <iostream>

using namespace std;

// fungsi hitung fibonaci dengan rekursif
int fibonaciRekursif(int nilai){
  if (nilai <= 1){
    return nilai;
  }
  else {
    // akan bercabang
    return fibonaciRekursif(nilai - 1) + fibonaciRekursif(nilai - 2);
  }
}

int main(){
  
  // Fibonaci = Nilai setelahnya adalah jumlah dari dari 2 nilai setelahnya
  // Rumus:
  // fibo_nilai = fibo_nilai1 + fibo_nilai2
  // contoh:
  // 5 = 0 1 1 2 3 5
  
  // 0 = nilai awal
  // 0 + 1 = 1
  // 1 + 1 = 2
  // 2 + 3 = 5
  
  int inputNilai;
  int fibo_nilai1 = 1;
  int fibo_nilai2 = 0;
  int fibo_nilai = 1;
  
  cout << "Masukan nilai Fibonaci: ";
  cin >> inputNilai;
  
  cout << fibo_nilai << " ";
  for (int iloop = 1; iloop < inputNilai; iloop++){
    
    fibo_nilai = fibo_nilai1 + fibo_nilai2;
    fibo_nilai2 = fibo_nilai1;
    fibo_nilai1 = fibo_nilai;
    
    cout << fibo_nilai << " ";
    
  }
  
  cout << endl;
  cout << "Hasil dengan fungsi rekursif\n";
  int hasil = fibonaciRekursif(inputNilai);
  cout << hasil << endl;
  
  cin.get();
  return 0;
}