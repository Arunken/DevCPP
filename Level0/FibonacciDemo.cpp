#include <iostream>
using namespace std;

class FibonacciDemo
{
	int limit;
	int num1=1,num2=1;
	public:
		void accept()
		{
			cout<< "Enter the limit : ";
			cin>> limit;
		} 
		
		void fibon()
		{
			while(num2<limit)
			{
				cout<< num2<< endl;
				num2= num2+num1;
				num1 = num2-num1;
			}
			
		}
};

int main()// main should return an int
{
	FibonacciDemo obj;
	obj.accept();
	obj.fibon();
	return 0;
}

