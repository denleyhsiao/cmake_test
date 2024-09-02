#include <iostream>

double power(double base, int exponent)
{
  if (exponent == 0)
    return 1;

  double result = base;
  for (unsigned int i = 1; i < exponent; ++i) 
    result *= base;

  return result;
}

int main(int argc, char *argv[])
{
  if (argc < 3)
  {
    std::cout << "Usage: " << argv[0] << " base exponent" << std::endl;
    return 1;
  }

  double base = atof(argv[1]);
  int exponent = atoi(argv[2]);
  double result = power(base, exponent);
  std::cout << base << " ^ " << exponent << " is " << result  << std::endl;

  return 0;
}
