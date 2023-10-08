#include<iostream>
using namespace std;

class fruit
{
	public:
		string name;
		string color;
};

int main()
{
	fruit apple;
	apple.name = "Apple";
	apple.color = "Red";
	cout<<apple.name<<"_"<<apple.color<<endl;
			//or
//	fruit*mango = now fruit();
//	mango->name="Mango";			//2way of writing 
//	mango->color="yellow";
//	cout<<apple->name<<"_"<<apple->color<<endl;
}
