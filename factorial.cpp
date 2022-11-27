#include<iostream>
using namespace std;
int main()
{
	int product,n;
	cin>>n;
	if(n%400==0)
	{
		cout<<"yes";
	}
	else if((n%4==0) && (n%100!=0))
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	return 0;
}
