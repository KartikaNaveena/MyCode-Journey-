#include<iostream>
using namespace std;
int main(){
	int n,a,b,r=1;
	cin>>a>>b;
	while(r!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	cout<<a;
}
