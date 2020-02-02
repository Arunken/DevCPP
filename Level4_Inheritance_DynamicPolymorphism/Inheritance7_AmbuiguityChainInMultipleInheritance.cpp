#include<iostream>
using namespace std;
class A
{
	public :
		int aVar;
};

class B : public A
{	
	public :
		int bVar;
};

class C : public A
{	
	public :
		int cVar;
};

class D : public B, public C
{
	public : 
		int dVar;	
};

main()
{
	D obj;
	//obj.aVar=10; // ambiguous access. The reason is given below
	obj.B::aVar=11;
	cout<<obj.B::aVar;
	
	/*Ambiguity chain*/
	
	//classes 'B' and 'C' inherits class A and so they both inherit attributes of class A.
	// class 'D' inherits both class 'B' and 'C' and so class 'D' will have two copies of class 'A' causing ambiguity.
	
	// Solution : use scope resolution operator or using virtual base class
	

	  
}
