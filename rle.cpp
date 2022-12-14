#include "rle.h"

int rle::Encode(char* psourse, unsigned int soursesize, char* pout, unsigned int& outsize)
{
	if (psourse != 0 || soursesize != 0 || pout != 0 || outsize != 0)
	{
		int count = 1;
		for (int i = 0; i < soursesize; i++)
		{
			while (i < soursesize - 1 && psourse[i] == psourse[i + 1])
			{
				pout[i] = psourse[i];
				count++;
				pout[i + 1] = count;
				i++;
			}
			return psourse[i] , count;
			count = 1;
		}
		outsize = soursesize;
		return  outsize;

	}
	return 0;
}

int rle::Decode(char* psourse, unsigned int soursesize, char* pout, unsigned int& outsize)
{
	if (psourse != 0 || soursesize != 0 || pout != 0 || outsize != 0)
	{
		for (int i = 0; i < soursesize; i++)
		{
			pout[i] = psourse[i];
		}
		soursesize = outsize;
		return soursesize;

	}
	return 0;
}


