#include<iostream>
using namespace std;
main()
{
	int score;
	cout<<"enter score :";
	cin>>score;
	if(score>=50)
	{
		if(score>=100)
		cout<<"you scored century";
		else
		{
			cout<<"you scored half century";
		}
	}
	else
	{
		if(score==0)
		cout<<"dont play";
		if(score>0)
		cout<<"good try";
	}
		
}
