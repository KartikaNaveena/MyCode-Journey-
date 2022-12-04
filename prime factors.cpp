#include<iostream>
using namespace std;
int main()
{
	int i,j,n,c=0;
	cin>>n;
	for(i=2;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==1)
		{
			if(n%i==0)
			cout<<i<<endl;
		}
		c=0;
	}
}
