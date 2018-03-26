/*
FASHION - Fashion Shows

http://www.spoj.com/problems/FASHION/
*/

#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        //taking all inputs
        cin>>n;
        int a[n],b[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        //sort a[j]
        int temp;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
				temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
                }
            }
        }

        for(int k=0; k<n; k++)
        {
            cin>>b[k];
        }
        //sort b[k]
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(b[i]>b[j])
                {
				temp  =b[i];
				b[i]=b[j];
				b[j]=temp;
                }
            }
        }
        int sum=0;
        //calculating
        for(int i=0; i<n;i++)
        {
            sum=sum+(a[i]*b[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
