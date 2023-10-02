#include<iostream>
using namespace std;
int main()
{
int a,b;
	cout<<"enter the number:";
	cin>>a;	
	b=0;
	while(a)
	{
		b=b*10+a%10;
		a=a/10;
	}
	if(a==b)
		{

			cout<<"pallindrome";
		}
		else
		{
    		cout<<" not pallindrome";
		}
}
