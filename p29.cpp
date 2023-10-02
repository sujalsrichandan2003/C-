#include<iostream>
using namespace std;
main()
{
	int month,days;
	cout<<"Enter month number :";
	cin>>month;
	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days=31;
		break;
		
		case 2:
			days=28;
		break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			days=30;
		break;	
	}
	cout<<"\nNumber of days in this month are "<<days;
}
