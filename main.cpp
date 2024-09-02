#include "config.h"
#include <iostream>
#ifdef USE_MYMATH
  #include "MathFunctions.h"
#else
  #include <cmath>
#endif

int main(int argc, char *argv[])
{
  if (argc < 3)
  {
    std::cout << "Usage: " << argv[0] << " base exponent" << std::endl;
    return 1;
  }

  double base = atof(argv[1]);
  int exponent = atoi(argv[2]);
#ifdef USE_MYMATH
  std::cout << "Use my math library." << std::endl;
  double result = power(base, exponent);
#else
  std::cout << "Use standard library." << std::endl;
  double result = pow(base, exponent);
#endif

  std::cout << base << " ^ " << exponent << " is " << result  << std::endl;

  return 0;
}
