#include<iostream>
using namespace std;

class PassByValue
{
	public :
		void accept(int arr[])
		{
			cout<< "The parameter array passed as arguments are : "<<endl;
			for(int i=0;i<(sizeof(arr)-1);i++)
			{
				cout<< arr[i]<<endl;
			}
		}
}; 

main()
{
	int nums[] ={3,57,74,28,79,90,43};
	PassByValue obj;
	obj.accept(nums);
}
