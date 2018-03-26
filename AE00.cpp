/*
AE00 - Rectangles

http://www.spoj.com/problems/AE00/
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int N,s=0,t;
    cin>>N;
    for(int i=1; i<=sqrt(N);i++)
    {
        t=((N-(i*i))/i)+1;
        s=s+t;
    }
    cout<<s;
    return 0;
}
