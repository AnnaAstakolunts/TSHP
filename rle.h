#include "Crypto.h"

class rle : public Crypto
{
public:
	virtual	int Encode(char* psourse, unsigned int soursesize, char* pout, unsigned int& outsize);
	virtual	int Decode(char* psourse, unsigned int soursesize, char* pout, unsigned int& outsize);
};