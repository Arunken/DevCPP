#include<iostream>
using namespace std;

class Stud
{
	protected:
		int rollNo;
		
	public :
		Stud()
	{
		cout<<"Enter the roll no :"<<endl;
		cin>>rollNo;
	}	
};

class Extracurriculam : public Stud
{
	protected :
		int xm;
		
	public :
		Extracurriculam()
		{
			cout<<"Enter the mark of extracc activities :"<<endl;
			cin>>xm;
		}
};

class Other : public Extracurriculam
{
	
	public :
		Other()
		{
			cout<<"Roll no : "<<rollNo<<endl;
			cout<<"ECA mark : "<<xm<<endl;
		}
};

main()
{
	Other obj;//subclass object

}
