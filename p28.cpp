#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"\n Line format menu";
	cout<<"\n1 ************";
	cout<<"\n2 ############";
	cout<<"\n3 ------------";
	cout<<"\n4 ============";
	cout<<"\n Enter your choice :";
	cin>>a;
	
	switch(a)
	{
		case 1:
			cout<<"**********";
			break;
		case 2:
			cout<<"##########";
			break;
		case 3:
			cout<<"----------";
			break;
		case 4:
			cout<<"==========";
			break;
	}
}
