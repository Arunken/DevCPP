#include<iostream>

using namespace std;

class ConstructnDestruct
{
	//public :
		//int a,b;
		//ConstructnDestruct *addr;
	
	public :
		ConstructnDestruct()
		{
			cout<<"Constructor invoked!!! "<<endl;
		}
		
		~ConstructnDestruct()
		{
			cout<<"Destructor invoked"<<endl;
		}
};

//ConstructnDestruct obj1;
main()
{
	cout<< "Inside the main method"<<endl;
	
	
		{
		ConstructnDestruct obj2;
		cout<<"here"<<endl;
		}
	
	cout<<"Last line of main method"<<endl;
}
