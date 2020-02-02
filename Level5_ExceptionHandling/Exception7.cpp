#include<iostream>
using namespace std;

int main()
{
	try
	{
		try//nested try catch
		{
			throw 20;
		}
		catch(int x)//first catch
			{
				cout<<"Handle Partially"<<endl;
				//throw x;//rethrowing exception using throw keyword
			}
		
	}
	catch(int x)//catching the rethrown exception
	{
		cout<<"Handle remaining "<<x<<endl;
	}


}
