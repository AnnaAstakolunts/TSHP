#include <cmath>
using namespace std;

long long int power(long long int a, long long int b, long long int P) // (a ^ b) mod P
{
    if (b == 1)
        return a;

    else
        return (((long long int)pow(a, b)) % P);
}

void Hellman(long long int g, long long int p, long long int A, long long int B)
{
    long long int G, P, a, b, x, y, k1, k2;
   
    G = g; P = p; a = A; b = B;
     
    x = power(G, a, P);
 
    y = power(G, b, P);  

    // Generating the secret key after the exchange
    // of keys
    k1 = power(y, a, P);  
    k2 = power(x, b, P);  
    cout << "\nSecret key for the Alice is : " << k1 << endl;
    cout << "Secret key for the Bob is : " << k2 << endl;

}