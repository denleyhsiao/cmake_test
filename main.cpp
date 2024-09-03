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
  double result = 0.0;

#ifdef USE_MYMATH
  std::cout << "Use my math library." << std::endl;
  result = power(base, exponent);
#else
#ifdef HAVE_POW
  std::cout << "Use standard library." << std::endl;
  result = pow(base, exponent);
#else
  std::cout << "Can't use standard library: not found pow" << std::endl;
  return 2;
#endif
#endif

  std::cout << base << " ^ " << exponent << " is " << result  << std::endl;

  return 0;
}
