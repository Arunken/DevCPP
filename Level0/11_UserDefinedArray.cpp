#include <iostream>
using namespace std;

class ArrayDemo
{
	int arr [3];
	
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
	ArrayDemo obj[2];
	obj[0].accept();
	obj[1].accept();
	obj[0].Display();
	obj[1].Display();
}
