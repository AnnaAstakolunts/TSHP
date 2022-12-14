#include <iostream>
#include "transpos.h"
#include "math.h"
using namespace std;

transpos:: transpos(int N)
{
	  n = N;
}
 void transpos::setMassive()
 {
		 for (i = 0; i < n; i++)
		 {
			 mass[i] = i + 3 ;
		 }
		 for (i = 0; i < n; i++)
		 {
			 cout<< mass[i]<<" ";
		 }
		 cout << endl << endl;
		 
 }
 void transpos::getA()
 {
			k = sqrt(n);
			for (i = 0; i < k; i++)
	        {
				for (j = 0; j < k; j++)
				{
					A[i][j] = mass[j + i * k];
				}

			}
	

		for (i = 0; i < k; i++)
		{

			for (j = 0; j < k; j++)
			{
				cout << A[i][j] << "  ";
			}
			cout << endl;
		}
		cout << endl << endl;

 }
 void transpos::getB()
 {
	 k = sqrt(n);
	 for (i = 0; i < k; i++)
	 {

		 for (j = 0; j < k; j++)
		 {
			 B[i][j] = A[j][i];
		 }

	 }

	 for (i = 0; i < k; i++)
	 {

		 for (j = 0; j < k; j++)
		 {
			 cout << B[i][j] << "  ";
		 }
		 cout << endl;
	 }
 }