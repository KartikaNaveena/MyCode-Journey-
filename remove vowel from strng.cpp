#include<iostream>
using namespace std;
int main()
{
	int n,i;
string a;
getline(cin,a);
cout<<a<<endl;;
for(i=0;i<a.length();i++)
{
   if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
   {
   	continue;
   }
   else
   {
   	cout<<a[i];
   }
}
}
