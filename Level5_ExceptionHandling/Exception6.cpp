#include<iostream>
using namespace std;

int main()
{
	try
	{
		throw 'a';//char is thrown
	}
	catch(int x)//no catch block for catching a char and so the program terminates abnormally
	{
		cout<<"Caught "<<x;
	}

}
