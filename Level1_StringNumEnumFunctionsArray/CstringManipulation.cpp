#include<iostream>
#include<cstring> //cstring header provides functions for dealing with C-style strings 

using namespace std;

class CstringManipulation
{
	public:
		void copyFun()
		{
			char str1[20];
			char str2[20]="We are all one";
			cout<< "Initial value in str1 is : "<<str1<<endl;
			cout<< "Initial value in str2 is : "<<str2<<endl;
			cout<< "copied value into str1 String : ";
			
			strcpy(str1,str2);
			cout<< str1<<endl;	
			cout<<"============================================"<<endl;
		}
		
		void concatFun()
		{
			char s1[20] = "We are ";
			char s2[20] = "all one";
			cout<< "Value in s1 is : "<<s1<<endl;
			cout<< "Value in s2 is : "<<s2<<endl;
			cout<< "value in s1 after concatenation : ";
			
			strcat(s1,s2);
			cout<< s1<<endl; 
			cout<<"============================================"<<endl;
		}
		
		void copyNFun()
		{
			char str1[20]="";
			char str2[20]="We are all one";
			cout<< "Value in str1 is : "<<str1<<endl;
			cout<< "Value in str2 is : "<<str2<<endl;
			cout<< "copied value into str1 String : ";
			
			strncpy(str1,str2,6); 
			cout<< str1<<endl;
			cout<<"============================================"<<endl;
		}
		
		void lengthFun()
		{
			char s[20] = "hello X";
			int num = strlen(s);
			cout<<"Length of the string : "<< num<<endl;
			cout<<"============================================"<<endl;
		}

};

main()
{
	CstringManipulation obj;
	obj.copyFun();
	obj.concatFun();
	obj.copyNFun();
	obj.lengthFun();
}
