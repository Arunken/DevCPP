#include<iostream>

using namespace std;

class CallByRefAlias
{
	int num;
	public :
		void myFun()
		{
			num=5;
			int &als = num;//alias or reference should always be initialized
			
			cout<<"num  = "<<num<<endl<<"alias = "<<als<<endl;
			cout<<"Address of the number = "<<&num<<endl;
			cout<<"Address of the alias = "<<&als<<endl;
		}
};

main()
{
	CallByRefAlias obj;
	obj.myFun();
}
