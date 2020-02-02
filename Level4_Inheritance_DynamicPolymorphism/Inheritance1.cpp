#include<iostream>
using namespace std;

class Parent
{
	public :
		void nose()
		{
			cout<<"parent's nose"<<endl;
		}
};

class Child : public Parent
{	
	public :
		void ears()
		{
			cout<<"child's ears"<<endl;
		}
}; 

main()
{
	Child obj;
	obj.nose();//the function nose() of the parent class is inherited by the child class
	obj.ears();
}
