#include <iostream>
#include "funcs.h"

void test_ascii(std::string s)
{

  for (int i = 0; i < s.length(); i++) //starts at beginning of string and goes to the end
    {
      std::cout<<s[i]<<(int)s[i]<<std::endl; //goes through each character in the string,
      //casts char as int for printing
    }
}

