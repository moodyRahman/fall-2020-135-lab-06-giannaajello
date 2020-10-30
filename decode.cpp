#include <cmath>
#include "decode.h"
#include "decrypt.h"
#include "funcs.h"
 //REFER TO NOTES FROM CLASS!!
  std::string decode(std::string encryptedString)
{
 	std::string possibles[26];
  //FROM WIKIPEDIA
  double letterFreq[] = {8.2, 1.5, 2.8, 4.3, 13,2.2, 2, 6.1, 7, 0.15,0.77, 4, 2.4, 6.7, 7.5,1.9, 0.095, 6, 6.3, 9.1,2.8, 0.98, 2.4, 0.15, 2,0.074};
  int count[26];
  int length = 0; //declared at 0 initially.
  double freq[26]; //INITIALIZES
  double vecDistance[26] = {0};
  double distanceSq[26]; //INITIALIZES

 	for (int i = 0; i < 26; i++)
 	{
    possible[i] = decryptCaesar(encryptedString, i);
    std::string& current = strings[i];

    for (int i = 0; i < current.length(); i++)
 		{
 			if (islower(current[i])) //USED ALEX A REPO FOR REFERENCE!-- citation
 			{
 				count[current[i] - 'a']++;
 			}
 			else if (isupper(current[i])) //USED ALEX A REPO FOR REFERENCE!-- citation
 			{
 				count[current[i] - 'A']++;
 			}
 		}
 		for (int i = 0; i < 26; i++)
 		{
 			freq[i] = (double)count[i] / current.length() * 100;
 			distanceSq[i] = pow(freq[i] - letterFreq[i], 2);
    }
 		for (int rep = 0; rep < 26; rep++)
 		{
 			vecDistance[i] += distanceSq[rep];
 		}
 	}
 	for (int i = 1; i < 26; i++)
 	{
 		if (vecDistance[i] < vecDistance[length])
 		{
 			length = i;
 		}
 	}
 	return possibles[length];
 }
