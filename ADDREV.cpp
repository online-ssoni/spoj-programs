/*
ADDREV - Adding Reversed Numbers

http://www.spoj.com/problems/ADDREV/

Find the reversed sum of two reversed numbers
*/

#include<iostream>
using namespace std;

int revNum(int num)
{
    int rev=0, r;

    while(num!=0)
    {
        r=num%10;
        rev=(rev*10)+r;
        num = num/10;
    }
    return rev;
}

int main()
{
    int N;  //N - test cases
    cin>>N;

    //Loop to enter the input for all test cases
    for(int i=1; i<=N; i++)
    {
        int a,b,sum;    //two numbers a and b
        cin>>a>>b;
        a = revNum(a);
        b = revNum(b);
        sum=a+b;
        sum = revNum(sum);
        cout<<sum<<endl;
    }
    return 0;
}
