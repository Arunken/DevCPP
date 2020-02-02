#include<iostream>
using namespace std;

//Structure is a user-defined datatype in c++ to represent a collection of logically related data items.
struct str
{
	int  regNo;
	int age;
};

main()
{
	str s;
	cout<<"Enter the register No : "<<endl;
	cin>>s.regNo;
	
	cout<<"Enter the age : "<<endl;
	cin>>s.age;
	
	cout<<"The Register no is :"<<endl;
	cout<<s.regNo<<endl;
	cout<<"The age is :"<<endl;
	cout<<s.age;
}
