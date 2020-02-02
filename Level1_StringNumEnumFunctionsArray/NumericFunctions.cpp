#include<iostream>
#include<cmath>//for numeric operations except atoi
#include<cstdlib>//for the numeric operation atoi

using namespace std;

class NumericFunctions
{
	
	public:
		void absoluteVal()
		{
			int a= -5;
			cout<< "The absolute value of "<<a<<" is "<<abs(a)<<endl;
			
			cout<<"==========================================================="<<endl;
		}
		
		void integerCeilFun()
		{
			float b = 8.4;
			cout<<"The nearest integer value greater than or equal to "<<b<<" is "<<ceil(b)<<endl;
			cout<<"==========================================================="<<endl;

		}
		
		void integerFloorFun()
		{
			double c = 1.8;
			cout<< "The largest integer value that is less than or equal to "<<c<<" is "<<floor(c)<<endl;
			cout<<"==========================================================="<<endl;

		}
		
		void squareRoot()
		{
			double d = 36.0;
			cout<<"The square root of "<<d<<" is "<<sqrt(d)<<endl;
			cout<<"==========================================================="<<endl;

		}
		
		void parseInt()
		{
			char str[]= "1234A";
			char str1[]= "A1234";
			char str2[]= "123A4";
			
			cout<<"The integer stored in the string "<<str<<" is "<<atoi(str)<<endl;
			cout<<"The integer stored in the string "<<str1<<" is "<<atoi(str1)<<endl;
			cout<<"The integer stored in the string "<<str2<<" is "<<atoi(str2)<<endl;
			cout<<"==========================================================="<<endl;

		}
};

int main()
{
	NumericFunctions obj;
	obj.absoluteVal();
	obj.integerCeilFun();
	obj.integerFloorFun();
	obj.squareRoot();
	obj.parseInt();
}
