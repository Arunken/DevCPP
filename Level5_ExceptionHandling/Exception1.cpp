#include<iostream>
using namespace std;

class Exception1
{
	public :
		void fun()
		{
			try
			{
			int a,b,c;
			cout<<"--- Division Example ---"<<endl;
			cout<<"Enter the numerator : ";
			cin>>a;
			cout<<"Enter the denominator :";
			cin>>b;
			if(b==0)
			{
				throw "denominator cannot be zero!";
			}
			c = a/b;
			cout<<a<<" divided by "<<b<<" = "<<c<<endl;
		
			}
			catch(const char x[])
			{
				cout<<x<<endl;
				fun();
			}
		}
};
main()
{

	Exception1 obj;
	obj.fun();
	
}
