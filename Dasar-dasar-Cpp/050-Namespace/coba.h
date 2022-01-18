// kita menggunakan namespace coba,
// setiap memanggil yang ada di dalam namespace coba kita harus menggunakan coba:: 
// nama namespace bebas
namespace coba {
  void function(){
    std::cout << "Ini fungsi di coba.h" << std::endl;
  }
  
  int kuadrat(int value){
    return value * value;
  }
  
  void cout(double value){
    std::cout << value << std::endl;
  }
  
}
// kita bisa menggunakan
// using namespace coba;
// namun saat memanggil kita tidak menggunakan coba::, sehingga program akan ambigu