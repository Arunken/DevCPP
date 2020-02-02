#include <iostream>
using namespace std;

class ArrayDemo
{
	int arr [3];
	public :
		void initialize()
		{
			arr[0]=24;
			arr[1]=41;
			arr[2]=69;
		} 
		void Display()
		{
			cout<< "arr[0] : "<<arr[0]<<endl;
			cout<< "arr[1] : "<<arr[1]<<endl;
			cout<< "arr[2] : "<<arr[2]<<endl;
				
		}
};

main()
{
	ArrayDemo obj;
	obj.initialize();
	obj.Display();
}
