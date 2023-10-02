#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[15],x[15];
	cout<<"\n enter the string :";
	cin.getline(a,15);
	cout<<"\n enter the string :";
	cin.getline(x,15);
	cout<<"\n the concatenate string is :";
	cout.write(a,strlen(a)).write(" ",1).write(x,strlen(x));
}
