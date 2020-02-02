#include<iostream>

using namespace std;

main()
{
	char *buff;
	try
	{
		for(int i=0;i<100;i++)
		{
			buff = new char[1000000000];
		}
		cout<<"hello";
		
	}
	catch(bad_alloc &obj)
	{
		cout<<"Exception raised : "<<obj.what()<<endl;
	}
	return 0;
}
