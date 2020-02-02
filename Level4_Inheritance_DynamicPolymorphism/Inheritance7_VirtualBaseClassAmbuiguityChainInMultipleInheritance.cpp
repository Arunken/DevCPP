#include<iostream>
using namespace std;

/*
The principle behind virtual base classes is to have only one copy of the base class members in memory.
Inheriting a class more than once through multiple paths creates multiple copies of the base class members in
memory. Thus, by declaring the base class inheritance as virtual, only one copy of the base class is inherited.
A base class inheritance can be specified as virtual by using the virtual qualifier.
*/
class A
{
	public : 
		int aVar;
};

class B : virtual public A
{
	public : 
		int bVar;
};

class C : virtual public A
{
	public : 
		int cVar;
};

class D : public B,public C
{
	public : 
		int dVar;
};

main()
{
	D obj;
	obj.aVar=10; //no ambiguity
	cout<<obj.aVar;
}
