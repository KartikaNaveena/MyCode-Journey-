#include<iostream>
using namespace std;
int main()
{
	int n,x,i;
	cin>>n;
	x=1;
	while(x<=n){
	for(i=1;i<=x;i++)
	{
		if(x==i*i){
		cout<<x;
		break;
	}
	}
	x++;
}
}

