#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i+j>=6 && j-i<=4)
			{
				cout<<k;
				k=k*(j-i+1)/j;
			}
			else
			{
				cout<<"\n";
			}
		}
		k=1;
	}
}
