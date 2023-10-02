#include<iostream>
using namespace std;
class sum
{
	int n1,n2,n3;
	public:
	void input();
	void process();
	void output();
};
void sum::input()
{
	cout<<"enter two number :";
	cin>>n1>>n2;
}
void sum::process()
{
	n3=n1+n2;
}
void sum::output()
{
	cout<<"result is:"<<n3;
}
int main()
{
	sum s;
	s.input();
	s.process();
	s.output();
	return 0;
}

