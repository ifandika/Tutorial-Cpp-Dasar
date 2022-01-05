#include <string>
std::string dataString = "Ini data string di library.h";

#define KUADRAT(X) (X*X)
#define MAX(X, Y) ((X >= Y) ? X:Y)

#define ID 1

#if ID <= 5
  #define LANG "Indonesian"
#else
  #define LANG "English"
#endif