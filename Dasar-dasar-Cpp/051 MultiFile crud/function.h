#include <string>
#include <fstream>

// fctn = function program
namespace func {
  
  struct Peserta{
    int PK;
    std::string No;
    std::string Nama;
    std::string Umur;
  };
  
  int main_Menu();// menu program
  // CREATE DATA
  void check_Database(std::fstream &);// check database                           
  int check_SizeDataPeserta(std::fstream &);// check size 1 data struct
  void write_DataPeserta(std::fstream &, int index, Peserta &);// write data in database
  Peserta read_DataPeserta(std::fstream &, int posisi);// read data Peserta in database
  void main_AddPeserta(std::fstream &);// add Peserta
  // READ DATA / DISPLAY DATA
  void main_ReadPeserta(std::fstream &);// Read / Display Peserta
  // UPDATE DATA
  // DELETE DATA
  
}