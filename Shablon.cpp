#include "Shablon.h"


int Shablon::Encode(char* psourse, unsigned int soursesize, char* pout, unsigned int& outsize)
{
	if (psourse != 0 || soursesize != 0 || pout != 0 || outsize != 0)
	{
		for (int i = 0; i < soursesize; i++)
		{
			pout[i] = psourse[i] + 1;
 		}
		outsize = soursesize;
		return  outsize;

	}
	return 0;
}

int Shablon::Decode(char* psourse, unsigned int soursesize, char* pout, unsigned int& outsize)
{
	if (psourse != 0 || soursesize != 0 || pout != 0 || outsize != 0)
	{
		for (int i = 0; i < soursesize; i++)
		{
			pout[i] = psourse[i] - 1;
		}
		soursesize = outsize;
		return soursesize;

	}
	return 0;
}

