#include<iostream>
using namespace std;
void Square(int&,int&);// declaration of method Square
void Cube(int&,int&);//declaration of method Cube

main()
{
	int x = 2;
	int y = 3;
	
	void(*pFun)(int&,int&);
	
	pFun=Square;
	pFun(x,y);
	cout<<"x * x = "<<x<<endl;
	cout<<"y * y = "<<y<<endl<<endl;
	
	pFun=Cube;
	cout<<"Before cube call, x = "<<x<<endl;
	cout<<"Before cube call, y = "<<y<<endl;
	pFun(x,y);
	cout<<"After cube call, x * x * x = "<<x<<endl;
	cout<<"After cube call, y * y * y = "<<y<<endl<<endl;
}
void Square(int &rX,int &rY)
{
	rX *=rX;
	rY *=rY;
}

void Cube(int & rX,int & rY)
{
	int tmp;
	tmp=rX;
	rX *=rX;
	rX=rX*tmp;
	
	tmp=rY;
	rY *=rY;
	rY=rY*tmp;
}
