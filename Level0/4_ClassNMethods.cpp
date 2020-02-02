#include <iostream>

using namespace std;

class MyClass
{
	public :
		void display()
		{
			cout<<"Hello!! this is from display method";
		}
};

main()
{
	MyClass obj;
	obj.display();
}
