#include <iostream>

using namespace std;

class StringReversal
{
	char arr[30],arr1[30];
	int index=0;
	
	public:
		void accept()
		{
			cout<< "Enter a Word : "<<endl;
		
				cin>> arr;
		
			
			
			while(arr[index]!='\0')
			{
				index+=1;
			}
			
			int j=0;
			for(int i=(index-1);i>=0;i--)
			{
				arr1[j]=arr[i];
				j++;	
			}
					
		}
		
		void display()
		{
			cout << "The reversed word is : ";
			for(int i=0;i<index;i++)
			{
				cout<<arr1[i];
			}
		} 
};

main()
{
	StringReversal sr;
	sr.accept();
	sr.display();
}
