#include <iostream>
#include "Shablon.h"
#include "rle.h"
#include "transpos.h"
#include "TvabanakanProgressia.h"
#include "math.h"
#include <string.h>

using namespace std;


int main()
{
	char src[30] , dest[30];
	const char* txt = "This is an apple";
	unsigned int size = strlen(txt);
	strcpy_s(src, size+1, txt);
	strcpy_s(dest, size + 1, src);
	
	Shablon obj;
	obj.Encode(src, size, dest, size);
	//dest[size] = 0;
	cout << dest<<endl;
	obj.Decode(dest, size, dest, size);
	cout << dest<<endl;

	rle ob1;
	ob1.Encode(src, size, dest, size);

	transpos object(10);
	object.setMassive();
	object.getA();
	object.getB();

	Prog ob2(12);
	ob2.setVec1();
	ob2.setVec2();
	ob2.getNumber();


	return 0;
}
