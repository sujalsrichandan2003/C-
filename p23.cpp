#include<iostream>
using namespace std;
main()
{
	char a,b;
	cout<<"enter first character :";
	cin>>a;
	cout<<"enter second character :";
	cin>>b;
	
	if(a>b)
	{
		cout<<a<<" is larger than "<<b;
	}
	else if(b>a)
	{
		cout<<b<<" is larger than "<<a;
	}
	else
	{
		cout<<"both are equal";
	}
}
