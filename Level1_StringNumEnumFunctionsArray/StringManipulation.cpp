#include<iostream>
#include<string>//string header provides the std::string class and related functions and operators


using namespace std;

class StringManipulation
{
	public:
		void myFun()
		{
			string str;
			cout<< "Enter a string : ";
			//cin>> str;//cin does not admit a string containing spaces
			getline(cin,str);
			cout<<endl<< "the entered string is : ";
			
			cout<< str;
		}
		
};

main()
{
	StringManipulation obj;
	obj.myFun();
}
