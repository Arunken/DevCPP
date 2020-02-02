#include<iostream>
#include<fstream>

using namespace std;


main()
{
	fstream file;
	file.open("sample.txt");//open sample.txt in write mode
	if(!file)
	{
		cout<<"Error in creating file";
	}
	//write A to Z
	file<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//print the position
	cout<<"Current position is : "<<file.tellp()<<endl;
	file.close();
	
	//again open file in read mode
	file.open("sample.txt");
	if(!file)
	{
		cout<<"Error in opening file!!!";
	}
	cout<<"After opening file position is : "<<file.tellg()<<endl;
	
	//read characters untill end of file is not found
	char ch;
	while(!file.eof())
	{
		cout<<"At position : "<<file.tellg();//current position
		file>>ch;//read character from file;
		cout<<"Character \""<<ch<<"\""<<endl;
	}
	
	//close the file
	file.close();
	
}
