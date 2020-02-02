#include<iostream>
using namespace std;

class Employee
{
	public :
		Employee()
		{
			cout<<"constructor from Employee class"<<endl;
		}
};

class Trainee : public Employee
{	
	public :
		Trainee()
		{
			cout<<"constructor from Trainee class"<<endl;
		}
}; 

main()
{
	Trainee obj;//the constructor of the parent class is inherited by the child class
}
