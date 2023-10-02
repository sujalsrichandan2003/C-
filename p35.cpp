#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	for (a=1;a<2;a++)
	{
		for(b=1;b<=2;b++)
		{
			for(c=1;c<=2;c++)
			cout<<"\n a="<<a<<"+ b="<<b <<"+ c="<<c <<" :"<<a+b+c;
			cout<<"\n Tnner loop over";	
		}
		cout<<"\nMiddle loop over";
	}
	cout<<"\n outer loop over";
}
