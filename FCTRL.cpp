/*
FCTRL - Factorial

http://www.spoj.com/problems/FCTRL/
*/

#include<iostream>
using namespace std;
int power(int base, int exponent);
int compute(int n)
{
    int r=0,temp;
    for(int i=1; i>=1; i++)
    {
        int p;
        p=power(5,i);
        temp=n/p;
        if(temp>0)
        {
            r=r+temp;
        }
        else
        {
            break;
        }
    }
    return r;
}
int power(int base, int exponent)
{
    int result = 1;
    while (exponent > 0) {
        result *= base;
        --exponent;
    }
    return result;
}
int main()
{
    long int T; //T = number of numbers to follow
    long long int N, sol;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>N;
        sol = compute(N);
        cout<<sol<<endl;
    }
    return 0;
}

