#include<iostream>
#include<string>

using namespace std;

class PointersOfTypeVoid
{
	public :
		void myFun()
		{
			int  var = 20;   
   			void  *ptr;        // POINTERS OF TYPE VOID CAN POINT TO ANY DATA TYPE
			
   			ptr = &var;       // store address of var in pointer variable

   			cout << "Value of var int variable: ";
   			cout << var << endl;

   			// access the value at the address available in pointer
   			cout << "Value stored in the address that the pointer is pointing towards : ";
   			cout << *(int *)ptr << endl;// typecasting the pointer of void type into int type to represent the value
   			
   			string str="My Name is Arun";
   			ptr=&str;
   			cout<<"Value of the string variable :";
   			cout<<str<<endl;
   			
   			cout<<"Value stored in the address that the pointer is pointing towards : ";
   			cout<< *(string *)ptr<<endl;
   			

		}
};

main()
{
	PointersOfTypeVoid obj;
	obj.myFun();
}
