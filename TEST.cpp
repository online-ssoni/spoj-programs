/*
TEST-Life, the universe and Everything

Problem ink: http://www.spoj.com/problems/TEST/
*/

#include<iostream>
using namespace std;

int main()
{
	int number;

	do
	{
		cin>>number;
		if(number != 42)
		{
			cout<<number<<endl;
		}
		else
		{
			return 0;
		}
	}while(true);
	return 0;
}