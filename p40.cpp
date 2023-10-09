//pointer
#include<iostream>
using namespace std;

int main()
{
	int x;
	float y;
	char d;
	
	x=10;
	y=20;
	d=30;
	
	int *p;
	float *q;
	char *r;
	
	p=&x;
	q=&y;
	r=&d;
	
	{
		cout<<"value of x is :"<<*p;	
		cout<<"\nvalue of y is :"<<*q;
		cout<<"\nvalue of d is :"<<*r;
		
		cout<<"\naddresh of x is :"<<p;
		cout<<"\naddresh of y is :"<<q;
		cout<<"\naddresh of d is :"<<r;
	}

}
