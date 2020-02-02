#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream objin("str.tst");
	char str[30];
	//objin>>str;//will only contain the first word.
	objin.getline(str,100);
	cout<<"The string read from the file is : "<<endl;
	cout<<str<<endl;
}
