/*
SAMER08F - Feynman
http://www.spoj.com/problems/SAMER08F/

tip: no. of squares in a nxn cube: (n^2)+ ((n-1)^2) + ((n-2)^2).... n=1
*/

#include<iostream>
using namespace std;

void compute(int n)
{
    int sum=0;

    if(n!=0)
    {
        for(int i=n; i>=1; i--)
    {
        sum=sum+(i*i);
    }
    cout<<sum<<endl;
    }

}

int main()
{
    int N;
    while(N!=0)
    {
        cin>>N;
        compute(N);
    }
    return 0;
}
