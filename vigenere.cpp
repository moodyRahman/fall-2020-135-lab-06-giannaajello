#include <iostream>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
  std::string encryption = "";
  char current;
  int num = 0;
  int shiftNum;
  int newPosition;

  for (int i = 0; i < plaintext.length(); i++)
    {
      current = plaintext[i];

      if(isupper(current))
	{
	  shiftNum = keyword[num] - 'a';
	  num = (num + 1) % keyword.length();
	  newPosition = (current - 'A' + shiftNum) % 26;
	  current = 'A' + newPosition;
	}
      else if (islower(current))
	{
	  shiftNum = keyword[num]-'a';
	  num = (num + 1) % keyword.length();
	  newPosition = (current - 'a' + shiftNum) % 26;
	  current = 'a' + newPosition;
	}
      encryption += current;
    }
  return encryption;
}
 
