#include<iostream>
using namespace std;
main()
{
	char ch[3];
	cout<<"enter characters :";
	cin.get(ch[0]).get(ch[1]).get(ch[2]);
	cout<<"\n characters are :";
	cout.put(ch[0]).put(ch[1]).put(ch[2]);
}
