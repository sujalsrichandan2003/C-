#include<iostream>//paramateralized constructure
using namespace std;
class sum
{
	int a;
	public:
		sum (int x);
};
 sum::sum (int x)
{
	a=x;
	cout<<"The value of a is:"<<a;
}
int main()
{
	sum s(5);
	return 0;
}
