#include<iostream>
using namespace std;

class  Exception3
{
 public :
 	void myFun()
	 {
	 	int x;
	 	cout<<"Enter a positive number:"<<endl;
	 	cin>>x;
		cout<<"Before try"<<endl;
		try
		{
			cout<<"Inside try"<<endl;
			if(x<0)
			{
				throw x;
				cout<<"After throw(wont be executed) "<<endl;
			}
		
		}
		catch(int x)
		{
			cout<<"Number ("<<x<<") cannot be negative"<<endl;
		}
		cout<<"After catch"<<endl;
	 }
};

main()
{
	Exception3 obj;
	obj.myFun();
}

