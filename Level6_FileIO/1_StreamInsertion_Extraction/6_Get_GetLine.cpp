#include<iostream>
#include<string>
using namespace std;

main()
{
	/*getline function*/
	char ch1[20];
	char ch2[20];
	cout<<"Enter the first  string having a max of 19 characters(getline) : "<<endl;
	cin.getline(ch1,20);// extracts the delimiting character \n from the buffer 
	cout<<"Enter the second  string having amax of 19 characters(getline) : "<<endl;
	cin.getline(ch2,20);
	cout<<"The first string entered is : "<<ch1<<endl;
	cout<<"The second string entered is : "<<ch2<<endl;
	
	/*get function*/
	char nam1[20];
	char nam2[20];
	cout<<"Enter the first  string having a max of 19 characters(get) : "<<endl;
	cin.get(ch1,20);// \n will remain in the buffer after the first cin
	cin.get();// used to remove \n from the buffer
	cout<<"Enter the second  string having amax of 19 characters(get) : "<<endl;
	cin.get(ch2,20);
	cout<<"The first string entered is : "<<ch1<<endl;
	cout<<"The second string entered is : "<<ch2<<endl;
}

