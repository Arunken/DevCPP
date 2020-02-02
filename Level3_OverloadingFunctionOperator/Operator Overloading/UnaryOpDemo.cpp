#include<iostream>

using namespace std;

class UnaryOpDemo
{
	private :
		int a;
		int b;
		
	public :
		void operator-();
		void accept(int, int);
		void print();

};

void UnaryOpDemo::operator-()
{
	a=-a;
	b=-b;
}
void UnaryOpDemo::accept(int x,int y)
{
	a=x;
	b=y;
}
void UnaryOpDemo::print()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}

int main()
{
	UnaryOpDemo i1;
	i1.accept(15,-25);
	i1.print();
	
	-i1;// calls the operator-() function
	i1.print();
	return 0;
}
