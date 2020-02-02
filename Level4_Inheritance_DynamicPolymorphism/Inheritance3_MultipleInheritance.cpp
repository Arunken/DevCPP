#include<iostream>
using namespace std;

class Stud
{
	protected:
		int rollNo;
		
	public :
		void get()
	{
		cout<<"Enter the roll no :"<<endl;
		cin>>rollNo;
	}	
};

class Extracurriculam
{
	protected :
		int xm;
		
	public :
		void getsm()
		{
			cout<<"Enter the mark of extracc activities :"<<endl;
			cin>>xm;
		}
};

class Output : public Stud, public Extracurriculam
{
	
	public :
		void display()
		{
			cout<<"Roll no : "<<rollNo<<endl;
			cout<<"ECA mark : "<<xm<<endl;
		}
};

main()
{
	Output obj;//subclass object
	obj.get();//method of superclass Stud
	obj.getsm();//method of superclass Extracurriculum
	obj.display();
}
