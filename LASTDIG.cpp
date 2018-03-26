/*
LASTDIG - The last digit

http://www.spoj.com/problems/LASTDIG/
hint: use of exponentiation modulo 10 / modular exponentiation
*/

#include <iostream>
using namespace std;

int modExp(unsigned long long int a, unsigned long long int b, int mod) {
    int result = 1;
    while (b) {
        if (b & 1)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return result;
}

int main() {
	unsigned long long int a,b,t;
	cin>>t;
    for(int c=0; c<t; c++)
    {
    	cin>>a>>b;
    	cout<<modExp(a,b,10)<<endl;
    }

	return 0;
}
