#include <iostream>
#include <array>
using namespace std;

int main(){
  
  // multidimensi array built in
  
  int valRay[3][3] = {0,1,2,3,4,5};
  
  // valRay[kotak berapa / kolom][index / nomer]
  cout << "nilai 1: " << valRay[0][0] << " " << valRay[0][1] << " " << valRay[0][2] << endl;
  cout << "nilai 2: " << valRay[1][0] << " " << valRay[1][1] << " " << valRay[1][2] << endl;
  cout << "nilai 3: " << valRay[2][0] << " " << valRay[2][1] << " " << valRay[2][2] << endl;
  
  cin.get();
  return 0;
}