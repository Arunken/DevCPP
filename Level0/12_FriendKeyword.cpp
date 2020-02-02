#include <iostream>
using namespace std;

class Myclass
{
	friend void changeVal();//ChangeVal() function declared as a friend
	private  : 
		int a =4;// private variables are not accessible outside the class unless it is a friend 

};

 void changeVal()
 {
 	Myclass obj;
 	obj.a=8;
 	cout<< "a = "<<obj.a;
 }

int main()
{
	changeVal();

}
