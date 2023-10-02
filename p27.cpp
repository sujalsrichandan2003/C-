#include<iostream>
using namespace std;
main()
{
	int x;
	cout<<"Enter a number :";
	cin>>x;
	if(x%2==0)
	goto even;
	else
	goto odd;
	
	even:cout<<x<<"is even number.";

	odd:cout<<x<<"is odd number.";
}
