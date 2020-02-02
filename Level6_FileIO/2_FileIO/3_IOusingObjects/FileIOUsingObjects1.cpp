#include<iostream>
#include<fstream>
using namespace std;
class student
{
	public :
		int regNo;
		char cName[20];
		
		void setDet()
		{
			cout<<"Enter the reg No : ";
			cin>>regNo;
			cout<<endl<<"Enter the Name : ";
			cin>>cName;
			cout<<"============================================";
		}
		
		int getDet()
		{
		 	cout<<"name = "<<cName<<endl<<"reg No = "<<regNo;
		}
};
main()
{
	student s;
	//Open file in write mode
	ofstream file("studfile.dat");// ofstream outObj; // outObj.open("studfile.dat"); can be used
	if(!file)
	{
		cout<<"Error creating file"<<endl;
	}
	cout<<"\n file created successfully"<<endl;
	
	//write into file
	s.setDet();//read from user
	file.write((char*)&s,sizeof(s));//write into file
	file.close();
	cout<<"\n file saved and closed successfully"<<endl;
	
	//choice to whether read from file
	char choice;
	cout<<"Do you want to view the contents of the file(y/n): ";
	cin>>choice;
	if(choice=='y')
	{
		ifstream file1("studfile.dat");
		if(!file1)
		{
			cout<<"Error in opening file...";
		}
		student s1;//The same object s can be used instead of creating a new one.
		file1.read((char*)&s1,sizeof(s1));
		
		s1.getDet();
		file1.close();
	}
}


