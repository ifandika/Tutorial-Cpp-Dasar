#include <iostream>
#include <array>

using namespace std;

// nilai pada array harus konstanta / tetap
const int kolom = 3;
const int baris = 2;

// Menampikan Array MD dengan fungsi
void printArray(array < array <int,kolom> , baris> &nilaiArray){
	for (array <int,kolom> vectorBaris : nilaiArray){
		cout << "[ ";
		for(int nilaiKolom: vectorBaris){
			cout << nilaiKolom << " ";
		}
		cout << "]"<< endl;
	}
}

int main(){
  
  // multidimensi array built in
  
  array< array<int, kolom>, baris> valRay = {1,2,3,4,5,6};
  
  // index dimulai dari 0
  // contoh: kolom[3] baris[2] = 1,2,3,4,5,6
  
  // baris[0] berisi 1,2,3
  //  -> kolom[0] baris[0] output -> 1
  //  -> kolom[1] baris[0] output -> 2
  //  -> kolom[2] baria[0] output -> 3
  
  // baris[1] berisi 4,5,6
  //  -> kolom[0] baris[1] output -> 4
  //  -> kolom[1] baris[1] output -> 5
  //  -> kolom[2] baris[1] output -> 6
  
  cout << "nilai 1: " << valRay[0][0] << " " << valRay[0][1] << " " << valRay[0][2] << endl;
  cout << "nilai 2: " << valRay[1][0] << " " << valRay[1][1] << " " << valRay[1][2] << endl;
  
  printArray(valRay);
  
  cin.get();
  return 0;
}