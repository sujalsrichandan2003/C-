#include<iostream>
using namespace std;
main()
{
	int i;
	cout<<"\nProgram to print all the leap year from 1900 to 2003 ";
	for(i=1900;i<=2003;i++)
	{
		if(i%4==0&&i%100!=0)
		cout<<i<<"\n";
		else if(i%100==0&&i%400==0)
		cout<<i<<"\n";
	}
}
