#include <iostream>


#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

int main()
{
  
  test_ascii("Hello, world!");
  std::cout << encryptCaesar("Hello, world!", 10) << std::endl;
  std::cout << encryptVigenere("Hello, world!", "sushi") << std::endl;
  std::cout << decryptCaesar("IFJIFQZX!", 5) << std::endl;
  std::cout << decryptVigenere("Zydsw, oijsl!", "sushi") << std::endl;
  std::cout << decode("Zydsw, oijsl!") << std:: endl;
  
  return 0;
}
