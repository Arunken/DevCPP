#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

main()
{
	ofstream objOut("numfile.tst");
	int num = 2347;
	char arr[] = "hello";
	objOut.write((char*)num,sizeof(num));//error
	objOut.close();
	
	//ifstream objIn("numfile.tst");
	//int x;
	//objIn.read((char*)x,3);
	//cout<<x;
	
}
