#pragma once
class Crypto {

private:
	int a, b;

public:
	virtual	int Encode(char* psourse, unsigned int soursesize, char* pout, unsigned int& outsize) = 0;
	virtual	int Decode(char* psourse, unsigned int soursesize, char* pout, unsigned int& outsize) = 0;

};