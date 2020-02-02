#include<iostream>
using namespace std;

class ConstructorDemo1
{
	public :
	int a = 22;//[Warning] non-static data member initializers only available with -std=c++11
	int b = 33;
	
	int x;
	int y;


	ConstructorDemo1()
	{
		cout<<"constructor is invoked "<<endl;
		cout<<"Initializing values of x and y"<<endl;
		x = 3;
		y = 7;
		
		cout<<"Number x : "<<x<<endl;
		cout<<"Number y : "<<y<<endl;
	}
	
};

main()
{
	ConstructorDemo1 obj;
	cout<<"Numbers initialized in the class"<<endl;
	cout<<"Number stored in a : "<<obj.a<<endl;
	cout<<"Numeber stored in b : "<<obj.b<<endl;
	
}
