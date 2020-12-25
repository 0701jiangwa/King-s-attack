#include<iostream>
using namespace std;
int fun(int a,int b)
{
	int c;
	c=1000*(a%10)+100*(b%10)+10*(a/10)+(b/10);
	return c;
}
void main()
{
	int a,b;
	cin>>a>>b;
	cout<<fun(a,b)<<endl;
}