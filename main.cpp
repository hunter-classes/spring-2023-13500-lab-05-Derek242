#include <iostream>
#include "funcs.h"

int main()
{ 
  //Task A
  std::cout << isDivisible(100,25) << std::endl;
  std::cout << isDivisible(37,17) << std::endl;
  
  //Task B
  std::cout << isPrime(5) << std::endl;
  std::cout << isPrime(4) << std::endl;
  
  //Task C
  std::cout << nextPrime(7) << std::endl;
  std::cout << nextPrime(21) << std::endl;
  std::cout << nextPrime(12) << std::endl;

  //Task D
  std::cout << countPrimes(4,18) << std::endl;
  std::cout << countPrimes(2,5) << std::endl;

  //Task E
  std::cout << isTwinPrime(5) << std::endl;
  std::cout << isTwinPrime(23) << std::endl;

  //Task F
  std::cout << nextTwinPrime(5) << std::endl;
  std::cout << nextTwinPrime(23) << std::endl;

  //Task G
  std::cout << largestTwinPrime(14,16) << std::endl;
  std::cout << largestTwinPrime(5,18) << std::endl;
  std::cout << largestTwinPrime(1,31) << std::endl;

  return 0;
}
