#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"enter your age :";
	cin>>age;
	
	if (age>=18)
	{
		cout<<"you can vote";
	}
	else
	{
		cout<<"you can't vote";
		cout<<"wait for"<<18-age<<"year.";
	}
}
