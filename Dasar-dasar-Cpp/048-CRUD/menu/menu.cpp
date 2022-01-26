#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Prototipe Function
int getMenu();// Menu Program


// Body
int main(){
  int input = getMenu();
  char isContinue;
  
  enum Alias{CREATE = 1, READ, UPDATE, DELETE, FINISH};
  
  while (input != FINISH){
    // Bisa juga menggunakan if else
    switch (input){
      case CREATE:
        cout << "Create New Student" << endl;
        break;
      case READ:
        cout << "Display Student" << endl;
        break;
      case UPDATE:
        cout << "Update Student" << endl;
        break;
      case DELETE:
        cout << "Delete Student" << endl;
        break;
      default:
        cout << "Input Not Found" << endl;
    }
    
    // label
    labelReturn:
    
    cout << "Continue in menu program (y/n): ";                
    cin >> isContinue;
    
    if ((isContinue == 'y') | (isContinue == 'Y')){
      input = getMenu();
    }
    else if ((isContinue == 'n') | (isContinue == 'N')){
      break;
    }
    else {
      goto labelReturn;
    }
  }
  
  cout << "Program Finished" << endl;
  
  cin.get();
  return 0;
}
// Function

// Menu Program
int getMenu(){
  int getInput;
  // Refresh to menu
  system("clear");
  cout << "Program CRUD Student" << endl;
  cout << "Menu Program: " << endl;
  cout << "1. Create New Data Student" << endl;
  cout << "2. Read Data Student" << endl;
  cout << "3. Update Data Student" << endl;
  cout << "4. Delete Data Student" << endl;
  cout << "5. Finish" << endl;
  cout << endl;
  
  cout << "Enter your menu program [1-5]: ";
  cin >> getInput;
  
  return getInput;
}