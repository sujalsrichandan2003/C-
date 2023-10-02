#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a,x[30];
	cout<<"\n enter any string : ";
	cin.getline(x,30);
	cout<<"\n entered string : \n";
	for(a=0;a<=strlen(x);a++)
	{
		cout<<"\n";
		cout.write(x,a);
	}	
}
