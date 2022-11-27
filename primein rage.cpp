#include<iostream>
using namespace std;
int main()
{
	int i,j,n,x=0;
	cin>>n;
	while(x<n)
	{
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			break;
		}
		if(i==j)
		{
			cout<<j<<endl;
			x++;
		}
		j++;
		
	}
}
