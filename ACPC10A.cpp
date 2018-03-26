/*
ACPC10A - What’s Next

http://www.spoj.com/problems/ACPC10A/
*/

#include<iostream>
using namespace std;

void compute(int x, int y, int z)
{

        int d;
        if(y-x == z-y)
        {
            d = y-x;
            cout<<"AP "<<z+d<<endl;
        }
        else
        {
            if(x!=0)
            {
                d=y/x;
                cout<<"GP "<<z*d<<endl;
            }
            else if(y!=0)
            {
                d=z/y;
                cout<<"GP "<<z*d<<endl;
            }

        }
}

int main()
{
    int a1,a2,a3;

    for(;;)
    {
        cin>>a1>>a2>>a3;
        if(a1==0 && a2==0 && a3==0)
        {
            break;
        }
        else
        {
            compute(a1,a2,a3);
        }

    }
    return 0;
}
