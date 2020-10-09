#include <iostream>
#include "caesar.h"

std::string decryptCaesar(std::string cipheredtext, int rshift)
{
  std::string decrypted = "";

  for(int i = 0; i < cipheredtext.length(); i++)
    {
      char current = cipheredtext[i];
      if(isupper(current))
	{
	  current = 'A' + ( current - 'A' - rshift) % 26;
        }
        else if (islower(current))
        {
           current = 'a' + (current - 'a' - rshift) % 26;
         }
      decrypted+=current;
     }
    return decrypted;
}

  
std::string decryptVigenere(std::string cipheredtext, std::string keyword)
{
  std::string decrypted = "";
  int num = 0;
  int shiftNum;
  char current;

  for (int i = 0;i < cipheredtext.length(); i++)
    {
      current = cipheredtext[i];

      if (isupper(current))
	{
	  shiftNum = keyword[num] - 'a';
	  num = (num + 1) % keyword.length();
	  current = 'A' + (current - 'A' - shiftNum + 26) % 26;
	}
      else if (islower(current))
	{
	  shiftNum = keyword[num]-'a';
	  num = (num + 1) % keyword.length();
	  current = 'a' + (current - 'a' - shiftNum + 26) % 26;
	}
      decrypted += current;

    }
  return decrypted;
}
  
