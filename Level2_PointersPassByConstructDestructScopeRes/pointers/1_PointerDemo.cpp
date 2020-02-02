#include<iostream>

using namespace std;

class PointerDemo
{
	public :
		void myFun()
		{
			int  var = 20;   // actual variable declaration.
   			int  *ip;        // pointer variable 
			
   			ip = &var;       // store address of var in pointer variable

			
			
			cout<<"Address of the variable var : ";
			cout<<&var<<endl;

   			// print the address stored in ip pointer variable
   			cout << "Address stored in the pointer : ";
  			 cout << ip << endl;
  			 
  			 // Address of the pointer
  			 cout<<"Address of the pointer : ";
  			 cout<<&ip<<endl;

			cout << "Value of var variable: ";
   			cout << var << endl;
   			
   			// access the value at the address available in pointer
   			cout << "Value stored in the address that the pointer is pointing towards : ";
   			cout << *ip << endl;

		}
};

main()
{
	PointerDemo obj;
	obj.myFun();
}
