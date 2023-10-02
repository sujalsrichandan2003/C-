#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char x[30];
	cout<<"enter string: ";
	cin.getline(x,30);
	cout<<"\n entered string : "<<x;
	cout<<"\n entered string : ";
	cout.write(x,30);
	cout<<"\n entered string : ";
	cout.write(x,strlen(x)); //strlen() function calculates the length of the string and length is used as an argument in the write().
return 0;
}
