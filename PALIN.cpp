/*
PALIN - The Next Palindrome

http://www.spoj.com/problems/PALIN/
*/

#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
using namespace std;

int main()
{
    string s;
    int length;
    cin>>s;

    length = s.size();
    if(length%2==0)
    {
        int middle = (length-1)/2;
        for(int i=length-1; i>length/2; i--)
        {
            s[i]=s[length-1-i];
        }
        int x,y;
        char p,q;
        p=s[(length/2)-1];
        q=s[length/2];
        cout<<"p= "<<p<<" q= "<<q<<endl;
        for(int i=0; i<length;i++)
        {
            cout<<s[i]<<" ";
        }
    }
    else
    {
        int middle = (length-1)/2;
        for(int i=length-1; i>length/2; i--)
        {
            s[i]=s[length-1-i];
        }
        char p=s[middle];
        int x = p-48;
        x=x+1;
        p=x+'0';
        s[middle]=p;
        for(int i=0; i<length;i++)
        {
            cout<<s[i]<<" ";
        }
    }

    return 0;
}
