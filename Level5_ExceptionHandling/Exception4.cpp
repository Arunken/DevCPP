#include<iostream>
using namespace std;

main()
{
	try
	{
		throw 10;
	}
	catch(const char *msg)
	{
		cout<<"character caught :"<<msg<<endl;
	}
	catch(...)//default exception catches all exceptions that are not specified 
	{
		cout<<"Default Exception"<<endl;
	}
}
