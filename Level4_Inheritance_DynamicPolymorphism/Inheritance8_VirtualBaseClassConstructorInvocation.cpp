#include<iostream>
using namespace std;

class A
{
	public :
		A()
		{
			cout<<"Constructor of A invoked"<<endl;
		}

		~A()
		{
			cout<<"Destructor of A invoked"<<endl;
		}
};

class B
{
	public :
		B()
		{
			cout<<"Constructor of B invoked"<<endl;
		}

		~B()
		{
			cout<<"Destructor of B invoked"<<endl;
		}	
};

class C : virtual public A
{
	public :
		C()
		{
			cout<<"Constructor of C invoked"<<endl;
		}

		~C()
		{
			cout<<"Destructor of C invoked"<<endl;
		}
};

class D : virtual public A
{
	public :
		D()
		{
			cout<<"Constructor of D invoked"<<endl;
		}

		~D()
		{
			cout<<"Destructor of D invoked"<<endl;
		}
};

class E
{
	public :
		E()
		{
			cout<<"Constructor of E invoked"<<endl;
		}

		~E()
		{
			cout<<"Destructor of E invoked"<<endl;
		}
};

class F : public B,public C, public D
{
	private :
		E eVar;
		
	public :
		F()
		{
			cout<<"Constructor of F invoked"<<endl;
		}

		~F()
		{
			cout<<"Destructor of F invoked"<<endl;
		}
};

main()
{
	F fVar;
	cout<<"End of program"<<endl;
	
	/*Invocation of constructors and destructors*/
	
	/* Order of constructor invocation
	> Virtual base class constructors
	> Non-virtual base class constructors
	> Member objects constructors
	> Derived class constructors
	
	Note : Destructors are invoked in the reverse order of the invocation of constructors
	
	*/
}
