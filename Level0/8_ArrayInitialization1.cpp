#include <iostream>
using namespace std;

class ArrayDemo
{
	int arr [3]={2,6,9};//static data member 
	
	public :

		void Display()
		{
			cout<< "Array arr elements : "<<endl<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
		}
		 void Display1()
		{
			static int arr1 []={6,7,8};//non-static data member //non-static data member initializers only available with c++11 std 
			cout<< "Array arr1 elements : "<<endl<<arr1[0]<<endl<<arr1[1]<<endl<<arr1[2]<<endl;
		}
};

main()
{
	ArrayDemo obj;
	obj.Display();
	obj.Display1();
}
