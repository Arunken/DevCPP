#include <iostream>
using namespace std;

class ArrayDemo
{
	char arr[3];//character arrays are string in C++
	
	public :
		void accept()
		{
			cout<< "Enter elements in the array one by one : "<<endl;
			cin>>arr[0];
			cin>>arr[1];
			cin>>arr[2];
			
		}
	

		void Display()
		{
			cout<< "Array arr elements : "<<endl<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
		}

};

main()
{
	ArrayDemo obj;
	obj.accept();
	obj.Display();
}
