/*
CANDY

http://www.spoj.com/problems/CANDY/
*/
#include <iostream>

using namespace std;

int main()
{
   int N;   //N = Number of candy packets
   while(N!= -1)
   {
       cin>>N;
       if(N!= -1)
       {
           int arr[N], sum=0,mean,c=0;
           for(int i=0; i<N; i++)
           {
               cin>>arr[i];
               sum = sum+arr[i];
           }
            if(sum%N == 0)
            {
                mean = sum/N;

                for(int i=0; i<N; i++)
                {
                    if(arr[i]>mean)
                    {
                        c += arr[i]-mean;
                    }
                }
                cout<<c<<endl;

            }
            else
            {
                cout<<"-1"<<endl;
            }
       }
       if(N==-1)
       {
           break;
       }
   }

   return 0;
}
