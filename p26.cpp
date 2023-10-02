#include<iostream>
using namespace std;
main()
{
	int cost,ch;
	cout<<"SUJAL BUS STATION\n";
	cout<<"Menu\n";
		cout<<"nagpur..2\n";
cout<<"bbsr..3\n";
cout<<"rourkela..4\n";
cout<<"khorda..5\n";
cout<<"enter your destination :";
cin>>ch;
if(ch==1)
cost=100;
else if(ch==2)
cost=70;
else if(ch==3)
cost=50;
else if(ch==4)
cost=60;
else if(ch==5)
cost=40;
else
cost=0;

if(cost!=0)
{
	cout<<"\nthe tocket cost is :\n"<<cost;
}
else
{
	cout<<"sorry";
}
cin.get();
return 0;
}
