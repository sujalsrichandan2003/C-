//addition of two integer no.by paramaterialized constructor
#include<iostream>
using namespace std;
class sum
{
	int b;
	public:
		sum (int y);
};
 sum::sum (int y)
{
	b=y;
	cout<<"The value of bg is:"<<b;
}
int main()
{
	sum s(5);
	return 0;
}
