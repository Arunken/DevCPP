#include<iostream>
using namespace std;

struct str
{
	int  regNo;
	int age;
}c1,c2; //structure variables

main()
{
	
	cout<<"Enter 1st register No : "<<endl;
	cin>>c1.regNo;
	
	cout<<"Enter 1st age : "<<endl;
	cin>>c1.age;
	
	cout<<"Enter 2nd register No : "<<endl;
	cin>>c2.regNo;
	
	cout<<"Enter 2nd age : "<<endl;
	cin>>c2.age;
	
	cout<<"The Register no's are :"<<endl;
	cout<<c1.regNo<<endl<<c2.regNo<<endl;
	cout<<"The age is :"<<endl;
	cout<<c1.age<<endl<<c2.age;
}
