#include<iostream>
using namespace std;
main()
{
	int x;
	 cout<<"enter a number :";
	 cin>>x;
	 
	switch (x)
	{
		case 0:
			cout<<"\n the number is 0.";
		break;
		default:
		int y;
		y=x%2;
		switch (y)
		{
			case 0:
				cout<<"\n the number is even ";
			break ;
			case 1:
				cout<<"\n the number is add ";
			break;
		}
	}
}
