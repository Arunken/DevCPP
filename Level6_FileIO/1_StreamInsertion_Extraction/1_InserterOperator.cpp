#include<iostream>

using namespace std;

main()
{
	int i = 10;
	int *iPtr = &i;
	char cPtr[] = "string";
	cout<<"iPtr = "<<iPtr<<endl;
	cout<<"cPtr = "<<cPtr<<endl;
	cout<<"A is = "<<('A'+i-10)<<endl;// output wil be the ASCII value of A. A is being typecasted to its integer
										// value while processing data contained 
	cout<<"char A is = "<<(char) ('A'+i-10)<<endl;// typecasting ascii value to ascii character
	cout<<"cPtr address = "<<(void *)cPtr<<endl;
}
