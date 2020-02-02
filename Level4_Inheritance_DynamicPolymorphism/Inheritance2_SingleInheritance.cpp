#include<iostream>
using namespace std;

class Employee
{
	public :
		void empFun()
		{
			cout<<"function from Employee class"<<endl;
		}
};

class Trainee : public Employee
{	
	public :
		void traineeFun()
		{
			cout<<"function from Trainee class"<<endl;
		}
}; 

main()
{
	Trainee obj;
	obj.empFun();//the function empFun() of the parent class is inherited by the child class
}
