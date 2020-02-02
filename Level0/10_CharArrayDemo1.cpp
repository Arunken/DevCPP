#include <iostream>
using namespace std;

class ArrayDemo1
{

	public :
		static void accept()
		{
			char arr1[]="Enter the first three letters of your name";//character arrays are string in C++// static data member
			char arr[3];//non static data member
			
			
			cout<< arr1<<endl;
			cin>>arr[0];
			cin>>arr[1];
			cin>>arr[2];
			cout<< "Array arr elements : "<<endl<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
		}

};

main()
{
	ArrayDemo1 obj;
	obj.accept();

}
