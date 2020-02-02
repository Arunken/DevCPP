#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream inobj("int.tst");//int.tst is opened in the input mode by using inobj
	int i,j,k;
	string str;
	inobj>>i>>str>>j>>k;
	cout<<"The data read from the file is stored in the variables : "<<endl;
	cout<<i<<endl<<str<<endl<<j<<endl<<k<<endl;
	
}
