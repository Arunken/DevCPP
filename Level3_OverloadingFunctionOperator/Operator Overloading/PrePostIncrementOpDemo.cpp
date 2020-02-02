#include<iostream>

using namespace std;

class PrePostIncrementOpDemo
{
	private :
		int number;
	public :
		PrePostIncrementOpDemo();//Constructor
		PrePostIncrementOpDemo(int);
		PrePostIncrementOpDemo operator++();// pre increment
		PrePostIncrementOpDemo operator++(int);//post increment
		void display();	
};

PrePostIncrementOpDemo::PrePostIncrementOpDemo()
{
	number=0;
}
PrePostIncrementOpDemo::PrePostIncrementOpDemo(int num)
{
	number=num;
}

PrePostIncrementOpDemo PrePostIncrementOpDemo::operator++()//pre increment
{
	PrePostIncrementOpDemo obj;
	number = number +1;// First increment number
	obj.number= number;// Then assign the value to obj
	return obj; // return the incremented 
}

PrePostIncrementOpDemo PrePostIncrementOpDemo::operator++(int)//post increment
{
	PrePostIncrementOpDemo obj;
	obj.number = number;//First assign the current value of number to temp
	number = number+1;// Then increment number
	return obj; //Return the original value
}

void PrePostIncrementOpDemo::display()
{
	cout<<number<<endl;
}
int main()
{
	PrePostIncrementOpDemo num1(100);
	PrePostIncrementOpDemo num2;
	num2=num1++;//post increment
	num1.display();//display 101
	num2.display();//display 100
	num2 = ++num1;//pre increment
	
	num1.display();// display 102
	num2.display();//display 102
	return 0;
}

