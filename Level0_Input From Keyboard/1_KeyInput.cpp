#include<iostream>
#include<string>
using namespace std;


struct str
{
	int  regNo;
	int age;
}c1,c2; //structure variables

main()
{
	int a;
	char ch,ch1;
	char carr[50],carr1[50];

	
	cout<<"Enter a number : "<<endl;
	cin>>a;
	cout<<"Enter a character "<<endl;
	cin>>ch;
	cout<<"Enter a character array "<<endl;
	cin>>carr;
	cout<<"================Output================="<<endl<<endl;
	cout<<a<<endl<<ch<<endl<<carr<<endl;
	cout<<"=================================="<<endl<<endl;
	
	cout<<"Enter a character "<<endl;
	cin>>ch1;
	fflush(stdin);
	cout<<"Enter a character array "<<endl;
	cin>>carr1;
	fflush(stdin);//to clear the keyboard buffer
	cout<<"================Output================="<<endl<<endl;
	cout<<ch1<<endl<<carr1<<endl;
	cout<<"======================================"<<endl<<endl;
	
	string carr2;
	cout<<"Enter a string as a sentence "<<endl;
	getline(cin,carr2);
	fflush(stdin);
	cout<<"================Output================="<<endl<<endl;
	cout<<carr2<<endl;
	cout<<"======================================"<<endl<<endl;
	
	char carr3[50];
	cout<<"Enter a character array as a sentence : "<<endl<<endl;
	gets(carr3);
	fflush(stdin);
	cout<<"================Output================="<<endl<<endl;
	cout<<carr3<<endl;
	cout<<"======================================"<<endl<<endl;
		
}
