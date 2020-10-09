#include <iostream>

char shiftChar(char c, int rshift)
{
  int changeChar;
  char resultChar;

  if (isupper(c)) //starts at 65 with A
    {
      changeChar = ((int)c - 65 + rshift) % 26 + 65;
      return (char)changeChar;
    }
  else if(islower(c)) //starts at 97 with a
    {
      changeChar = ((int)c - 97 + rshift) % 26 + 97; //must cast as int first 
      return (char)changeChar;
    }

  else
    {
      return c;
    }
}

std::string encryptCaesar(std::string plaintext,int rshift)
{
  std::string result = "";

  for (int i = 0; i < plaintext.length(); i++)
    {
      result += shiftChar(plaintext[i],rshift);
    }
  return result;
}

  
