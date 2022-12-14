#include <iostream>
#include <string>
using namespace std;

class GCD {
private:
	int a, b;
public:
	GCD(int A, int B)
	{
		a = A;
		b = B;
	}
	void function()
	{
		if (a == 0 || b == 0)
			cout << 0 << endl;
		while (a != b)
		{
			if (a < b)
			{
				b = b - a;
			}
			else
			{
				a = a - b;
			}
		}
		cout << b << endl;
}
};


int main()
{
	GCD obj(196, 14);
	cout << "The great common divisor is: ";
	obj.function();

		return 0;
}




 