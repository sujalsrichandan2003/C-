#include<iostream>
using namespace std;
class sum
{
	int n1,n2,n3;
	public:
		void adding();
};
void sum::adding()
{
	cout<<"enter two number :";
	cin>>n1>>n2;
	n3=n1+n2;
	cout<<" the addition of result is:"<<n3;
}
int main()
{
	sum s;
	s.adding();
	return 0;
}
