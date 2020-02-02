#include<iostream>
using namespace std;

class BinaryOpDemo
{
	
	private :
		int number;
		public :
			BinaryOpDemo();
			BinaryOpDemo(int);
			
	BinaryOpDemo operator+(BinaryOpDemo);
	void display();	
};

BinaryOpDemo :: BinaryOpDemo()
{
	number =0;
}

BinaryOpDemo::BinaryOpDemo(int num)
{
	number =num;
}
// returntype //classname
BinaryOpDemo BinaryOpDemo::operator+(BinaryOpDemo N)
{
	cout<<"Value set in the number is "<<number<<endl;
	BinaryOpDemo temp;
	cout<<"number value stored in num1 object "<<number<<endl;
	cout<<"number value stored in the object num2 is "<<N.number<<endl;
	temp.number = number+N.number;
	return temp;
}

void BinaryOpDemo::display()
{
	cout<<number<<endl;
}
int main()
{
	BinaryOpDemo num1(100);
	BinaryOpDemo num2(50);
	BinaryOpDemo num3; 
	num3 = num1+num2;
	num1.display();
	num2.display();
	num3.display();
	return 0;
}
