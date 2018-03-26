/*
FCTRL2 - Small factorials

http://www.spoj.com/problems/FCTRL2/
*/

#include<iostream>
#include<sstream>
#include<string>
using namespace std;
string calculateFactorial(string num);
int main()
{
    string num;
    cin>>num;
    calculateFactorial(num);
    return 0;
}

string calculateFactorial(string num)
{
     int numint = stoi(num);    //works in c++11 or above
     for(int i=1; i<=numint; i++)
     {
         //store i into array1[]
         //store i+1 into array2[]

     }
}
