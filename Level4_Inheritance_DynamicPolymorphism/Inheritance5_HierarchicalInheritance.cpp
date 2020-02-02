#include<iostream>
using namespace std;

class Person
{
	public :
		Person()
		{
			cout<<"Constructor from Person class"<<endl;
		}
};

class Employee : public Person
{
	public :
		Employee()
		{
			cout<<"Constructor from Employee class"<<endl;
		}
};

class Manager : public Person
{
	public :
		Manager()
		{
			cout<<"Constructor from Manager class"<<endl;
		}
};



main()
{
	Manager t;
	
}
