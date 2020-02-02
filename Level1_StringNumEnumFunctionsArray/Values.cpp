#include<iostream>
using namespace std;

class Values
{
	public :
	int var1;
	int var2;
	int var3;
	
	public :
		void assign()
		{
			var1 = 5;
			var2 = 10;
			var3 = 30;
		}
		
		void display()
		{
			cout<<"The value of variable 1 is : "<<var1<<endl;
			cout<<"The value of variable 2 is : "<<var2<<endl;
			cout<<"The value of variable 3 is : "<<var3<<endl;
		}	
};

main()
{
	Values v;
	v.assign();
	v.var2 = 20;
	v.display();
}

