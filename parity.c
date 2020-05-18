
#include "parity.h"

/*this program finds the parity of an unsigned int
 *returns 0 if number of set bits is even
 *returns 1 if number of set bits is odd.
 */
int parity(unsigned int number)
{
	int parity = 0;
	int bitmask = 1;
	
	while(number)
	{
		if(number & bitmask)
		{
			parity++;
		}
		number = number >> 1;
	}
	parity = parity % 2;
	return parity;
}