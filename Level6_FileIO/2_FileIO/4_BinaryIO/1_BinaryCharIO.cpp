#include<iostream>
#include<fstream>
#include<cstring> //for strlen()
using namespace std;

// with binary I/O the problem of accepting and writing strings with white spaces is solved
main()
{
	ofstream outObj("file.tst");
	char str[] = "lead me from darkness to light";
	for(int i=0;i<=strlen(str);i++)
	{
		outObj.put(str[i]);//put() function is used to write in to the file as binary values
	}
	outObj.close();
	
	ifstream infile("file.tst");
	char s1[80];
	int i=0;
	while(infile.get(s1[i++])); //while the EOF(end of file) character has not been read
									//get() function is used to read the binary values from the file
	cout<<s1;
	 
}
