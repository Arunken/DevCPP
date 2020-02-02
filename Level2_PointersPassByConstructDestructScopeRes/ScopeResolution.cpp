#include<iostream>
#include<conio.h>

using namespace std;

class ScopeResolution
{
	public:
		ScopeResolution();
		void myFun();
		void Hello();

};

ScopeResolution::ScopeResolution()		
				{
					cout<<"constructor invoked!"<<endl;
				}
void ScopeResolution::myFun()
					{
						cout<<"Inside the myFun() method"<<endl;
					}			
void ScopeResolution::Hello() 	
					{
						cout<<"Inside the Hello() method"<<endl;
					}

main()
{
	cout<<"Hello"<<endl;
	system("cls");
	cout<<"Inside main method"<<endl;
	ScopeResolution obj;
	obj.myFun();
	obj.Hello();
}										
