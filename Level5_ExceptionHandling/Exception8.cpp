#include<iostream>
using namespace std;

class Exception8
{
	public :
		Exception8()
		{
			cout<<"Constructor of Exception8"<<endl;
		}
		~Exception8()
		{
			cout<<"Destructor of Exception8"<<endl;
		}
};

int main()
{
//When an exception is thrown, all the objects created inside the enclosing try block are
// destructed before the control is transferred to catch block

try
{
	Exception8 obj;
	throw 10;
}
catch(int i)
{
	cout<<"Caught "<<i<<endl;
}


}
