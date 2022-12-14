#include <iostream>
#include "TvabanakanProgressia.h"
#include "math.h"
using namespace std;

Prog::Prog(int N)
{
	n = N;
}
void Prog::setVec1()
{
	for (i = 0; i < n; i++)
	{
		cin >> vec[i];
		s += vec[i];
	}
}
void Prog::setVec2()
{
	for (i = 0; i <= n; i++)
	{
		vec2[i] = i + 1;
		s2 += vec2[i];
	}
}
void  Prog::getNumber()
{
	cout << "The absent number is: " << s2 - s << endl << endl;
}
