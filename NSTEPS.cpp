/*
NSTEPS - Number Steps
http://www.spoj.com/problems/NSTEPS/
*/

#include<iostream>
using namespace std;

void compute(int x, int y)
{
    if(x==y)
    {
        if(x%2==0)
        {
            cout<<x+y<<endl;
        }
        else if(x%2 !=0)
        {
            cout<<x+y-1<<endl;
        }
    }
    else if(y==x-2)
    {
        if(x%2==0 && y%2==0)
        {
            cout<<x+y<<endl;
        }
        else
        {
            cout<<x+y-1<<endl;
        }
    }
    else if(x!=y && x-y !=2)
    {
        cout<<"No Number"<<endl;
    }
}

int main()
{
    int N,x,y;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>x>>y;
        compute(x,y);
    }
    return 0;
}
