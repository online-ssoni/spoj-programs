/*
TOANDFRO - To and Fro

http://www.spoj.com/problems/TOANDFRO/

Algorithm:

Enter the value of COL., Enter the string s
Calculate ROW= s.length() / COL
construct the matrix MAT[ROW][COL] using the string as told below
If the present row is even, enter the whole row as it is.
If the present row is odd, then enter the whole row in reverse fashion.
Print the constructed matrix in column major format.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int col,length;
    string str;
    cin>>col;
    cin>>str;
    length=str.length();
    return 0;
}
