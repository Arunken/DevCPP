#include<iostream>
#include<cstring>// C library

using namespace std;

class CstringManipulation
{
	public :
	void searchString()
	{
		char str1[20]="Hello world";
		char str2[20]="or";
		cout<< "First string : "<<str1<<endl;
		cout<< "Second string : "<<str2<<endl;
		
		cout<<"String returned : "<<strstr(str1,str2)<<endl;//returns a string from the first string starting from the occurence of the second string
		cout<< "Length of string : "<<strlen(strstr(str1,str2))<<endl;
		cout<<"================================================="<<endl; 
	}
	
	void strcompare()
	{
		char s1[20]="Hello world";
		char s2[20]="or";
		cout<< "First string : "<<s1<<endl;
		cout<< "Second string : "<<s2<<endl;
		
		cout<< "Difference between the ASCII values of the unequal characters : " <<strcmp(s1,s2)<<endl;//if the value returned is zero then both strings are equal.
		cout<<"================================================="<<endl; 
	}
	
	void searchChar()
	{
		char s1[20]="Hello world";
		
		cout<< "First string : "<<s1<<endl;
		cout<< "End of the string or length of the string : "<<strchr(s1,'e')<<endl;//Searches for a single character and returns a string starting from the character
		cout<<"================================================="<<endl; 
	}
	
	
	
};

main()
{
	CstringManipulation obj;
	obj.searchString();
	obj.strcompare();
	obj.searchChar();
}
