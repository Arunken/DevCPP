#include<iostream>
using namespace std;

main()
{
	try
	{
		int age;
		cout<<"Enter the age : ";
		cin>>age;
		if(age>100 || age<1) 
		{
			throw "Invalid age!";
		}
		cout<<"After the throw statement"<<endl;
	}
	catch(const char *msg)
	{
		cout<<"Exception : "<<msg<<endl;
	}
	cout<<"End of the program";
}
