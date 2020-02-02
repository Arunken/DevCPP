#include<iostream>

using namespace std;

class CallByRefPointers
{
	int num;
	int *ptr;
	public :
		void myFun()
		{
			num = 13;
			ptr = &num;//referencing the value of num to a pointer
			
			cout<<"address stored in the pointer : "<<ptr<<endl;
			cout<<"value stored in the pointer : "<<*ptr<<endl;
		}
};

main()
{
	CallByRefPointers obj;
	obj.myFun();
}
